#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <locale>
#include <stdlib.h>
#include "Grammar.h"

using namespace std;

class RandomSentenceGenerator{
    private:
        Grammar grammar;
    public:
        RandomSentenceGenerator(string); //the constructor
    
        string randomSentence(); //returns a random sentence generated from the grammar
        string randomSentence( string );
        void replaceRule(string *s, string lhs, string sub);
        string getRule(string);
        string toLwer(string);
        void printGrammar(); 
};
