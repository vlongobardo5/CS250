#ifndef DOGS_H
#define DOGS_H

#include <string>
#include <unordered_map>
using namespace std;

class Dogs
{
    public:
        Dogs();
        Dogs(const string& data_file);
        int getDogPopulation();
        int getCountryPopulation(const string country);
        bool countryAvailabe(const string& country);

    protected:

    private:
        int m_dogPopulation;
        unordered_map<string,int> m_dogs;
};

#endif // DOGS_H
