#include "House.h"
#include<iostream>
using namespace std;

// Default constructor:
House::House(){
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "white";
}
// Defualt Destructor:
House::~House(){
    cout<<"The "<<color<<" house with "<<numStories<<" stories and "<< numWindows<<" windows is being destroyed!"<<endl;
}
// Parameterised Constructor:
House::House(int numStories, int numWindows, string color){

    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color = color;

    cout<<"You are now using parameterised constructor!"<<endl;

    cout<<"Number of stories: "<<numStories<<endl;
    cout<<"Number of Windows: "<<numWindows<<endl;
    cout<<"Colour of House: "<<color<<endl;

    cout<<endl;
}

    // add name of class and not object:
        void House::setNumStories(int numStories){
            this->numStories = numStories;
        }
        void House::setNumWindows(int numWindows){
            this->numWindows = numWindows;
        }
        void House::setColor(string color){
            this->color = color;
        }

        int House::getNumStories() const {
            return numStories;
        }
        int House::getNumWindows() const {
            return numWindows;
        }
        string House::getColor() const {
            return color;
        }

// exercise: add a print method as member function and use it to display the contents of house:

        void House::print() const {
            cout<<"The House is "<<color<<" and has "<<numStories<<" stories and "<<numWindows<< " windows."<<endl;
        }