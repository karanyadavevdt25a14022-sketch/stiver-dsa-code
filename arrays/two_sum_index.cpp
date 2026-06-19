#include <bits/stdc++.h>
using namespace std;
// brute  time complexity nearly O(n^2)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int k) {
//         int n= arr.size();
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             for(int j=i ;j<n-1;j++){
//                 if(arr[i]+arr[j+1]==k ){
//                   v.push_back(i);
//                   v.push_back(j+1);
//                  return v;   
//                 }
//             }
//         }
//         return v;
//     }
// };

//better  time complexity = O(N*log(n)) and space complexity O(N) and for vector O(1)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int k) {
//         int n= arr.size();
//         vector<int>v;
//         map<int,int>mp;
//         for(int i=0;i<n;i++){
//          if(mp.find(k-arr[i])!=mp.end()){
//             v.push_back(mp[k-arr[i]]);
//             v.push_back(i);
//          }
//          else
//            { mp[arr[i]]=i;}
//         }
//      return v;
//     }
// };

//Better Solution // not When the return type ask for indexes  Time complexity O(N)+O(sort)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int k) {
//      int n=arr.size();
//      int left=0,right =n-1;
//      sort(arr.begin(),arr.end());
//      while(left<right){
//         if(arr[left]+arr[right]==k){return "yes";} // yes is wrong here since returm type is vector not sting
//          else if(arr[left]+arr[right]<k){k++;}        
//          else {right --;}
//             }
//     return "No";
//     }
//    };



















