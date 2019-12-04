// Rachel Crosley
// Day1
// Advent of Code 2019
// main.cpp

#include "Day1.hpp"

#include <iostream>
#include <vector>
#include <fstream>
using std::getline;
using std::string;
using std::cin;
using std::vector;
using std::cout;
using std::endl;
using std::ifstream;




int main() {
    string inputFilePath = "input.txt";
    vector<string> input;
    int ans1 = 0;
    int ans2 = 0;
    
    input = readInInput(inputFilePath);
    
    ans1 = totalFuel(input);
    ans2 = actualTotalFuel(input);

    cout << endl;
    cout << "Answer to Part 1: " << ans1 << endl;
    cout << "Answer to Part 2: " << ans2 << endl;

    return 0;
}
