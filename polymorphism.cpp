// #include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;

    Student(){
        cout<<"non-parametrized constructor";

    }
    Student(string name){
        this->name=name;
        cout<<"parametrized constructor";
    }
};

int main(){
    Student s1;
    return 0;
}