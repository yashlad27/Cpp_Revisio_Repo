#include<iostream>
using namespace std;
class House {
    public:
    // SETTERS:
        void setNumStories(int numStories){
            this->numStories = numStories;
        }
        void setNumWindows(int numWindows){
            this->numWindows = numWindows;
        }
        void setColor(string color){
            this->color = color;
        }
    // GETTERS:
        int getNumStories(){
            return numStories;
        }
        int getNumWindows(){
            return numWindows;
        }
        string getColor(){
            return color;
        }
    private:
        int numStories;
        int numWindows;
        string color;
};

int main(){
    House my_house;
    House your_house;

    my_house.setNumStories(2);
    my_house.setNumWindows(9);
    my_house.setColor("red");

    your_house.setNumStories(3);
    your_house.setNumWindows(10);
    your_house.setColor("blue");

    cout<<"My House is "<<my_house.getColor()<<" and has "<<my_house.getNumStories()<< " stories and "<< my_house.getNumWindows()<< " windows."<<endl;

    cout<<"Your House is "<<your_house.getColor()<<" and has "<<your_house.getNumStories()<< " stories and "<< your_house.getNumWindows()<< " windows."<<endl;
    return 0;
}