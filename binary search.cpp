#include<bits/stdc++.h>
//iterative code for search in binary search

int search(vector<int>& nums, int target){

    int n=nums.size();
    int low=0, high=n-1;

    while(low<=high){
        int mid= (low+high)/2;
        if(nums[mid]==target)  return mid;

        else if(target>nums[mid]) low= mid+1;
        else high = mid-1;
    }
    return -1;
}

//lower bound
int lowerbound(vector<int>arr, int n, int x){
    int low= 0, high=n-1;
    int ans = n;
    while(low<=high){
        int mid=(low+high)/2;
        //may be ans
        if(arr[mid]>=x){
            ans=mid;
            // look for small index in mid
            high = mid-1;
        }
        else{
            low=mid+1; //look for right
        }
    }
    return ans;
}  //tc-> 0(log n)


//upper bound
int lowerbound(vector<int>arr, int n, int x){
    int low= 0, high=n-1;
    int ans = n;
    while(low<=high){
        int mid=(low+high)/2;
        //may be ans
        if(arr[mid]>x){
            ans=mid;
            // look for small index in mid
            high = mid-1;
        }
        else{
            low=mid+1; //look for right
        }
    }
    return ans;
}  //tc-> 0(log n)