#include <iostream>
#include "Instructor.h"
#include "Student.cpp"

int main(){
    Instructor prof("Lewis", "CS240");
    Student s1("Johnny");
    Student s2("Jane");
    prof.add_student(s1);
    prof.add_student(s2);

    std::cout << prof.name << " teaches ";
    std::cout << prof.students.at(0).name << " and ";
    std::cout << prof.students.at(1).name << "!" << std::endl;

    return 0;

}