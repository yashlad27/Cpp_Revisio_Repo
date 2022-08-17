#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    // MAP IS an Associative Array: 
    map<string, int> marksMap;   

    marksMap["John"] = 90;
    marksMap["Jason"] = 95;
    marksMap["Jack"] = 40;

    map<string, int> :: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}