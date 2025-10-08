#include<bits/stdc++.h>
using namespace std;


//factorial 
int factorial(int n){
    //base case
    if(n==1)
        return 1;

    if(n==0)
        return 1;

    //processing

    //recursive call
    int recursionKaAns = factorial(n-1);

    //processing
    int finalAns =n*recursionKaAns;
    return finalAns;
}


//counting from n to 1
void print(int n){
    //base case
    if(n==1){
        cout<<1<<" "<<endl;
        return;

    }
    //processing
    cout<<n<<" ";

    //recursion call
    print(n-1);
}

//2^n power
int pow(int n){
    //base case
    if(n==0){
        return 1;
    }

    int ans = 2* pow(n-1);
    return ans;
}

//fibonacci series
int fib(int n){
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    int ans = fib(n-1) + fib(n-2);
    return ans;
}

//sum of n
int sum(int n){
    //base case
    if(n==1)
        return 1;

    int ans = n+sum(n-1);
    return ans;
}
int main(){
    cout<<sum(5)<<endl;
    cout<<fib(7)<<endl;


    cout<<pow(10)<<endl;
    print(5); //counting from n to1 1 

    cout<<factorial(5)<<endl;
    return 0;
}