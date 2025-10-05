#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;
    cout<<"Address of a"<<&a<<endl;

    int* ptr=0;   //null ptr
    cout<<*ptr<<endl;


    //pointer creation
    int* ptr= &a;
    //accessing value stored at address stored in ptr
    cout<<"Accessing:"<<*ptr<<endl;
    //
    cout<<ptr<<endl;


    // int arr[5]={1,2,3,4,5};
    // arr=arr+1;  //error(why not possible?)

    char ch[10]="a";
    char* cptr= ch[0];
    cout<<cptr;

    return 0;
}

