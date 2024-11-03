/*
    <string>.substr(<from_index>, <number_of_characters))
    substr is a part of the 'string' header
*/

#include<iostream>
#include<string>
using namespace std;

//LeetCode
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        if ( s.size() <= 0 || s.size() >= 50000 ){
            return length;
        }
        for ( int i=0; i<s.size(); i++ ){
            string substring =  s.substr(i);
            cout << "substring " << substring << endl;
            auto it = substring.begin();
            int count = 0;
            string tempstring;
            for ( int j=0; j<substring.size(); j++){
                if ( tempstring.find(it[j]) == string::npos ){
                    tempstring.insert(tempstring.begin(),it[j]);
                    count++;
                } else {
                    break;
                }
            }
            if ( length < count ){
                length = count;
                cout << "tempstring " << tempstring << endl;
                cout << "length     " << length << "\n" << endl;
            }
        }
        return length;
    }
};

int main(void){

    Solution sol;
    string str ="bb ";
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

 // auto it = s.substr(sub).begin();
            // if ( tempstring.find(it[i]) == string::npos ){
            //     tempstring.insert(tempstring.begin(),it[i]);
            //     i++;
            // }
            // else{
            //     sub=sub+1;
            //     i=0;
            //     cout << tempstring << endl;
            //     length = tempstring.size();
            //     cout << length << endl;
            //     tempstring.clear();
            // }
            //cout << "Iteration " << i << " sub " << sub << endl;
            //cout << "substring " << s.substr(sub) << endl;
            // auto it = s.substr(sub).begin(); // Used to iterator over the contents of the 
            // if ( tempstring.find(it[i]) == string::npos ){
            //     cout << "sub " << s.substr(sub) << endl;
            //     cout << it[i] << endl;
            //     tempstring.insert(tempstring.begin(),it[i]);
            //     length = tempstring.size();
            //     i++;
            // }
            // else if ( tempstring.find(it[i]) != string::npos ) {
            //     // if ( length < tempstring.size() ){
            //     //     length = tempstring.size();
            //     // }
            //     sub=sub+1;
            //     a=a+1;
            //     i = a;
            //     cout << "tempstring " << tempstring << endl ;
            //     cout << "length " << length << endl ;
            //     tempstring.clear();
            // }
            // else{
            //     cout<< "you missed" << endl;
            // }

*/
