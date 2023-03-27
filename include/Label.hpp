
#ifndef LABEL_HPP
#define LABEL_HPP

#include <vector>
namespace Label {
std::vector<std::size_t> get_label_id(std::size_t &frame_id) {
    std::vector<std::size_t> output;
    if (frame_id == 0) {
        output.emplace_back(8);
        output.emplace_back(11);
    } else if (frame_id == 1) {
        output.emplace_back(10);
        output.emplace_back(11);
    } else if (frame_id == 2) {
        output.emplace_back(13);
        output.emplace_back(15);
    } else if (frame_id == 3) {
        output.emplace_back(14);
        output.emplace_back(16);
    } else if (frame_id == 4) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 5) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 6) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 7) {
        output.emplace_back(18);
        output.emplace_back(20);
    } else if (frame_id == 8) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 9) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 10) {
        output.emplace_back(17);
    } else if (frame_id == 11) {
        output.emplace_back(18);
    } else if (frame_id == 12) {
        output.emplace_back(17);
    } else if (frame_id == 13) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 14) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 15) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 16) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 17) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 18) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 19) {
        output.emplace_back(14);
        output.emplace_back(16);
    } else if (frame_id == 20) {
        output.emplace_back(12);
        output.emplace_back(13);
    } else if (frame_id == 21) {
        output.emplace_back(11);
        output.emplace_back(15);
    } else if (frame_id == 22) {
        output.emplace_back(8);
        output.emplace_back(11);
    } else if (frame_id == 23) {
        output.emplace_back(8);
        output.emplace_back(12);
    } else if (frame_id == 24) {
        output.emplace_back(8);
        output.emplace_back(10);
    } else if (frame_id == 25) {
        output.emplace_back(8);
        output.emplace_back(10);
    } else if (frame_id == 26) {
        output.emplace_back(7);
        output.emplace_back(11);
    } else if (frame_id == 27) {
        output.emplace_back(7);
        output.emplace_back(9);
    } else if (frame_id == 28) {
        output.emplace_back(6);
        output.emplace_back(8);
    } else if (frame_id == 29) {
        output.emplace_back(3);
        output.emplace_back(6);
    } else if (frame_id == 30) {
        output.emplace_back(3);
        output.emplace_back(20);
    } else if (frame_id == 31) {
        output.emplace_back(17);
        output.emplace_back(21);
    } else if (frame_id == 32) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 33) {
        output.emplace_back(15);
        output.emplace_back(16);
    } else if (frame_id == 34) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 35) {
        output.emplace_back(18);
        output.emplace_back(20);
    } else if (frame_id == 36) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 37) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 38) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 39) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 40) {
        output.emplace_back(15);
        output.emplace_back(18);
    } else if (frame_id == 41) {
        output.emplace_back(18);
    } else if (frame_id == 42) {
        output.emplace_back(18);
        output.emplace_back(21);
    } else if (frame_id == 43) {
        output.emplace_back(21);
        output.emplace_back(23);
    } else if (frame_id == 44) {
        output.emplace_back(1);
        output.emplace_back(24);
    } else if (frame_id == 45) {
        output.emplace_back(1);
        output.emplace_back(22);
    } else if (frame_id == 46) {
        output.emplace_back(1);
        output.emplace_back(2);
    } else if (frame_id == 47) {
        output.emplace_back(0);
        output.emplace_back(2);
    } else if (frame_id == 48) {
        output.emplace_back(0);
        output.emplace_back(24);
    } else if (frame_id == 49) {
        output.emplace_back(21);
        output.emplace_back(22);
    } else if (frame_id == 50) {
        output.emplace_back(18);
        output.emplace_back(21);
    } else if (frame_id == 51) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 52) {
        output.emplace_back(15);
        output.emplace_back(18);
    } else if (frame_id == 53) {
        output.emplace_back(15);
        output.emplace_back(16);
    } else if (frame_id == 54) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 55) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 56) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 57) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 58) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 59) {
        output.emplace_back(15);
        output.emplace_back(16);
    } else if (frame_id == 60) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 61) {
        output.emplace_back(14);
        output.emplace_back(15);
    } else if (frame_id == 62) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 63) {
        output.emplace_back(14);
    } else if (frame_id == 64) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 65) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 66) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 67) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 68) {
        output.emplace_back(17);
        output.emplace_back(18);
    } else if (frame_id == 69) {
        output.emplace_back(15);
        output.emplace_back(16);
    } else if (frame_id == 70) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 71) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 72) {
        output.emplace_back(16);
    } else if (frame_id == 73) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 74) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 75) {
        output.emplace_back(17);
        output.emplace_back(18);
    } else if (frame_id == 76) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 77) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 78) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 79) {
        output.emplace_back(15);
        output.emplace_back(19);
    } else if (frame_id == 80) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 81) {
        output.emplace_back(12);
        output.emplace_back(16);
    } else if (frame_id == 82) {
        output.emplace_back(13);
        output.emplace_back(15);
    } else if (frame_id == 83) {
        output.emplace_back(12);
        output.emplace_back(14);
    } else if (frame_id == 84) {
        output.emplace_back(12);
        output.emplace_back(15);
    } else if (frame_id == 85) {
        output.emplace_back(13);
        output.emplace_back(15);
    } else if (frame_id == 86) {
        output.emplace_back(12);
        output.emplace_back(14);
    } else if (frame_id == 87) {
        output.emplace_back(8);
        output.emplace_back(9);
    } else if (frame_id == 88) {
        output.emplace_back(6);
        output.emplace_back(8);
    } else if (frame_id == 89) {
        output.emplace_back(6);
        output.emplace_back(8);
    } else if (frame_id == 90) {
        output.emplace_back(7);
    } else if (frame_id == 91) {
        output.emplace_back(4);
        output.emplace_back(6);
    } else if (frame_id == 92) {
        output.emplace_back(0);
        output.emplace_back(4);
    } else if (frame_id == 93) {
        output.emplace_back(16);
        output.emplace_back(17);
    } else if (frame_id == 94) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 95) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else if (frame_id == 96) {
        output.emplace_back(12);
    } else if (frame_id == 97) {
        output.emplace_back(10);
        output.emplace_back(11);
    } else if (frame_id == 98) {
        output.emplace_back(11);
        output.emplace_back(14);
    } else if (frame_id == 99) {
        output.emplace_back(12);
        output.emplace_back(14);
    } else if (frame_id == 100) {
        output.emplace_back(17);
        output.emplace_back(19);
    } else if (frame_id == 101) {
        output.emplace_back(12);
        output.emplace_back(16);
    } else if (frame_id == 102) {
        output.emplace_back(11);
        output.emplace_back(13);
    } else if (frame_id == 103) {
        output.emplace_back(8);
        output.emplace_back(11);
    } else if (frame_id == 104) {
        output.emplace_back(8);
    } else if (frame_id == 105) {
        output.emplace_back(9);
        output.emplace_back(11);
    } else if (frame_id == 106) {
        output.emplace_back(9);
        output.emplace_back(14);
    } else if (frame_id == 107) {
        output.emplace_back(12);
        output.emplace_back(17);
    } else if (frame_id == 108) {
        output.emplace_back(9);
        output.emplace_back(13);
    } else if (frame_id == 109) {
        output.emplace_back(8);
        output.emplace_back(9);
    } else if (frame_id == 110) {
        output.emplace_back(12);
        output.emplace_back(16);
    } else if (frame_id == 111) {
        output.emplace_back(15);
        output.emplace_back(18);
    } else if (frame_id == 112) {
        output.emplace_back(12);
        output.emplace_back(14);
    } else if (frame_id == 113) {
        output.emplace_back(12);
        output.emplace_back(14);
    } else if (frame_id == 114) {
        output.emplace_back(15);
        output.emplace_back(16);
    } else if (frame_id == 115) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 116) {
        output.emplace_back(17);
        output.emplace_back(18);
    } else if (frame_id == 117) {
        output.emplace_back(16);
        output.emplace_back(18);
    } else if (frame_id == 118) {
        output.emplace_back(15);
        output.emplace_back(17);
    } else {
        output.emplace_back(17);
        output.emplace_back(19);
    }
    return output;
}
}  // namespace Label
#endif