#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& arr) {
        
//         int n = arr.size();
//         if(n==1){return arr[0];}
//         map<int,int>mpp;
//         for(int i = 0 ; i < n ;i++ ){
//            mpp[arr[i]]++;
//         }
//         for(int i = 0 ; i < n ;i++ ){
           
//            if(mpp[arr[i]]==1){return arr[i];}
//         }

//         return -1;
//     }
// };


class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        
        int n = arr.size();
        if(n == 1){
            return arr[0];
        }
        if(arr[0]!=arr[1]){return arr[0];}
        if(arr[n-1]!=arr[n-2]){return arr[n-1];}
        int low =1 , high =n-1;

        while(low <=high){

           int  mid = (low + high)/2;

           if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){return arr[mid];}
            //right part elemination
            if((mid%2==1) && (arr[mid]==arr[mid + 1 ]) || (mid%2==0) && (arr[mid] == arr[mid-1]) ){
                high = mid - 1 ;
            }

            //left part elemination
             else{
                low = mid + 1 ;
            }
        }

       return -1;
    }
};