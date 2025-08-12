// #include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

// class Student{
//     public:
//     string name;

//     Student(){
//         cout<<"non-parametrized constructor";

//     }
//     Student(string name){
//         this->name=name;
//         cout<<"parametrized constructor";
//     }
// };

// class Print{  //function overloading ex:
//     public:
//     void show(int x){
//         cout<<"int :"<<x<<endl;
//     }

//     void show(char ch){
//         cout<<"char :"<<ch<<endl;
//     }
// };

//abstract class
class Shape{    //abstract class
    virtual void draw()=0;  //pure virtual function
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"drawing a circle\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    // Printp1;
    // p1.show('&');
    // Student s1;
    return 0;
}