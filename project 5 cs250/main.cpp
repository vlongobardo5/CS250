#include <iostream>
#include "Dogs.h"
#include <unordered_map>

using namespace std;

int main()
{
  Dogs dogs("dogs.txt");

    while (true){
        cout << "1. See total number of dogs in world ";
        cout << "2. Input a country name to see how many dogs are in that country ";
        cout << "3. See if a country is availabe. ";
        cout << "4. Exit ";


    int choice;
    cout << "Pick between option 1, 2, 3, or 4: ";
    cin >> choice;

    switch(choice){
case 1:
    cout << "Total number of dogs in the world: " << dogs.getDogPopulation() << endl;
    break;
case 2: {
    string country;
    cout << "Enter the country's name: ";
    cin >> country;
    int population = dogs.getCountryPopulation(country);
    if (population != -1){
        cout << "Number of dogs in " << country << ":" << population << endl;
    }
    else{
        cout << "Country not found." << endl;
    }
    break;
}
case 3:{
    string country2;
    cout << "Enter the country name: ";
    cin >> country2;
    bool available = dogs.countryAvailabe(country2);
    if (available){
            cout << country2 << " is available!" << endl;
    }
    else{
        cout << country2 << " is not available!" << endl;
    }
    break;
}
case 4:{
    cout << "Exiting now....." << endl;


    default: cout << "Invalid choice, Please enter 1, 2, 3, or 4." << endl;
    break;

}
    }
    }
    return 0;
}
