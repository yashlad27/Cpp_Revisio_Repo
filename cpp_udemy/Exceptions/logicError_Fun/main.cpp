#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int main()
{
    vector<int> my_Num;

    // my_Num.resize(my_Num.max_size()+1);

    // handling length_error:
    try{
        my_Num.resize(my_Num.max_size()+1);
    }catch(const length_error& l){
        cout<<l.what()<<endl;
    }

    cout<<"A big Vector!"<<endl;
    return 0;
}