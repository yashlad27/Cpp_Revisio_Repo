#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector: "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // Ways to create a vector: 
    vector<int> vec1; //zero length vector
    vector<int> vec2(4); // 4-element integer vector
    vector<char> vec3(4); // 4-element character vector
    vector<char> vec4(vec3); // 4-element character vector from vec3
    vector<int> v(6, 3); // 6-element vector of 3's
    display(vec1);
    display(vec2);
    display(vec3);
    display(v);

    int element, size=5;
}