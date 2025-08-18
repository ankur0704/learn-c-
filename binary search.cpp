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


    //find peak element 
   class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n= arr.size();
        if(n==1) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[n-1]> arr[n-2]) return n-1;

        int low=1, high= n-2;
        while(arr[low]<= arr[high]){            //when submitting in leetcode showing wrong ans(a bug), instead do "while(low<= high)"
            int mid=(low+high)/2;
            //If arr[mid] is the peak:
            if(arr[mid]> arr[mid-1] && arr[mid]> arr[mid+1]){
                return mid;
                   // If we are in the left:
            }else if(arr[mid]> arr[mid-1])low= mid+1;
            // If we are in the right:
            // Or, arr[mid] is a common point:
            else high = mid-1;
        }
        // Dummy return statement
        return -1;
        
    }
};   //tc - O(logN)




//BINARY SEARCH ON ANSWERS
//find sqrt of an integer
int Sqrt(int n){
    int low=1, high=n;
while(low<= high){
    long long mid=(low+high)/2;
    long long val= (mid*mid);
    if(val<=n){
        low=mid+1;
    }else{
        high=mid-1;
    }
}
return high;

}

//find nth root of number
//....remaining

//koko eating bananas
class Solution {
public:
    int findMax(vector<int> &v) {
        int maxi = INT_MIN;
        for (int x : v) {
            maxi = max(maxi, x);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int>& v, int h) {
        long long totalH = 0;
        for (int x : v) {
            totalH += (x + h - 1) / h;  // ceil division
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalH = calculateTotalHours(piles, mid);

            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};




