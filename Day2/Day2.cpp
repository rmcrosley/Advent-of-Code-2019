// Rachel Crosley
// Day2
// Advent of Code 2019
// Day2.cpp


#include "Day2.hpp"
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


int intcode(string s) {

    for (int i = 0; i < 100; i++) {

        for (int j = 0; j < 100; j++) {

            if(opcode(s, i, j) == 19690720) {
                return 100 * i + j;
            }
        }
    }

    return -1;
}



int opcode(string &s, int noun, int verb) {
    
    vector<int> opcodeItems = parse(s);
    int oper = 0;
    int item1;
    int item2;
    int resultPos;
    int iter = 0;
    
    opcodeItems[1] = noun;
    opcodeItems[2] = verb;
    
    while(opcodeItems[iter] != 99) {
        oper = opcodeItems[iter];
        item1 = opcodeItems[iter+1];
        item2 = opcodeItems[iter+2];
        resultPos = opcodeItems[iter+3];
        
        if(oper == 1) {
            opcodeItems[resultPos] = opcodeItems[item1] + opcodeItems[item2];
        }
        else if(oper == 2) {
            opcodeItems[resultPos] = opcodeItems[item1] * opcodeItems[item2];
        }
        else {
            cout << "ERROR " << endl;
            break;
        }
        iter += 4;
    }
    
    return opcodeItems[0];
}

vector<int> parse(string s) {
    vector<int> parse;
    string temp = "";
    
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ',') {
            parse.push_back(std::stoi(temp));
            temp = "";
        }
        else {
            temp.push_back(s[i]);
        }
    }
    parse.push_back(std::stoi(temp));
    return parse;
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
