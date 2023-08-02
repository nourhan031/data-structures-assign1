//
// Created by nourh on 8/2/2023.
//
#include "Student.h"
#include <string>
#include <iostream>

//reading students from the file
vector<Student> readStudentsFromFile(const string& filename) {
    vector<Student> students;
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Failed to open file: " << filename << endl;
        return students;
    }

    int numStudents;
    file >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        string id;
        double gpa;
        file >> name >> id >> gpa;
        students.emplace_back(name,id, gpa);
        //Inserts a new element at the end of the vector, right after its current last element.
    }

    file.close();
    return students;
}
