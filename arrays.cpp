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