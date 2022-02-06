#ifndef STDNT_H // 6.) this header guard prevents
#define STDNT_H // Student.h from getting included twice.
                // After the first time it is #included,
                // "STDNT_H" gets added to the symbol table.
                // Then, any subsequent #include "Student.h"
                // statements see that it is already there!

#include <string>

class Student{
    public:
        std::string name;

        Student();

        Student(std::string const &n);

};

#endif