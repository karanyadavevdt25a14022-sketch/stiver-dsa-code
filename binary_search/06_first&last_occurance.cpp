#include <bits/stdc++.h>
using namespace std;

//Brute forece TC = O (N)

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& arr, int target) {
//       int n = arr.size();    
//       vector<int>ans;
//       int firsto=-1,lasto=-1;     
//       for(int i = 0 ; i < n ; i++){
//         if(arr[i]==target && firsto == -1){
//             firsto = i ;
//         }
//         else if(arr[i]==target){
//             lasto=i;
//         }
//       } 
//        ans.push_back(firsto);
//        if(firsto != -1 && lasto == -1){
//         ans.push_back(firsto);
//        }
//        else{
//         ans.push_back(lasto);
//        }
//    
//        return ans;
//     }
// };

//Optimal TC = O(logN)
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
      int n = arr.size();
     
      int ub = upper_bound(arr.begin(),arr.end(),target) - arr.begin();
      int lb = lower_bound(arr.begin(),arr.end(),target)- arr.begin();

      if(lb == n || arr[lb] != target){
        return {-1,-1};
      }
      else {
        return {lb,ub-1};
      }
      
    }
};




































