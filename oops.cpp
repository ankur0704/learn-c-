#include<bits/stdc++.h>
using namespace std;

class Teacher{

    public:
    //non parametrized constructor
    Teacher(){  //a constructor created by devloper itsself. 
        cout<<"Hi i am constructor\n";
    }

    //parametrized
    Teacher(string n, string d, string s, double sal){
        name=n;
        dept=d;
        subj=s;
        salary=sal;
    }


    //properties / attributes
    string name;
    string dept;
    double salary;
    string subj;

    //methods / member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    //setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }

};

class Acount{
    private:
    double balance;
    string password;  //data hiding
    
    public:
    string accountId;
    string username;
    
};


int main(){
    Teacher
    Teacher t1; //constrictor is called // t1 is object
    t1.name="Ankur";
    t1.subj="Maths";
    t1.setSalary=(5000);
    Teacher t2;
    Teacher t3;

    cout<<t1.getSalary()<<endl
    return 0;
}