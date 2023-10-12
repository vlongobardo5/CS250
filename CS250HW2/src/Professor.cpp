// Author: Vincent Longobardo
// Date: 10/10/23

#include "Professor.h"

Professor::Professor()
{
    m_name;
    m_office;
}

 string Professor::getOffice()
{
    return m_office;
}

void Professor::setOffice(const string& o)
{
    m_office = o;
}

string Professor::getName()
{
    return m_name;
}

void Professor::setName(const string& n)
{
    m_name = n;
}
