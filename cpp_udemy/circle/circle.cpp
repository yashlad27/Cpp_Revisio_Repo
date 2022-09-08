#include "circle.h"
#include<iostream>
using namespace std;

const double pi = 3.14159;

circle::circle(){
    radius = 1;
}

circle::circle(double radius){
    this->radius=radius;
}   

void circle::setRadius(double radius){
    this->radius = radius;
}

double circle::getRadius() {
    return radius;
}

double circle::circumference(){
    cout<<"\tCircumference of Circle is: "<<2*pi*radius<<endl;
    cout<<endl;
}

double circle::area(){
    cout<<"\t Area of circle is: "<<pi*radius*radius<<endl;
    cout<<endl;
}
