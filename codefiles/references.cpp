#include<iostream>
using namespace std;

int main(){
    // reference variable created using -> & operator
    string food="pizza";
    string &meal = food;

    cout<<food<<"\n"<<meal<<endl;
    cout<<&meal;
    return 0;
}