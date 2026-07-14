#include <bits/stdc++.h>
using namespace std ; 

//brute linear iteration O ( n)

//optimal LOGn 
// class Solution {
// public:
//     int findPeakElement(vector<int>& arr) {

//         int n = arr.size();
//         if(n==1 ){return 0;}
//         for(int i = 1 ; i < n-1 ; i++){
//             if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){return i;}
//         }
//         if(arr[0] >= arr[n-1]){return 0;}
//         if(arr[0] <= arr[n-1]){return n-1;}
//         return -1;
//     }
// };


// class Solution {
// public:
//     int findPeakElement(vector<int>& arr) {

//         int n = arr.size();
//         if(n==1){return 0;}

//         if(arr[0] > arr[1]){return 0 ;}
//         if(arr[n-2] < arr[n-1]){return n- 1 ;}
//         int low = 1 , high = n - 2 ;

        
//         while(low <= high ){
//             int mid = (low + high)/2;
//            //middle cases 
//             if (arr[mid] > arr[mid - 1 ]  && arr[mid] > arr[mid + 1]){
//                   return mid ;
//            }
//            else if (arr[mid-1] < arr[mid]){
//             low = mid  + 1; 
//            }
//            else  {
//             high = mid - 1;
//            }   
//         }
//         return -1;
//     }
// };