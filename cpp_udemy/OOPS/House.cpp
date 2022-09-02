#include "House.h"

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