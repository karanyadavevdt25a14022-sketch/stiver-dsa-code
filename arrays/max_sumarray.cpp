#include <bits/stdc++.h>
using namespace std;

int main() {

// brute force approce TC =O(n^2) 
// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) {
//         int n = arr.size();       
//         int maxsum = INT_MIN;
//         for(int i=0 ; i < n ; i++){
//              int sum=0;
//               for(int j = i ; j < n ; j++ ){
//                 sum +=arr[j];
//                 maxsum=max(sum,maxsum);
//               }
//         }
//         return maxsum;
//     }
// };






// Better optimal kadens algorithms  Time C = O(N)
// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) {
//         int n = arr.size();
//         int sum=0;
//         int maxsum = INT_MIN;
//         for(int i=0 ; i < n ; i++){
//            if(sum < 0){
//             sum=0; 
//            }  
//            sum += arr[i];
//            maxsum = max (sum,maxsum);
//         }
//         return maxsum;
//     }
// };





    return ;
}