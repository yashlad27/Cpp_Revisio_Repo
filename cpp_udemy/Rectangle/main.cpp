#include<iostream>
#include "rectangle.h"
using namespace std;

int main(){

    rectangle r1;
    rectangle r2(5.1, 2.5);

    cout<<"r1 area is: "<<r1.area()<<endl;
    cout<<"r2 area is: "<<r2.area()<<endl;
    cout<<"r1 perimeter is: "<<r1.perimeter()<<endl;
    cout<<"r2 perimeter is: "<<r2.perimeter()<<endl;

    cout<<endl;
    //changing length and width of rectangle

    r1.setLength(22);
    r1.setWidth(90);

    cout<<"r1 length is: "<<r1.getLength()<<endl;
    cout<<"r1 width is: "<<r1.getWidth()<<endl;

    cout<<"r1 area is: "<<r1.area()<<endl;

    cout<<"r1 perimeter is: "<<r1.perimeter()<<endl;
    return 0;
}