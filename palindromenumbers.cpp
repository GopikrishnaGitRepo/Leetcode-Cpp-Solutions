#include<iostream>
#include<climits>
using namespace std;

//Leetcode
class Solution{
    public:
    bool isPalindrome(int x){
        if ( x<=INT_MIN || x>=INT_MAX || x < 0 ){
            return false;
        }
        int num = x;
        long int rev = 0;
        while ( num != 0 ){
            rev = (rev*10) + (num%10);
            num = num/10;
        }
        if ( rev == x ){
            return true;
        }
        return false;
    }
};

int main(void){
    Solution sol;
    int n = 1234567899;
    bool isa = sol.isPalindrome( n );
    if ( isa == 0 )
        cout << n << " is not a palindrome number" << endl;
    else 
        cout << n << " is a palindrome number" << endl;
    return 0;
}