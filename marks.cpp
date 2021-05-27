// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 27, 2021
// Converts level marks into percentage

#include <iostream>
#include <string>
std::string level_4_plus() {
    return "97.5";
}
std::string level_4_() {
    return "90.5";
}
std::string level_4_minus() {
    return "83%";
}
std::string level_3_plus() {
    return "78%";
}
std::string level_3_() {
    return "74.5%";
}
std::string level_3_minus() {
    return "71%";
}
std::string level_2_plus() {
    return "68%";
}
std::string level_2_() {
    return "64.5%";
}
std::string level_2_minus() {
    return "61%";
}
std::string level_1_plus() {
    return "58%";
}
std::string level_1_() {
    return "54.5%";
}
std::string level_1_minus() {
    return "51%";
}
std::string level_R() {
    return "24.5%";
}
int invalid_input() {
    return -1;
}

main() {
    std::string mark_level, level_percent;
    int invalid;
    std::cout << "Enter your mark level: ";
    std::cin >> mark_level;

    if (mark_level == "4+") {
        level_4_plus();
        level_percent = level_4_plus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "4") {
        level_4_();
        level_percent = level_4_();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "4-") {
        level_4_minus();
        level_percent = level_4_minus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "3+") {
        level_3_plus();
        level_percent = level_3_plus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "3") {
        level_3_();
        level_percent = level_3_();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "3-") {
        level_3_minus();
        level_percent = level_3_minus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "2+") {
        level_2_plus();
        level_percent = level_2_plus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "2") {
        level_2_();
        level_percent = level_2_();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "2-") {
        level_2_minus();
        level_percent = level_2_minus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "1+") {
        level_1_plus();
        level_percent = level_1_plus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "1") {
        level_1_();
        level_percent = level_1_();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "1-") {
        level_1_minus();
        level_percent = level_1_minus();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else if (mark_level == "R") {
        level_R();
        level_percent = level_R();
        std::cout << "Level " << mark_level << " is ";
        std::cout << level_percent;
    } else {
        invalid_input();
        invalid = invalid_input();
        std::cout << invalid;
    }
    std::cout << "\nDone.";
    }
