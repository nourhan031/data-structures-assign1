//
// Created by nourh on 8/3/2023.
//
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Student.h"
#include "fileReadAndWrite.h"
#include "sortingAlgorithms.h"

using namespace std;

int main(){
//read student data from the file
vector<Student> students = readStudentsFromFile("students.txt");

//sorting students by name
vector<Student> sortedByName = students;
int comparison;
comparison = 0;

//RECORD START TIME
clock_t startTime = clock();

//sorting and other operations
sort(sortedByName.begin(), sortedByName.end());

//RECORD END TIME
clock_t endTime = clock();

//CALCULATE DURATION IN ms
double duration = static_cast<double>(endTime-startTime) / CLOCKS_PER_SEC*1000.0;
cout << "Duration (ms): " << duration << endl;

//more code

//WRITE RESULTS TO SortedByName.txt
writeToFile<Student>("SortedByName.txt", bubble_sort , comparison, duration, sortedByName);//"bubble sort"



//sort by gpa
vector<Student> sortedByGPA = students;

comparison = 0;
startTime = clock();
insertionSort(sortedByGPA);
endTime = clock();
duration = static_cast<double>(endTime-startTime) / CLOCKS_PER_SEC*1000.0;

writeToFile<Student>("SortedByGPA.txt", insertionSort , comparison, duration, sortedByName);
return 0;
}