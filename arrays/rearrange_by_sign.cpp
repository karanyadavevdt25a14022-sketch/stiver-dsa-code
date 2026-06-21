#include <bits/stdc++.h>

using namespace std;

int main() {
// brute  create two array pos and negitive store negative and postive and then at 2i index positive and at 2i+1 index negative Tc=O(2N) + Sc = O(N) 
 vector<int>arr={3,-2,1,-5,2,-4};
 int n=arr.size();
 //optimal 
//  vector<int>ans(n,0);
//  int posin=0,negin=1;
//  for (int i = 0; i < n; i++)
//  {
//     if(arr[i]>0){      
//     ans[posin]=arr[i];  
//     posin+=2;
//     }
//     else{
//         ans[negin]=arr[i];
//         negin+=2;
//     }
//  }
 
// varitue 2 positive or negative are not equal 

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& arr) {
//     int n=arr.size();
//     vector<int>pos;
//     vector<int>neg;

//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//          pos.push_back(arr[i]);
//         }
//         else{
//            neg.push_back(arr[i]);
//         }
//     }
//     if(pos.size() > neg.size()){
//         for(int i=0;i<neg.size();i++){ 
//             arr[2*i] = pos[i];
//             arr[2*i+1] = neg[i];
//         }
//          int index = 2*neg.size();
//          for(int i = neg.size() ; i < pos.size() ; i++ ){
//             arr[index]=pos[i];
//             index++;
//          }
//     }

//     else{
//         for(int i=0;i<pos.size();i++){ 
//             arr[2*i] = pos[i];
//             arr[2*i+1] = neg[i];
//         }
//          int index = 2*pos.size();
//          for(int i = pos.size() ; i < neg.size() ; i++ ){
//             arr[index]=neg[i];
//             index++;
//          }

//     }
     

//       return arr;
//     }
    

// };

















return ans;
 




}