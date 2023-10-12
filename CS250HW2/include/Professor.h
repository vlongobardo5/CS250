// Author: Vincent Longobardo
// Date: 10/10/23

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <Person.h>


class Professor : public Person
{
    public:
        Professor();
        Professor(string);
        string getOffice();
        string getName();
        void setName(const string& m_name);
        void setOffice(const string& m_office);
        string m_office;

    protected:

    private:

};

#endif // PROFESSOR_H
