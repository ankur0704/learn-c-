#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next= NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
List(){
    head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail= newNode;
        return;       
    }else{
        newNode->next= head;
        head = newNode;
    }

    

    }

    void push_back(int val){
        Node* newNode =  new Node(val);

        if(head == NULL){
            head=tail=newNode;
        }else{
            tail -> next = newNode;
            tail= newNode;
        }

    }

    void pop_front(){
        if(head == NULL){
            cout<< "LL is empty"<< endl;
            return;
        }
        Node* temp = head;
        head= head-> next;

        temp-> next= NULL;

        delete temp;

    }

    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp-> next!= tail){
            temp= temp-> next;
        }
        temp-> next= NULL;
        delete tail;
        tail= temp;
    }

    void insert(int val, int pos){
        if(pos< 0){
            cout<<"invalid pos"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp= head;
        for(int i=0; i<pos-1; i++){
            if(temp== NULL){
                cout<<"invalid pos"<< endl;
                return;
            }
            temp= temp-> next;
        }
        Node* newNode = new Node(val);
        newNode-> next= temp-> next;
        temp-> next = newNode;
    }

    int search(int key){
        Node* temp = head;
        int idx=0;

        while(temp != NULL){
            if(temp-> data == key){
                return idx;
            }
            temp= temp-> next;
            idx++;
        }
        return -1;
    }

    void printLL(){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data<< " ";
            temp= temp->next;

        }
        cout<<endl;
        
        
    }
};


int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);


    ll.insert(4,1);

    cout<< ll.search(2)<<endl;

    ll.pop_front();
    ll.pop_back();

    ll.push_back(4);

    ll.printLL();
    return 0;
}


//reverse a LL(LEETCODE 206)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;   //At the start, there’s no node before the head, so the "previous" pointer is NULL.
        ListNode* curr = head; //Start traversal from the head node.
        ListNode* next = NULL;  //Temporary pointer to store the next node during traversal

        while(curr != NULL){      //We process nodes until curr becomes NULL (i.e., end of list).
            next = curr-> next;   //Example: If curr is 1, then next = 2.
            curr-> next= prev;    //Example: 1 → NULL instead of 1 → 2.

            prev= curr;
            curr= next;

        }
        return prev;
    }
};
