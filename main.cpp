#include <iostream>

// 1.) notice that we include both Instructor.h and Student.h

#include "Instructor.h" // 2.) read this file

// 4.) and Student.h is ALSO included in this file?
// note that Instructor.h ALREADY included Student.h,
// and THIS file includes Instructor.h!
// so it's being included TWICE, right? 
#include "Student.h" // 5.) read this file 

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