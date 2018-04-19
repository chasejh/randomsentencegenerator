/*
Author: JChase
Title: Random Sentence Generator
Instructions: compile 'g++ -o main Grammar.cpp RandomSentenceGenerator.cpp main.cpp'
then run with command: ./main
There is no problem reading a <rule>, followed by a ,.or other punctuation,
so this doesn't need to be accounted for in the file.
*/

#include "RandomSentenceGenerator.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    string fileName = "";
    int numSentences = 0;
    
    cout << "How many random sentences would you like to generate?";
    cin >> numSentences;
    cout << "Enter a grammar filename including the .g extension: ";
    cin >> fileName;

    RandomSentenceGenerator rand(fileName);
    
    
    for(int i = 0; i < numSentences; i++){
        cout << "sentence " << i+1 << ": " << endl;
        cout << rand.randomSentence() << endl;
    }
    return 0;
}//main


