#include <bits/stdc++.h>
using namespace std;

//brute force O(n^4) for loops and space complexity is O(no.of quads)


//better Tc O(N^3 * log(n)) and Sc O(n)
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& arr, int target) {
//         int n = arr.size();
//         set<vector<int>>st;
//         for(int i = 0 ; i< n ; i++){
//             for(int j = i+1 ; j <n; j++){
//                  map<int,int>mpp;
//                 for(int k = j +1 ; k < n ; k++ ){
//                     int sum = arr[i]+arr[j];
//                       sum +=arr[k];
//                     int four = target-(sum);
//                      if(mpp.find(four) != mpp.end()){
//                         vector<int>temp{arr[i],arr[j],arr[k],four};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                      }
//                      mpp[arr[k]]++;
//                 }
//             }
//         }
//         vector<vector<int>>ans(st.begin(),st.end());
//         return ans;
//     }
// };

//Optimal Solution TC = O(N^3) , Sc = O(1)
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& arr, int target) {
//         sort(arr.begin(),arr.end());
//         int n = arr.size();
//         vector<vector<int>>ans;
//         for(int i = 0 ; i < n ; i ++ ){
//              if(i > 0 && arr[i] == arr[i-1] ){continue ;} 
//              for(int j = i + 1 ; j < n ; j++){
//                   if(j > i+1 && arr[j]==arr[j-1]){continue;}
//               int k = j+1 , l = n-1;             
//                  while(k<l){
//                  long long sum = arr[i] +arr[j] ;
//                  sum +=arr[k];
//                  sum +=arr[l];
//                 if(sum == target){
//               vector <int> temp{arr[i],arr[j],arr[k],arr[l]};
//                ans.push_back(temp);
//                k++,l--;
//               while(k<l && arr[k]==arr[k-1]){k++;}
//               while(k<l && arr[l]==arr[l+1]){l--;}
//              }
//               else if(sum < target ){
//               k++;
//              }
//               else if(sum > target ){
//               l--;
//             }
//                  }
//              }  
//         }
//         return ans;
//     }
// };













