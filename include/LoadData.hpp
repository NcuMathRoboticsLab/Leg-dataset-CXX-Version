#ifndef LOADDATA_HPP
#define LOADDATA_HPP

#include <Eigen/Eigen>
#include <Eigen/StdVector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace LoadData {
std::vector<Eigen::MatrixXd, Eigen::aligned_allocator<Eigen::MatrixXd>> LoadData(const std::string &filepath) {
    std::ifstream infile(filepath);
    if (infile.fail()) {
        throw std::invalid_argument("Cannot open the file.");
    }
    std::size_t row, col, seg;
    std::string line;
    std::stringstream stream;
    getline(infile, line);
    stream << line;
    stream >> row >> col >> seg;
    stream.clear();
    double buff;
    std::vector<Eigen::MatrixXd, Eigen::aligned_allocator<Eigen::MatrixXd>> output(seg, Eigen::MatrixXd(row, col));
    for (std::size_t seg_idx = 0; seg_idx < seg; ++seg_idx) {
        for (std::size_t row_idx = 0; row_idx < row; ++row_idx) {
            getline(infile, line);
            stream << line;
            for (std::size_t col_idx = 0; col_idx < col; ++col_idx) {
                stream >> buff;
                output[seg_idx](row_idx, col_idx) = buff;
            }
            stream.clear();
        }
    }
    infile.close();
    return output;
};
}  // namespace LoadData

#endif