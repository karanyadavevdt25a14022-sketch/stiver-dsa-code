#include <bits/stdc++.h>
using namespace std;
//brute force  TC =O(N^2) , space Complexity worst case O(N)
// class Solution {
// public:
//     vector<int> leaders(vector<int>& arr) {
//       int n = arr.size(); 
//       vector<int>v;
//       for(int i = 0 ; i < n - 1 ; i++ ){
//         int led=1;
//         for(int j = i + 1; j < n   ; j++ ){
//             if(arr[i] < arr[j]){
//                 led = 0;
//             }
//         }
//         if(led == 1){
//          v.push_back(arr[i]);
//         }
//       }
//       v.push_back(arr[n-1]);
//       return v; 
//     }
// };



//most optimal solution better not exist  TC O(N)
//checking if the max of right part is  < current arr[i] then arr[i] is leader
class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
      int n = arr.size(); 
      int max=INT_MIN;
      vector<int>v;
      for(int i = n-1 ; i >= 0; i-- ){
        if(i==n-1){
          max = arr[i];
          v.push_back(arr[i]);
        }
        else if (arr[i] > max) {
            max = arr[i];
            v.push_back(arr[i]);
        }
        
    }
    reverse(v.begin(),v.end());
    return v;
    }
};
