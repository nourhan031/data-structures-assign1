//
// Created by nourh on 7/31/2023.
//

#ifndef DATA_STRUCTURES_ASSIGN1_STUDENT_H
#define DATA_STRUCTURES_ASSIGN1_STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    double gpa;
public:
    Student( string& name, string id, double gpa){ //const string& name
        name = name;
        id = id;
        gpa = gpa;
    }
    string getName()const{
        return name;
    }
    string getID()const{
        return id;
    }
    double getGPA()const{
        return gpa;
    }
};
bool operator<(const Student& s1, const Student& s2) {
    return s1.getName() < s2.getName();
}


#endif //DATA_STRUCTURES_ASSIGN1_STUDENT_H
