#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string substring;
        string tempstring;
        int length=0;
        int a=0;
        int i=0;
        auto it = s.begin(); // .begin returns an iterator 
        for (; i<s.size();){
            if (tempstring.find(it[i]) == string::npos){
                cout << "if " << i << endl;
                cout << it[i] << endl;
                tempstring.insert(tempstring.begin(),it[i]);
                if (i==s.size()-1){
                    substring = tempstring;
                    length = tempstring.size();
                    a+=1;
                    i = a;
                }
                i++;
            } else {
                if (length<tempstring.size()){
                    cout << "else " << i << endl;
                    // cout << "tempstring size " << tempstring.size() << endl;
                    length = tempstring.size();
                    substring = tempstring;
                    // cout << "substring " << substring << endl;
                    // cout << "tempstring " << tempstring << endl;
                    tempstring.clear();
                    // cout << "tempstring after clear " << tempstring.size() << endl;
                    // cout << "i " << i << endl;
                    // cout << "it[i]" << it[i] << endl;
                    tempstring.insert(tempstring.begin(),it[i]);
                    // cout << tempstring << endl;
                    a+=1;
                    i = a;
                }
            }   
        }
        return length;
    }
};
int main(void){

    Solution sol;
    string str = "dvdf";
    int length = sol.lengthOfLongestSubstring(str);
    cout << "String " << str << " Length " << length << endl;

    // string.clear() // Clears the contents of the string
    // if (str.find('H') != -1) // if str.find() returns -1 then it couldn't find a match
    //     cout << str.find('i') << endl; // found
    // else
    //     cout << "Not Found" << endl;

    // string test = "hello";
    // cout << test << endl;
    // auto it = test.insert(test.end(),'G'); // .insert() returns an iterator, .end() is used to find the 
    //                                        //  last position in the string, similarily the .begin() is used 
    //                                        // to find the first position in the string
    // cout << test << endl;
    return 0;
}
/*



*/
