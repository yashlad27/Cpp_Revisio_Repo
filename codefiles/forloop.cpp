#include<iostream>
#include<vector>
#include<map>
using namespace std;
// short hand notation: 
// for loop: 

int main(){
    // RANGE BASES FOL LOOP:
    /*
        for(range_declaration : range_expression){
            loop_statement
        }
    */

   // Iterating over whole array:
    vector<int> v1 = {1, 2, 4, 5, 6 ,7};
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<"\n";

    // the initialize may be a braced-init-list:
    for(int n : {1, 2, 3, 4, 5, 6}){
        cout<<n<<" ";
    }
    cout<<"\n";

    // iterating over array:
    

    /*
        Parameters: 
        1.range_declaration:
        a declaration of a named variable, whose type is the type of the element of the sequence represented by range_expression, or a reference to that type. Often uses the auto specifier for automatic type deduction.

        2.range_expression:
        any expression that represents a suitable sequence or a braced-init-list.

        3.loop_statement:
        any statment, typically a compound statement, which is the body of the loop.
    */

    return 0;
}