#include<iostream>
#include<unordered_map>
using namespace std;
int main(void){

    

    /*  To revise the working of unordered_map 
        Unordered map stores the value as key:value pair 
        To use the unordered_map use the header #include<unordered_map>
        To declare the unordered_map use the unordered_map<int, int> var_name;
            Here the int, int is the type of the values that will be store as key : value
        To insert key : value , var_name[<value>] = <value>
        To iterate through the elements of the key value, for (auto it : var_name),
            it->first , to get the key
            it->second , to get the value
    */ 
    unordered_map<int, int> test;
    for (int i=0; i<3; i++){
        test[i] = i+1;
    }
    for ( auto x : test){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}