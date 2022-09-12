#ifndef DOG_H
#define DOG_H

#include<string>
#include<iostream>
using namespace std;

class dog{
    public:
        dog(string name, string breed);
        string getName() const;
        string getBreed() const;

    private:
        string name;
        string breed;
};

#endif