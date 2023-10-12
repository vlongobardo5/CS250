// Author: Vincent Longobardo
// Date; 10/10/23

#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
    public:
        Person();
        Person(string& m_name);
        string getName();
        void setName(string& m_name);
        string m_name;


    protected:

    private:

};

#endif // PERSON_H
