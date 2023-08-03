//
// Created by nourh on 8/3/2023.
//

#include "fileReadAndWrite.h"

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


//write into file
template <typename T>
void writeToFile(const string& filename, const string& algName, int comparison, double duration, const vector<T>& sortedData){
    /*
     * code
     */
    ofstream file("students.txt");

    if(!file.is_open()){
        cout << "Failed to open file: students.txt" << endl;
        return;
    }

    file << "Algorithm name: " << algName << endl;
    file << "Number of comparisons: " << comparison << endl;
    file << "Running time: " << duration << endl;
    file << "Sorted Student Elements: " << endl;

    for (const auto& student : sortedData){ //auto?? "complicated data types"
        file << student.getName() << endl;
        file << student.getID() << endl;
        file << student.getGPA() << endl;

    }
}
