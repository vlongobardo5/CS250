// Author: Vincent Longobardo
// Date: 10/10/23
// Description: Main.CPP to test my classes


#include <iostream>
#include "Professor.h"
#include "Student.h"
using namespace std;

int main()
{
    int i;
  Student student1;
  string courses[10] = {"Math", "Science", "Algebra", "History", "CS101", "CS250", "CS100", "CS270", "CS301", "CS230"};
   for (i=0; i<10; i++){
  cout << endl << "Student's courses: " << student1.getCourses() << endl;
   }
  student1.setName("Vincent Longobardo");
  cout << endl << "Student name: " << student1.getName() << endl;

Professor professor1;
professor1.setName("John Doe");

cout << endl << "Professor name: " << professor1.getName() << endl;
professor1.setOffice("Room 203");
cout << endl << "Office location: " << professor1.getOffice() << endl;



}
