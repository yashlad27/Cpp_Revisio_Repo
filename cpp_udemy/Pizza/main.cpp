#include<iostream>
#include "pizza.hpp"
#include<string>
#include<vector>

using namespace std;

void print_pizza(const pizza& pizza);

int main(){
    pizza john_pizza("Cheese Pizza", 5, 8);
    pizza matt_pizza("Chicken Pizza", 10, 23);

    matt_pizza.addToppings("Pepperoni");

    pizza special("The special pizza", 17, 99);

    special.addToppings("pepperoni");
    special.addToppings("black olives");
    special.addToppings("onions");
    special.addToppings("mushrooms");

    print_pizza(john_pizza);
    print_pizza(matt_pizza);
    print_pizza(special);
    
    return 0;
}

void print_pizza(const pizza& pizza){
    cout<<"Name: "<<pizza.getName()<<endl;
    cout<<"Diameter: "<<pizza.getDiameter()<<endl;
    cout<<"Cost: $"<<pizza.getCost()<<endl;
    cout<<"Toppings: "<<endl;

    pizza.printToppings();
    cout<<endl;
}