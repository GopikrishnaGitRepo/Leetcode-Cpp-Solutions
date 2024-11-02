#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// LeetCode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < size(nums); i++) {
            for (int j = i + 1; j < size(nums); j++) {
                if ((nums[i] + nums[j]) == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(void){

    Solution sol;
    vector<int> input = {2,7,11,15}, result;
    int tofind = 9;
    result = sol.twoSum(input, tofind);
    if ( !result.empty() ){
        cout << "index " << result[0] << " " << result[1] << endl;
    }

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
    /* unordered_map<int, int> test;
    for (int i=0; i<3; i++){
        test[i] = i+1;
    }
    for ( auto x : test){
        cout << x.first << " " << x.second << endl;
    }
    */
    return 0;
    
}