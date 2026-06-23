#include <bits/stdc++.h>
using namespace std;


//brute_force solution  TC=(2n^2) , sc=(N^2)
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//        int r  =  matrix.size();
//       int c = matrix[0].size();
//       vector<vector<int>> ans(r, vector<int>(c, 0));
//       for(int i = 0 ; i < r ; i++){
//         for(int j = 0 ; j <c; j++){
//              ans[j][c-1-i]=matrix[i][j];
//         }
//       } 
//       for(int i = 0 ; i < r ; i++){
//         for(int j = 0 ; j <c; j++){
//              matrix[i][j]=ans[i][j];
//         }
//       } 
//     }
// };


// better - optimal ;  tc O(N^2);
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//        int r  =  matrix.size();
//       int c = matrix[0].size();
//       for(int i = 0 ; i < r-1 ; i++){
//         for(int j = i+1 ; j < c; j++){
//             swap(matrix[i][j],matrix[j][i]);
//         }
//       } 
//       for(int i = 0 ; i < r ; i++){
//         reverse(matrix[i].begin(),matrix[i].end());
//       }
//     }
// };


