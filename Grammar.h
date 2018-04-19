#pragma once
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

typedef map<string, vector<string> > myMap;


class Grammar{
    friend class RandomSentenceGenerator;
    private:
        myMap grammarMap;

    public:
        Grammar(); //the constructor

        void addProduction(string nonTerm, string rhs);
        string getRandomRHS(const string nonTerm);
        bool containsNonTerminal(string nonTerm);
       
        friend ostream &operator<<(ostream & , const Grammar &);  
    
};