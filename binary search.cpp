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

//painter partition problem / split array largest sum    (same concept as ALLOCATE BOOKS PROBLEM)
//.. to solve


//search in 2d matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();         // number of rows in matrix
        int m = mat[0].size();      // number of columns in matrix

        // Treat the 2D matrix as a 1D sorted array of length n*m
        int low = 0;                // starting index of virtual 1D array
        int high = n * m - 1;       // ending index of virtual 1D array

        // Perform binary search
        while (low <= high) {
            int mid = (low + high) / 2;   // middle index in virtual 1D array

            // Convert 1D index (mid) back into 2D coordinates (row, col)
            int row = mid / m;            // row index in matrix
            int col = mid % m;            // column index in matrix

            // Check if the middle element is the target
            if (mat[row][col] == target) 
                return true;              // target found → return true

            // If middle element is smaller, search right half
            else if (mat[row][col] < target) 
                low = mid + 1;

            // If middle element is larger, search left half
            else 
                high = mid - 1;
        }

        // If we exit the loop, target is not present
        return false;
    }  
};

//search in 2D matrix II(search in row and column wise sorted matrix)
//brute force
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size(), m= matrix[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == target)
                return true;
            }
        }
        return false;
    }
}; //tc- O(mxn)

row=0, col=m-1
while(row<n && col>=0){
    if(mat[row][col])
    return(row,col)
}else if(mat[row][col]<target)
row++;
else{
    col--;
}
return (-1,-1);


//optimal sol
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size(), m=matrix[0].size();
        int row=0, col=m-1;
        while(row<n && col>= 0){
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) row++;
            else col--;
        }
        return false;
    }
};


//Find Peak Element (2D Matrix)
pseudo code:-
fn(mat,n,m){
    low=0, high=m-1;
    while(low<=high){
        mid=(low+high)/2
        row=maxElem(mat,n,m,mid)

        left= mid-1>=0 ? mat[row][mid-1]:-1;
        right= mid+1<m ? mat[row][mid+1]: -1;

        if(mat[row][mid]>left && >right)
        return (row,mid);

        else if 
        else low=mid+1;
    }
    return(-1,-1);
}


class Solution {
public:

int findMaxIndex(vector<vector<int>>& mat, int n, int m, int col){       //function.. it scans all rows to find row idx with max val in col.
    int maxValue=-1;                     //O(n) time
    int index=-1;
    for(int i=0; i<n; i++){
        if(mat[i][col]> maxValue){
            maxValue = mat[i][col];
            index=i;
        }
    }
    return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        int low=0, high=m-1;

        while(low<= high){
            int mid=(low+high)/2;
            int maxRowIndex= findMaxIndex(mat,n,m,mid);  //max element in this col
            int left=mid-1>=0? mat[maxRowIndex][mid-1]: -1;  //comparing this max el with immediate left and right
            int right= mid+1<m ? mat[maxRowIndex][mid+1]: -1;
            if(mat[maxRowIndex][mid]> left && mat[maxRowIndex][mid]>right){   //peak condition
                return{maxRowIndex, mid};
            }
            else if(mat[maxRowIndex][mid]< left){
                high=mid-1;    //move to left half
            }else{
                low=mid+1;    //move to right half
            }
        }
        return {-1,-1};  //if no peak 
        
    }   //TC--> O(logm x n)
};



