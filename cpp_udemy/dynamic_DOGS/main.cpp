#include<iostream>
#include "dog.h"
#include<string>
using namespace std;

int main()
{
    dog* myDog = new dog("Rover", "German Shepard");
    dog* yourDog = new dog("fido", "Beagle");

    // ###########  METHOD-01 ############## //
    cout<<"\tusing arrow member access"<<endl;
    cout<<myDog->getName()<<"-"<<myDog->getBreed()<<endl;
    cout<<yourDog->getName()<<"-"<<yourDog->getBreed()<<endl;

    cout<<endl;

    // ###########  METHOD-02 ############## //
    cout<<"\tusing dereferencing and the dot operator"<<endl;
    cout<<(*myDog).getName()<<" - "<<(*myDog).getBreed()<<endl;
    cout<<(*yourDog).getName()<<" - "<<(*yourDog).getBreed()<<endl;

    delete myDog;
    delete yourDog;

    myDog = nullptr;
    yourDog = nullptr;
    return 0;
}