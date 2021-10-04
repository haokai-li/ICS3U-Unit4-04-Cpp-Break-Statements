// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about break statements

#include <iostream>
#include <string>
#include <random>

int main() {
    // This Program is about break statements
    int answerNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    answerNumber = idist(rgen);

    std::string userString;
    int userNumberInt;
    float userNumberFloat;

    while (free) {
        // input
        std::cout << "Please enter a positive integer: ";
        std::cin >> userString;
        std::cout << "" << std::endl;

        // process
        try {
            userNumberFloat = std::stof(userString);
            userNumberInt = std::stoi(userString);
            if (userNumberFloat == userNumberInt) {
                if (userNumberInt == answerNumber) {
                    std::cout << "You are correctly." << std::endl;
                    break;
                } else if (userNumberInt < answerNumber) {
                        std::cout << userNumberInt << " is lower" << std::endl;
                        std::cout << "" << std::endl;
                    } else {
                        std::cout << userNumberInt << " is higher" << std::endl;
                        std::cout << "" << std::endl;
                }
            } else {
                std::cout << "You didn't enter an integer." << std::endl;
                std::cout << "" << std::endl;
            }
        } catch (std::invalid_argument) {
            // output
            std::cout << "You didn't enter an integer." << std::endl;
            std::cout << "" << std::endl;
        }
    }

    std::cout << "\nDone." << std::endl;
}
