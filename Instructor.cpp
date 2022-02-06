#include "Instructor.h"

Instructor::Instructor(){
            name = "";
            course_title = "";
        }

Instructor::Instructor(std::string const &n, std::string const &ct){
            name = n;
            course_title = ct;
        }

void Instructor::add_student(Student &s){
            students.push_back(s);
        }