#include<iostream>
#include<list>
using namespace std;
 
void display(list<int> &l)
{
    list<int> :: iterator it;

    for(it=l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    // Container: LIST
    // bidirectional / non-continous memory location

    list<int> list1; // list of 0 len

    // adding elements in list:
    list1.push_back(51);
    list1.push_back(65);
    list1.push_back(45);
    list1.push_back(52);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(56);
    list1.push_back(5);
    list1.push_back(15);

    display(list1);

    // Removing elements from list1: 

    list1.pop_back(); // removing from the end
    display(list1);

    list1.pop_front(); // removing from the front
    display(list1);

    list<int> list2(4);   // empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();

    // adding elements in list:
    *iter = 45;
    iter++;
    *iter = 4;
    iter++;
    *iter = 5;
    iter++;
    *iter = 145;
    iter++;

    display(list2);
    return 0;
}