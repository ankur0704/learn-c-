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




//81. Search in Rotated Sorted Array II
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        //using binary search
        int n= arr.size();
        int low=0, high= n-1;

        while(low<= high){
            int mid= (low+high)/2;

            //if mid pts to target
            if(arr[mid]== target) return true;

            //edge case
            if(arr[mid]== arr[low] && arr[mid]== arr[high]){
                low=low+1;
                high=high-1;

                continue;

            }
            //if left part is sorted
            if(arr[low]<= arr[mid]){
                if(arr[low]<= target && target <=arr[mid]){
                    high=mid-1;
                }
                else{
                    //element doesnt exist
                    low=mid+1;
                }
            }
            else{
                 //if right part is sorted
                if(arr[mid]<=target &&  target<=arr[high]){
                    low= mid+1;
                    
                }
                else{
                    high= mid-1;  // element doesnt exist
                }
            }
        }
        return false;
    }
};  //TC:- 0(logn)
        
        //using linear search
    //     int n= arr.size();
    //     for(int i=0; i<n; i++){
    //         if(arr[i]== target) return true;

    //     }
    //     return false;

        
    // }   TC:-//O(N)

