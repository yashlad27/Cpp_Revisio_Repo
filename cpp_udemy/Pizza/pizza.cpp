#include<iostream>
#include "pizza.hpp"
#include<string>
#include<vector>

using namespace std;

pizza::pizza(string name, int cost, int diameter){
    this->name=name;
    this->cost=cost;
    this->diameter=diameter;
    toppings.push_back("cheese");
}

void pizza::addToppings(string topping){
    toppings.push_back(topping);
}

string pizza::getName() const {
    return name;
}

int pizza::getDiameter() const {
    return diameter;
}

int pizza::getCost() const {
    return cost;
}   

void pizza::printToppings() const {
    // display(toppings());
    for(string topping : toppings){
        cout<<"\t"<<topping<<endl;
    }
}