#include<bits/stdc++.h>
using namespace std;



void printArray(int arr[][4], int row, int col ){
    for(int i=0; i<row;i++){
        for(int j=0; i<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void colWisePrint(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

 bool findTarget(int arr[][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                //if found return true
                return true;
            }
        }
    }
    return false // if target not found
 }



int main(){
    // int arr[3][3];   //creating 2d array

    //initialize
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int row=3;
    int col=4;
    printArray(arr, row, col);

    colWisePrint(arr, row, col);


    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;

    int target = 11;

    cout<<"Find or Not:"<<findTarget(arr, row, col, target)<<endl;
    

    // int arr[][4]={     //atleast give column size for 2d array initialization
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };


   
    //taking input 
    // int arr[3][4];
    // int row=3;
    // int col=4;
    // for(int i=0; i<row;i++){
    //     for(int j=0; j<col; j++){
    //         cout<< "Enter the input for row index"<<i<<"Column index:"<<j<<endl;
    //         cin>> arr[i][j];
    //     }bool findTarget(int arr[][4], )
    // }
    return 0;
}



//maximum no. in an array