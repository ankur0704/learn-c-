#include<bits/stdc++.h>
using namespace std;


class A{
    private:
    int x;

    public:
    A(int _val):x(_val){};

    int getX() const {return x; }
    void setX(int _val) {x= _val; }

    void print() const{
        cout<<x<<endl;   //instead of friend keyword
    }

    friend class B;             ////
    friend void print(const A&a);  ///
};

class B{
    public:
    void print(const A&a){
        cout<<a.getX()<<endl;
         a.print()        //instead of friend keyword
    }
};

void print(const A&a){
    cout<<a.x<<endl;    ///

   

}

int main(){
     A a(5);
     B b;
     b.print(a);
     print(a);
     return 0;
}

