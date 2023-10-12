// Author: Vincent Longobardo
// Date: 10/10/23

#include "Person.h"
#include <string>
using namespace std;

Person::Person()
{
    m_name;
}

Person::Person(string& n)
{
    m_name = n;
}

string Person::getName()
{
    return m_name;
}

void Person::setName(string& n){
    m_name = n;
}

