#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int i=0,j=0,count=i+j,totalsize=nums1.size()+nums2.size();
        if (totalsize == 0)
            return 0;
        else if(totalsize == 1)
            return (nums2.size()==0 ? nums1[0] : nums2[0]);
        else {
            //cout << "totalsize " << totalsize << endl;
            while(count < totalsize){
                if (nums1[i] > nums2[j]){
                    if(j==nums2.size()){
                        nums3.insert(nums3.end(),nums1.begin()+(i),nums1.end());
                        break;
                    }else{
                        nums3.insert(nums3.end(),nums2[j]);
                        cout << "nums2 " << nums2[j] << endl;
                        j++;
                    }
                } else {
                    nums3.insert(nums3.end(),nums1[i]);
                    cout << "nums1 " << nums1[i] << endl;
                    i++;
                } 
                count = i+j;
            }
        }
        // cout << "count " << count << endl;
        cout << "nums3" << endl;
        for (int k=0;k<nums3.size();k++){
            cout << nums3[k] << endl;
        }
        return 0;
    }
};
int main(void){
    Solution sol;
    cout << "Median of Two Sorted Arrays" << endl;
    vector<int> v1 = {1,1,3,3};
    vector<int> v2 = {2,2};
    int median = sol.findMedianSortedArrays(v1,v2);
    cout << "Median is " << median << endl;
    return 0;
}