//
// Created by nourh on 8/3/2023.
//
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Student.h"
#include "readFile.h"
#include "sortingAlgorithms.h"
using namespace std;

//read student data from the file
vector<Student> students = readStudentsFromFile("students.txt");

//sorting students by name
vector<Student> sortedByName = students;
int comparison;

//set comparison to zero before applying any sorting algo