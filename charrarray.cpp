#include<bits/stdc++.h>
using namespace std;

int main(){


    
    //creation
    char ch[10];

    //input
    cin>>ch;
    cin.getline(ch,100);   //the char will store the values in array if there is space between each element(ex: my name is ankur) 

    //print
    cout<<"printin the value of ch:"<<ch<<endl;

    //printing using loop
    for(int i=0;i<10;i++){
        cout<<"at index:"<<ch[i]<<endl;
    }
    char temp = ch[6];
        int value=(int)temp;
        cout<<"printing integer value:"<<value<<endl;
}




int findLength(char ch[], int size){

    //using while loop
    int len=0;
    int index=0;
    while(ch[index] != '\0'){
        len++;
        index++;
    }
    return len;


    //for loop
    int length =0;
    for(int i=0; i<size; i++){
        if(ch[i]=='\0'){

            break;
        }else{
            length++;
        }
    }
    return length;
}


//reverse a string:
void reverseString(char ch[], int n){
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(ch[i], ch[j])
        i++;
        j--;
    }
}



//convert lowercase to uppercase
void convertToUpperCase(char ch[], int n){
    

    int index=0;
    while(ch[index] != '\0'){
        char currCharacter = ch[index];
        //check if lowercase, then convert to uppercase
        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[index] = currCharacter - 'a' +'A';
        }
        index++;
    }
}


 //replace @ with space
 void replaceChar(char ch[], int n){

    int index=0;
    while(ch[index] !='\0'){
        if(ch[index] =='@')
        //insert space
        ch[index]=' ';
    }
    index++;
}


//palindrome
bool checkPalindrome(char ch[], int n){
    // n-> length of string
    int i=0;
    int j=n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }else{
            //characters are not matching
            return false;
        }
    }
    //all chars are matched, therefore palindrome
    return true;
}






int main(){

     //STRINGS
     string name;

     //empty string
     string temp="";

     //find member function


     //push and pop back command
     string name="ANKUR";
     cout<<name<<endl;

     name.push_back('A');
     cout<<name<<endl;

     name.pop_back();
     cout<<name<<endl;


     //deleting a particular element from a string
     string desc ="this is a car";
     desc.erase(4,3);
     cout<<desc<<endl;

     string name="ANKUR SONAVANE";
     string middle="ANIL";

     name.insert(5,middle);
     cout<<name<<endl;

     cin>>name;
     cout<<"length of string"<<name.length()<<endl;
     cout<<"string is empty or not"<<name.empty()<<endl;
     cout<<"front"<<name.front()<<endl;
     cout<<"back"<<name.back()<<endl;

     string str1="love";
     string str2="ankur";

     //append
     str1.append(str2);

     cout<< str1<<endl;
     cout<<str2<<endl;












    //creation
    string name;

    //input
    cin>>name;

    //print
    cout<<"Print name:"<<name<<endl;

    cout<<"printing first char:"<<name[0]<<endl;


    int index = 0;
    while(name[index] != '\0'){
        cout<<"index:"<<index<<"character:"<<name[index]<<endl;
        index++;
    }



















    char ch[100];
    cin>> ch;
    cin.getline(ch,100);



    int len=findLength(ch,100);
    bool isPalindrome = checkPalindrome(ch, len);
    if(isPalindrome){
        cout<<"valid palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }



    cout<<"before"<<ch<<endl;
    replaceChar(ch,100);
    cout<<endl<<"after"<<ch<<endl;

    cout<<"before"<<ch<<endl;
    convertToUpperCase(ch, 100);
    cout<<endl<<"after"<<ch<<endl;

    //reverseAString
    cout<<"Before"<<ch<<endl;
    int len = findLength(ch,100);
    reverseString(ch,100);
    cout<<"After"<<ch<<endl;

    int len = findLength(ch,100);

    cout<<"length og string is:"<< len<< endl;
    cout<<strlen(ch)<<endl;
}



//--------------check site--> c++.com---------------------