#include <bits/stdc++.h>
using namespace std;
//brute force   O(N^2) 
// class Solution {
// public:
//     int ls(vector<int>arr,int key){
//         int n = arr.size();
//         for(int i = 0 ; i < n ; i ++){
//             if(arr[i] == key ){
//                 return true ;
//             }
//         }
//         return false;
//     }
//     int longestConsecutive(vector<int>& arr) {
//        int n=arr.size();
//        int longest=1;
//        for(int i = 0 ; i < n ; i++ ){
//            int count = 1;
//             int current = arr[i];
//            while(ls(arr,current+1)==true){
//             current++;
//             count++;
//            }
//            longest=max(longest,count);
//         }
//         return longest;
//        }  
// };


//better solution  tc O(2N);
// //class Solution {
// public:
//     int longestConsecutive(vector<int>& arr) {
//         int n = arr.size();

//         if(n == 0) return 0;

//         int maxi = 0;
//         unordered_set<int> st;

//         for(int x : arr) {
//             st.insert(x);
//         }

//         for(int it : st) {
//             if(st.find(it - 1) == st.end()) {
//                 int x = it;
//                 int count = 1;

//                 while(st.find(x + 1) != st.end()) {
//                     count++;
//                     x++;
//                 }

//                 maxi = max(maxi, count);
//             }
//         }

//         return maxi;
//     }
// };
