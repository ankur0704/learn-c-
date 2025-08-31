#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){         //for java pointer is not there  therefore remove pointer
        
        data= data1;   //this.data
        next= next1;   //this.next= null;
    }
};

int main(){                                          //
    vector<int> arr={1,5,8,7};
    Node* y= new Node(arr[0], nullptr);
    cout<<y; 

}