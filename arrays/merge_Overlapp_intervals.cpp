#include <bits/stdc++.h>
using namespace std; 
//brute force solution tc ~ O( 2N + NlogN) 
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& arr) {
//         sort(arr.begin()  , arr.end() );
//       int  n = arr.size();
//        vector<vector<int>> ans ;
//            for(int i = 0 ; i < n ; i++){
//             int start = arr[i][0];
//             int end = arr[i][1];
//             if(!ans.empty() && end <= ans.back()[1]){
//                 continue ;
//             }
//             for(int j = i + 1 ; j < n ; j++){
//               if(arr[j][0] <= end){
//                 end = max(end,arr[j][1]);
//               }
//               else {
//                 break; 
//               }
//             }
//                ans.push_back({start,end});
//            }
//       return ans; 
//     }
// };

//Optimal solution 1
//TC O(N) + O(NlogN) , SC = (1) , to return an answer O(n);  
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin()  , arr.end() );
        int  n = arr.size();
         vector<vector<int>> ans ;
             for(int i = 0 ; i < n ; i++){
              if(ans.empty() || arr[i][0] > ans.back()[1]){

               ans.push_back({arr[i][0],arr[i][1]});

              }

              else if (ans.back()[1] >= arr[i][0]){

               ans.back()[1] = max(ans.back()[1],arr[i][1]);
              }
                          
                          
                }

      return ans; 
    }
};
