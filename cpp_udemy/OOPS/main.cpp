#include<iostream>
#include<string>
#include "House.h"
using namespace std;
// class House {
//     public:
//     // SETTERS: modify internal data
//         void setNumStories(int numStories){
//             this->numStories = numStories;
//         }
//         void setNumWindows(int numWindows){
//             this->numWindows = numWindows;
//         }
//         void setColor(string color){
//             this->color = color;
//         }
//     // GETTERS: return data stored inside class
        
//     // when to use const: when we dont want to change the data inside a function
//         int getNumStories() const {
//             return numStories;
//         }
//         int getNumWindows() const {
//             return numWindows;
//         }
//         string getColor() const {
//             return color;
//         }
//     private:
//         int numStories;
//         int numWindows;
//         string color;
// };

void print_House_data(const House& house); // increasing reuseability of code

int main(){
    House my_house;
    House your_house;

    my_house.setNumStories(2);
    my_house.setNumWindows(9);
    my_house.setColor("red");

    your_house.setNumStories(3);
    your_house.setNumWindows(10);
    your_house.setColor("blue");

    cout<<"----------|X|---------"<<endl;

    cout<<"My House is "<<my_house.getColor()<<" and has "<<my_house.getNumStories()<< " stories and "<< my_house.getNumWindows()<< " windows."<<endl;

    cout<<"Your House is "<<your_house.getColor()<<" and has "<<your_house.getNumStories()<< " stories and "<< your_house.getNumWindows()<< " windows."<<endl;

    cout<<"----------|X|---------"<<endl;

    print_House_data(my_house);
    print_House_data(your_house);

    cout<<"----------|X|---------"<<endl;
    return 0;
}

void print_House_data(const House& house){
    cout<<"The House is "<<house.getColor()<<" and has "<<house.getNumStories()<<" stories and "<< house.getNumWindows()<< " windows."<<endl;
}