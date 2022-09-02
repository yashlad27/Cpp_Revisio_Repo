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
    return 0;
}