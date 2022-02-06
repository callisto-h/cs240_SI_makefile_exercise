#ifndef INSTR_H
#define INSTR_H

#include <string>
#include <vector>
#include "Student.h" 


class Instructor{
    public:
        std::string name;
        std::string course_title;
        std::vector<Student> students;

        Instructor();

        Instructor(std::string const &n, std::string const &ct);

        void add_student(Student &s);
};

#endif