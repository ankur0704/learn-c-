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