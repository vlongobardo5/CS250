// Author: Vincent Longobardo
// Date: 10/10/23

#ifndef STUDENT_H
#define STUDENT_H

#include <Person.h>
#include <string>
using namespace std;


class Student : public Person
{
    public:
        Student();
        Student(string);
        string getCourses();
        string getName();
        void setName( const string& m_name);
        int i;

    protected:

    private:
        int taking;
        string courses[10];

};

#endif // STUDENT_H
