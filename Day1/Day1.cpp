// Rachel Crosley
// Day1
// Advent of Code 2019
// Day1.cpp

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



int totalFuel(vector<string> s) {
    int total = 0;
    
    for(int i = 0; i <  s.size(); i++) {
        total += (std::stoi(s[i]) / 3) - 2;
    }
    
    
    return total;
}

int actualTotalFuel(vector<string> s){
    int total = 0;
    int mass = 0;
    
    for(int i = 0; i <  s.size(); i++) {
        mass = std::stoi(s[i]);
        
        while (mass > 6) {
            mass = (mass / 3) - 2;
            total += mass;
        }
    }
    
    return total;
}



vector<string> readInInput(string inputFilePath) {
    string line;
    vector<string> input;
    ifstream file;
    
    file.open(inputFilePath);
    
    if (!file) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    
    while(file >> line) {
        input.push_back(line);
    }
    
    file.close();
    
    return input;
}
