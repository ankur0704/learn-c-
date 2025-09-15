#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];

    cin.getline(str, 100, '$'); // Read input until '$' is encountered
    cout << str << endl;

    int len = 0;
    for(int i=0; i<str[i]!='\0'; i++){
        len++; // Increment length for each character until null terminator
    }

    // for(char ch:str){
    //     cout<< ch<<" ";
    // }
    cout<<len<<endl;
    return 0;
}



//creating string str   //dynamic in nature => runtime resize
int main(){
    string str= "ankur";
    cout<< str<<endl;  
    return 0;
}

int main(){
    string str1= "ankur";
    string str2= "sonavane";

    for(int i=0; i<str1.length(); i++){
        cout<< str1[i]<<" ";  //accessing character
    }

    for(char ch: str1){
        cout<<ch<<" ";   //accessing character
    }
    string str3= str1+str2;   //concatenation
    cout<< str3<<endl;
    cout<<(str1==str2)<<endl;  //comparison
    cout<< str1[2]<<endl;     //accessing character
    cout<<str1.length()<<endl;  //length of string
    return 0;
}



//reverse a string
//char arr[] based
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, end= s.size()-1;

        while(st<end){
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};

//string based
// reverse(s.begin(), s.end());  //inbuilt stl function