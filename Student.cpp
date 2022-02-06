#include "Student.h"

// Note that these functions do not need to
// be wrapped inside of a "class Instructor{}"
// definition. We already told the compiler
// which functions we would have in the header
// file, now we're just saying how they work.

Student::Student(){};

Student::Student(std::string const &n){
    name = n;
}