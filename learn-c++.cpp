#include<bits/stdc++.h>
using namespace std;

// int main(){

//     int age;
//     cin>>age;
//     if(age>=18){
//         cout<< "you are adult"
//     }else
//     return 0;
// }

// int main(){

//     int marks;
//     cin>> marks;
//     if(marks<25){
//         cout<< "F";
//     }
//     else if(marks>=25 && ){

//     }
//     return 0;

// }

// int main(){
//     int age;
//     cin>> age;
//     if(age<18){
//         cout<< "not eligible to job";
//     }
//     else if(age<=54){
//         cout<< "eligible for job";
//     }
//     else if(age<=75){
//         cout<<"eligible but not retirement";

//     }
//     else{
//         cout<< "retirement time";
//     }
//     return 0;
// }

// int main(){
//     int day;
//     cin>> day;
//     switch(day){
//         case1
//     }
// }

//switch statements:
// int main(){
//     int day;
//     switch(day){
//         case1:
//         cout<<"monday";
//         break;
//         case2:
//         cout<<"tuesday";
//         break;
//         case3:
//         cout<<"wed";
//         break;
//         case4:
//         cout<<"thur";
//         break;
//         default:
//         cout<<"Invalid";
        
//     }
//     cout<< "Check";
//     return 0;
// }

//string
//  int main(){
//     string s= "Ankur";
//     int len = s.size();
//     cout<< s[len-1];
//     return 0;
//  }


//for loops
// int main(){
//     for(int i=1; i<=10;i=i+1){
//         cout<< "Ankur"<< endl;
//     }
    

//     return 0;
// }

//while:
// int main(){
//     int i=1;
// while(i<=5){
//     cout<< "Ankur"<<i<<endl;
//     i=i+1;

// }
// return 0;

// }

// void printName(){
//     cout<<"ankur";
// }
// int main(){
//     string name;
//     printName(name);return 0;
// }

// int main(){
//     int num1,num2;
//     cin>> num1>>num2;
//     int num3=num1+num2;
//     cout<<num3;
//     return 0;
// }


//patterns
void print1(int n){
    for(int i=0; i<n;i++){
        for(int j=0; i<n;j++){
            cout<< "*";
        }
        cout << endl;
    }
}  //this is main logic
void print2(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=n; j++)
        cout<< "* 0";
      
    }cout<<endl;
} 

void print3(int n){
    for(int i=1; i<n;i++){ 
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        
        
      
    }cout<<endl;
}
void print4(int n){
    for(int i=0; i<n;i++){
        for(int j=1; j<=i; j++)
        cout<< i<<" ";
      
    }cout<<endl;
} 

void print5(int n){
    for(int i=1; i<n;i++){
        for(int j=0;j<n+1;j++){
            cout<< "* ";
        }
       
      
    }cout<<endl;
} 

void print6(int n){
    for(int i=1; i<n;i++){
        for(int j=1;j<n+1;j++){
            cout<<j<<" ";
        }
       
      
    }cout<<endl;
} 

void print6(int n){
    for(int i=1; i<n;i++){
        for(int j=1;j<n+1;j++){
            cout<<j<<" ";
        }
       
      
    }cout<<endl;   
} 
 
void print7(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        
        }
       cout<<endl;
      
    }

void print7(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"* ";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        
        }
       cout<<endl;
      
    }
void print8(int n){
    for(int i =1;i<=2*n-1;i++){ 
        int stars=i;
        if(i>n) stars=2*n-1; 
        for(int j=1; j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void print8(int n){
    for(int i =0;i<n;i++){ 
        int start=1;
         
       

    }
}
void print14(int n){
    for(int i =0; i<n;i++){
        for(char ch='A'; ch<= 'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}

void print16(int n){
    for(int i=0; i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//this main function dont need to write in any compiler such as leetcode,etc
int main(){
    int n;
    cin>>n;
    print7(n);   

}


















