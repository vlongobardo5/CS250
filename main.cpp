// Description:
// AUthor: Vincent Longobardo
// Date: Sept. 17th, 2023



#include <iostream>
#include <iomanip>


using namespace std;

int growthRate(int, int);
float estimatedPop(int, int, int);

int main()
{
   int startingPop;
   int birthRate;
   int deathRate;
   int numYears;
   int popGrowth;
   float estimatedPopulation;

   cout << endl << "Please enter the starting population.";
   cin >> startingPop;
   if(startingPop < 2){
    cout << "Invalid Population." << endl;
   }
   else  {
   cout << endl << "Please enter the birth rate.";
   cin >> birthRate;
    if(birthRate < 1){
        cout << "Invalid Birth Rate.";
    }
    else {
   cout << endl << "Please enter the death rate.";
   cin >> deathRate;
   if(deathRate < 1){
    cout << "Invalid Death Rate.";
   }

   else {
   cout << endl << "Please enter the number of years to project.";
   cin >> numYears;

    popGrowth = growthRate(birthRate, deathRate);
   cout << endl << "The estimated growth rate is " << popGrowth << "." << endl;

   estimatedPopulation = estimatedPop(startingPop, birthRate, deathRate);
   cout << endl << "The estimated population is "<< setprecision(2) << estimatedPopulation << "." << endl;
   }
    }
   }






    return 0;
}


int growthRate(int birthRate, int deathRate){
    int popGrowth;
    popGrowth = birthRate - deathRate;
    return popGrowth;
}

float estimatedPop(int startingPop, int birthRate, int deathRate){
    float estimatedPopulation = startingPop + (birthRate * startingPop) / 100 - (deathRate * startingPop) / 100;
    return estimatedPopulation;
}
