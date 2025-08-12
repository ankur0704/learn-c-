#include<bits/stdc++.h>
using namespace std;

class Person(){
    public:
    string name;
    int age;

    // Person(string name, int age){
    //     this-> name=name;
    //     this-> age= age;
    // }
    Person(){

    }
};


class Student: public Person{
    public:
    int rollno;

    void getInfor(){   //defining a fuction
        cout<< "name:"<< name<< endl;
        cout<< "age:"<< age<< endl;
        cout<< "rollno:"<< rollno<< endl;

    }
    //name, rollno, age


};



int main(){
    Student s1;
    s1.name="Ankur";
    s1.age=21;
    s1.rollno=123;


    return 0;
}