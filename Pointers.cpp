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




void solve(int *arr[], int size){
    cout<<"size of array inside solve function:"<<sizeof(arr)<<endl;


}


int main(){
    int arr[]={1,2,3,4,5};
    cout<<"size of array"<<sizeof(arr)<<endl;
    solve(arr,4);

    // int* ptr= &arr;
    
    // //pointer to an array
    // int(*ptr)[5] = &arr;
    // cout<<(*)

    // char ch[10] = "ANKUR";
    // char* ptr= &ch;

    return 0;
}


void solve(int* p){
    p=p+1;
}
int main(){
    int a=5;
    int* p= &a;

    cout<<"p:"<< p<< endl;
    solve(p);
}