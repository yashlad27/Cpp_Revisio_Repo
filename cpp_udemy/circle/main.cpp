#include<iostream>
#include "circle.h"
using namespace std;

void print_circle(circle& c);

int main(){

    circle circ1;
    circle c2(4);

    circ1.getRadius();
    circ1.circumference();
    circ1.area();

    circ1.setRadius(10);
    circ1.circumference();
    circ1.area();

    // 2ND CIRCLE OBJECT:
    
    c2.getRadius();
    c2.area();
    c2.circumference();

    c2.setRadius(2);

    c2.getRadius();
    c2.area();
    c2.circumference();

    // Using print_circle function:
    c2.setRadius(103);
    circ1.setRadius(99);

    print_circle(c2);
    print_circle(circ1);

    return 0;
}


void print_circle(circle& c){
    cout<<"Circle with radius: "<<c.getRadius()<<endl;
    cout<<"\t Circumference: "<<c.circumference()<<endl;
    cout<<"\t Area: "<<c.area()<<endl;
    cout<<endl;
}