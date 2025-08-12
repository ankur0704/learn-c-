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
        cout<<"parent constructor..\n";
    }
};


class Student: public Person{
    public:
    int rollno;
    // Student(string name, int age, int rollno): Person( name,  age){
    //     this-> rollno=rollno;
    };

class GradStudent : public Student{
    public:
    string researchArea;
}


    // void getInfo(){   //defining a fuction
    //     cout<< "name:"<< name<< endl;
    //     cout<< "age:"<< age<< endl;
    //     cout<< "rollno:"<< rollno<< endl;

    // }
    // //name, rollno, age


// };



int main(){
    GradStudent s1;
    s1.name="Ankur Sonavane";
    s1.researchArea="cloud comp";
    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;
    Student s1("ankur sonavane",21,1234);
    s1.getInfo();
    // s1.name="Ankur";
    // s1.age=21;
    // s1.rollno=123;


    return 0;
}