#include<bits/stdc++.h>
using namespace std;

void print(){   //void function
    cout<<"ankur";
}

int sum(int a , int b){   //return type function
    return a+b;
}

int main(){
    print();
    int s=sum(1,5);
    return 0;
}

//vectors
void explainVector(){
    
}

//List
void explainList(){
    list<int>ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);
    ls.emplace_front();
}

