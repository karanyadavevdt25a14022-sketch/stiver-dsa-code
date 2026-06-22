#include <bits/stdc++.h>
using namespace std; 


//brute force ~ O(n^3) 
// class Solution {
// public:
//     void mark_row(vector<vector<int>>& arr,int j,int r){
//         for(int i = 0 ; i < r ; i ++){
//             if(arr[i][j] == 1){
//                 arr[i][j] = -1;
//             }
//         }
//     }
//      void mark_col(vector<vector<int>>& arr,int i,int c){
//         for(int j = 0 ; j < c ; j ++){
//             if(arr[i][j] == 1){
//                 arr[i][j] = -1;
//             }
//         }
//     }
//     void setZeroes(vector<vector<int>>& arr) {
//         int r = arr.size();
//         int c = arr[0].size();
//         int i=0,j=0;
//         for(int i = 0 ; i < r ; i++ ){
//           for(int j = 0 ; j < c  ; j++){
//             if(arr[i][j] == 0){
//                 mark_row(arr,j,r);
//                 mark_col(arr,i,c);
//             }
//           }
//         }
//           for(int i = 0 ; i < r ; i++ ){          
//           for(int j = 0 ; j < c  ; j++){
//             if(arr[i][j] == -1){
//                 arr[i][j] = 0;
//             }
//           }
//         }
//     }
// };



//better solution  ~ TC(2*r*n) and SC O(r+c)
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int  r = matrix.size();
//         int c = matrix[0].size();
//         vector<int>row(r,0);
//         vector<int>col(c,0);
//         for(int i = 0  ; i < r ; i++){
//             for(int j = 0 ; j < c ; j++){
//                 if(matrix[i][j]==0){
//                     row[i]=1;
//                     col[j]=1;
//                 }
//             }
//         }
//         for(int i = 0  ; i < r ; i++){
//             for(int j = 0 ; j < c ; j++){
//                 if(row[i] || col[j]){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };