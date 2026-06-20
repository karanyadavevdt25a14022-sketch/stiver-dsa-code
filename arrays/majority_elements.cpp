#include <bits/stdc++.h>
using namespace std;
 
//bruet is simple create counter run two loops and return the arr[i] at the end of the inner loop; TC = O(N^2)


//better  tc is nearly O(N log N ) + O(N)  
// class Solution {
// public:
//     int majorityElement(vector<int>& arr) {
//         int n= arr.size();
//         map<int,int>mp;
//         for(int i = 0 ; i<n; i++){

//             mp[arr[i]]++;
//         }
//         for(auto it : mp){
//             if(it.second > n/2){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };
 


//optimal tc = O(2n)

// class Solution {
// public:
//     int majorityElement(vector<int>& arr) {
//         int n= arr.size();
//         int ele;
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(count == 0){
//                 ele=arr[i];
//                 count=1;
//             }
//             else if(arr[i]==ele){
//                 count++;
//             }
//             else{
//                 count--;
//             }

//         }
//          int cou=0;
//          for(int i=0 ; i<n ; i++){
//             if(arr[i] == ele){
//                 cou++;
//             }
//          }
//          if(cou > n/2){return ele;}
//          return -1;
//     }
// };

