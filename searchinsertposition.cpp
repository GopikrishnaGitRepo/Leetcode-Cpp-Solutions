#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int> input = nums;
        int ip_size = input.size();
        int first=0, last=ip_size;
        int mid=0;
        while(first!=last){
            if (first+1 == last){
                return nums[first]>=target ? 0 : first+1;
                // return first+1;
            } 
            mid = (first+last)/2;
            if(input[mid] == target){
                return mid;
            } else if (input[mid]>target){
                last = mid;
            } else if (input[mid]<target){
                first = mid;
            } 
        }
        return 0;
    }
};
int main(void){
    Solution sol;
    vector<int> input = {1};
    int find = 1;
    int position = sol.searchInsert(input, find);
    cout << find << " is in position " << position << endl;
    return 0;
}