#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //cout<<"Hello"<<endl;
    vector<int> vec1;
    int element, size;
    cout<<"Enter size of vector: "<<endl;
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }

    // vector::insert method    
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 50, 556);

    vec1.pop_back(); // removes last element in vector
    display(vec1);
    return 0;
}