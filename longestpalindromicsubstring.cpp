#include<iostream>
#include<algorithm>
using namespace std;

// Leetcode
class Solution{
public:
    string longestPalindrome(string s){
        int size = s.size();
        string temp, tempcheck, final;
        int finalsize=0;
        cout << s << "\n" << s.size() << endl;
        for (int i=0; i<size; i++){
            int a = i;
            int j = i+1;
            cout << "break" << endl;
            while(a>=0 && j<=size){
                temp = string(s.begin()+a,s.begin()+j);
                tempcheck = string(s.begin()+a,s.begin()+j);
                reverse(tempcheck.begin(),tempcheck.end());
                if (temp != tempcheck){
                    break;
                } 
                cout << temp.size() << endl;
                if (temp.size() > finalsize){
                    finalsize = temp.size();
                    final = temp;
                }
                a--;
                j++;
            }
        }
        for (int i=0; i<size; i++){
            int a = i;
            int j = i+2;
            cout << "break" << endl;
            while(a>=0 && j<=size){
                temp = string(s.begin()+a,s.begin()+j);
                tempcheck = string(s.begin()+a,s.begin()+j);
                reverse(tempcheck.begin(),tempcheck.end());
                if (temp != tempcheck){
                    break;
                } 
                cout << temp.size() << endl;
                if (temp.size() > finalsize){
                    finalsize = temp.size();
                    final = temp;
                }
                a--;
                j++;
            }
        }
        return final;
    }
};

int main(void){
    Solution sol;
    string inputstring = "abbc";
    string outputstring = sol.longestPalindrome(inputstring);
    cout << "\noutput string : "<< outputstring << endl;
    return 0;
}