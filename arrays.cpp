// int slargest= secondLargest(a,n);
// int ssmallest= secondSmallest(a,n);



// return {slargest, ssmallest};


#include<bits/stdc++.h>
using namespace std;
//linear search
// ex:-arr[] =[1,3,45,1,3,6]  num=4

for(int i=0; i<n; i++){
    if(arr[i]==num){
        return i;
    }
    return -1;  
}