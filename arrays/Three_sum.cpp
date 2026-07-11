#include <bits/stdc++.h>
using namespace std;

//brute force solution TC O(N^3) * for set O(log(uniqe_triplests)),Sc = O(unique triplets);


//better solution Tc=O(N^2 * log(n)) and sc =(n)
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& arr) {
//        int n = arr.size();
//        set<vector<int>>list;
//        for(int i = 0 ; i <  n ; i ++){
//             map<int,int>mpp; 
//           for(int j = i+1 ; j < n ; j++ ){
//             int target = -(arr[i]+arr[j]);           
//             if(mpp.find(target)!= mpp.end()){
//                 vector<int>temp{arr[i],arr[j],target};
//                 sort(temp.begin(),temp.end());
//                 list.insert(temp);
//             }
//              mpp[arr[j]]++;
//           }
//        }
//        vector<vector<int>>ans(list.begin(),list.end());
//           return ans;
//     }  
// };

//optimal_solution TC(N^2) loops + (nlogn) for sorting  and SC =O(1)
// //class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& arr) {
//        vector<vector<int>>ans;
//        int n = arr.size();
//        sort(arr.begin() ,arr.end());
//        for(int i = 0 ; i <  n ; i++){       
//         if(i > 0 && arr[i] == arr[i-1]){continue;}
//         int j = i + 1 ; 
//         int k = n-1;     
//         while(j<k){
//             int sum = arr[i] + arr[j] + arr[k];
//             if(sum == 0 ){
//                vector<int>temp={arr[i],arr[j],arr[k]};
//                ans.push_back(temp);
//                j++;
//                k--; 
//                while( j<k && arr[j]==arr[j-1]){j++;}
//                while( j<k && arr[k]==arr[k+1]){k--;}
//                 }
//             else if(sum < 0){
//                 j++;
//             }
//             else if(sum > 0 )
//             {k--;}
//         } 
//        }
//     return ans;
//     } 
// };