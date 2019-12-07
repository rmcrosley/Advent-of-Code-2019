// Rachel Crosley
// Day2
// Advent of Code 2019
// Day2.hpp

#ifndef Day2_hpp
#define Day2_hpp

#include <stdio.h>
#include<iostream>
using std::string;
using std::vector;


vector<string> readInInput(string);

int opcode(string &, int, int);

int intcode(string);

vector<int> parse(string);

#endif /* Day2_hpp */
