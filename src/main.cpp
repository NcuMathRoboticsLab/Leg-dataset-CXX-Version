#include <Eigen/Dense>
#include <Eigen/StdVector>
#include <array>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

#include "Label.hpp"
#include "LoadData.hpp"
#include "matplotlibcpp.hpp"
namespace plt = matplotlibcpp;

inline double square(double x) { return x * x; }
inline double distance(const std::array<double, 2> &vec1, const std::array<double, 2> &vec2) {
    return sqrt(square(vec1[0] - vec2[0]) + square(vec1[1] - vec2[1]));
}

inline void AppendOneRow(Eigen::MatrixXd &A, const Eigen::MatrixXd &B) {
    std::size_t len = A.rows();
    A.conservativeResize(len + 1, A.cols());
    A(len, 0) = B(0, 0);
    A(len, 1) = B(0, 1);
}

inline void AppendTwoMatToB(const Eigen::MatrixXd &A, Eigen::MatrixXd &B) {
    Eigen::MatrixXd D(A.rows() + B.rows(), A.cols());
    D << A, B;
    B = D;
}

std::vector<Eigen::MatrixXd, Eigen::aligned_allocator<Eigen::MatrixXd>> Segment(const Eigen::MatrixXd &origin_data, double threshold = 0.1) {
    std::vector<std::array<double, 2>> data;
    std::vector<Eigen::MatrixXd, Eigen::aligned_allocator<Eigen::MatrixXd>> Returndata;
    for (std::size_t i = 0; i < origin_data.rows(); i++) {
        if (((origin_data(i, 0) != 0) || (origin_data(i, 1) != 0)) && (std::isfinite(origin_data(i, 0)) && std::isfinite(origin_data(i, 1)))) {
            // std::array<double, 2> push_data = { origin_data[i][0], origin_data[i][1] };
            data.push_back({origin_data(i, 0), origin_data(i, 1)});
        }
    }

    std::size_t validsize = data.size(), ReturnEndIDX = 0;
    bool one_is_end = distance(data[0], data[validsize - 1]) < threshold;
    Eigen::MatrixXd tmp(1, 2);
    tmp << data[0][0], data[0][1];

    Returndata.emplace_back(tmp);

    for (int i = 1; i < validsize; i++) {
        tmp << data[i][0], data[i][1];
        if (distance(data[i - 1], data[i]) < threshold)
            AppendOneRow(Returndata[ReturnEndIDX], tmp);

        else {
            ReturnEndIDX++;
            Returndata.emplace_back(tmp);
        }
    }

    if (one_is_end) {
        AppendTwoMatToB(Returndata[ReturnEndIDX], Returndata[0]);
        Returndata.pop_back();
    }
    return Returndata;
}

int main() {
    std::vector<Eigen::MatrixXd, Eigen::aligned_allocator<Eigen::MatrixXd>> data = LoadData::LoadData("../xy_data.txt");
    for (std::size_t frame_id = 0; frame_id < data.size(); frame_id++) {
        const Eigen::MatrixXd &d = data[frame_id];
        std::vector<Eigen::MatrixXd, Eigen::aligned_allocator<Eigen::MatrixXd>> Seg_data = Segment(d);
        std::cout << "There are " << Seg_data.size() << " segments at " << (frame_id + 1) << " sec " << std::endl;
        std::vector<std::size_t>
            label_id_list = Label::get_label_id(frame_id);

        Eigen::VectorXd eigen_x = d.col(0),
                        eigen_y = d.col(1);
        std::vector<double> x(eigen_x.data(), eigen_x.data() + eigen_x.size()), y(eigen_y.data(), eigen_y.data() + eigen_y.size());
        plt::clf();
        plt::plot(x, y, std::map<std::string, std::string>({{"marker", "."}, {"color", "blue"}, {"linestyle", ""}, {"markersize", "3"}}));

        for (std::size_t &leg_id : label_id_list) {
            std::cout << "  " << leg_id << "-th segment is a leg at " << (frame_id + 1) << " sec " << std::endl;
            Eigen::VectorXd seg_x = Seg_data[leg_id].col(0),
                            seg_y = Seg_data[leg_id].col(1);
            std::vector<double> x_(seg_x.data(), seg_x.data() + seg_x.size()), y_(seg_y.data(), seg_y.data() + seg_y.size());
            plt::plot(x_, y_, std::map<std::string, std::string>({{"marker", "o"}, {"markerfacecolor", "none"}, {"linestyle", ""}, {"markersize", "5"}}));
        }
        plt::title(std::to_string(frame_id + 1) + " sec.");
        plt::pause(0.1);
    }
}