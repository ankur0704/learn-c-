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


Node* converArrToLL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        cout<< temp-> data<<" ";
        temp= temp-> next;
        cnt++;    
    }
return cnt;
}

int checkIfPresent(Node* head, int val){
    Node* temp= head;
    while(temp){
        if(temp-> data==val) return 1;
        temp= temp-> next;
    }
    return 0;
}


int main(){                                          //
    vector<int> arr={1,5,8,7};
    Node* head= converArrToLL(arr);
    cout<<head->data;
    // Node* y= new Node(arr[0], nullptr);
    // cout<<y; 
    cout< checkIfPresent(head, 15);
    //traversal in LL
    Node* temp=head;
    while(temp){
        cout<< temp-> data<<" ";
        temp= temp-> next;
    }
}