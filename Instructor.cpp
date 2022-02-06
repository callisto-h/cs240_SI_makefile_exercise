#include "Instructor.h"

// Note that these functions do not need to
// be wrapped inside of a "class Instructor{}"
// definition. We already told the compiler
// which functions we would have in the header
// file, now we're just saying how they work.

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