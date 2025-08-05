// int slargest= secondLargest(a,n);
// int ssmallest= secondSmallest(a,n);



// return {slargest, ssmallest};


#include<bits/stdc++.h>
using namespace std;
//linear search
// ex:-arr[] =[1,3,45,1,3,6]  num=4

// for(int i=0; i<n; i++){
//     if(arr[i]==num){
//         return i;
//     }
//     return -1;  
// }

int findMaximumConsecutivesOfOnes(vector<int>& nums){
    int maxi=0;
    int cnt=0;
    
    for(int i =0; i<nums.size(); i++){
        if(nums[i]==1){
            cnt++;
            maxi= max(maxi, cnt);

        }else{
            cnt=0;
        }
    }
    return maxi;


};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR=0;
        for(int i=0; i<nums.size();i++){
            XOR=  XOR^nums[i];
        }
        return XOR;
        
    }
};

//2sum
map<int,int> mpp;
for(int i =0; i <nums.length(); i++){
    int num = nums[i];
    int more = target - num;
    if(mpp.find(more) != mpp.end()){
        return (mpp[more],i);
    }
    mpp[num]=i;
}
return {-1,-1};
}
};

//optimal   using 2 pointer 
int  left=0, right=n-1;
sort(arr.begin(), arr.end());
while(left< right){
    int sum= arr[left]+ arr[right];

    if (sum==target){
        return "yes";
    }
    else if (sum<target) left++;
    else right--;
}
return "NO";


//intro to recursion--
 void print(){
    cout<<1<< endl;
    print();
 }
 int main(){
    print();
    return 0;
 }
 //.. multiple function scalled in the memory(function calls in the memory)
 // this is called STACK OVERFLOW (segmentation)

 //print name n times using recursion
 //(in notebook)
 
 //print 1 to n using recursion-->
 void func(int n, int i){
    if(i>n) return;

    cout<<i<<endl;
    func(i+1,n);
    
 }
 int main(){
    int n=4;
    func(1,n)
    return 0;
 }

 //backtracking in nb

 //SUM OF FIRST N NOS. using functional way
 int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
 }
 int main(){
    int n =3;
    cout<<sum(n);

    return 0;
 }

//factorial of n nos.
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1)
}
int main(){
    int n=3;
    cout<<fact<<(n);
    return 1;
}