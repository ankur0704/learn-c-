#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){   //constructor
            
        this->name=name;   //this pointer
        cgpaPtr= new double;
        *cgpaPtr= cgpa;
    }

    Student(Student &obj){
        this-> name= obj.name;
        this-> cgpaPtr= obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name: "<< name<< endl;
        cout<<"cgpa: "<< *cgpaPtr<< endl;
    }
};

int main(){
    Student s1("Ankur sonavane", 8.9);

    Student s2(s1);
    *(s2.cgpaPtr)= 9.2;  
    s1.getInfo();   //copy constructor
    
    return 0;

}