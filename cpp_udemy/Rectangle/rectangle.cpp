// implementaion file

#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle(){
    this->length=1.0;
    this->width=1.0;
}

rectangle::rectangle(double length, double width){
    this->length = length; // equal to length that is passed in
    this->width = width; // equal to width that is passed in
}

double rectangle::getLength(){
    return length;
}

double rectangle::getWidth(){
    return width;
}

void rectangle::setLength(double length){
    this->length=length;
}

void rectangle::setWidth(double width){
    this->width=width;
}

double rectangle::area(){
    return length*width;
}