#ifndef HOUSE_H
#define HOUSE_H
// preprocessor directives

#include<string>
using namespace std;

class House {
    public:
        // adding constructor:
        House(); 
        // adding destructor:
        ~House();

        void setNumStories(int numStories);
        void setNumWindows(int numWindows);
        void setColor(string color);

        int getNumStories() const;
        int getNumWindows() const;
        string getColor() const;

        void print() const;
    private:
        int numStories;
        int numWindows;
        string color;
};

#endif