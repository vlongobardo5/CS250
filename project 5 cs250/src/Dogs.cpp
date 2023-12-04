#include "Dogs.h"
#include <string>
#include <unordered_map>
#include <fstream>
#include <ostream>
#include <iostream>
using namespace std;
Dogs::Dogs()
{
    //ctor
}
Dogs::Dogs(const string& data_file){



}

int Dogs::getDogPopulation()
{
    return m_dogPopulation;

}

int Dogs::getCountryPopulation(string country)
{
    auto it = m_dogs.find(country);
    if(it !=m_dogs.end()){
        return it->second;
    }
    else {
        return -1;
    }
}

bool Dogs::countryAvailabe(const string& country)
{
  return m_dogs.find(country) != m_dogs.end();
}
