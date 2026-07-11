#include <bits/stdc++.h>
using namespace std;

//brute 

// class Solution {
// public:
//     vector<int> findMissingRepeatingNumbers(vector<int> nums) {
//         vector<int>ans;
//      int rep =-1,miss = -1 ; 
//      int n =nums.size();

//      for(int i = 1 ; i <=n; i++){
//        int cnt=0;
//           for(int j = 0  ; j < n ; j ++){
//            if(nums[j]==i){cnt++;}
//           }
//           if(cnt == 2){rep = i;}
//      else if(cnt == 0 ){miss = i ;}

//       if(miss!=-1 && rep !=-1){
//         break;
//       }
//      }

//      ans.push_back(rep);
//      ans.push_back(miss);
//      return ans;
//     }




// };




//better solution hashing TC = O(2N) && O(n)
// class Solution {
// public:
//     vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        
//      int rep =-1,miss = -1 ; 
//      int n =nums.size();
//      vector<int>hash(n+1,0);
//      vector<int>ans;
//      for(int i = 0 ; i < n; i++){
//         hash[nums[i]]++;     
//      }

//      //check 
//      for(int i = 1 ; i <=n ; i++){

//         if(hash[i] == 0){
//             miss = i ; 
//         }
//         else if(hash[i]== 2){
//             rep = i ; 
//         }
//      }

//      ans.push_back(rep);
//      ans.push_back(miss);
//      return ans;
//     }




// };

// //optimal 1 mathmatics 
// // form and equation of sum and sum^2 then find arr sum , arr multiply - actual then then form equation 

// class Solution {
// public:
//     vector<int> findMissingRepeatingNumbers(vector<int> nums) {
//         int val1 , val2; //x-y ,x+y
//         int rep,miss;
//         int s1,s2 = 0;
//     vector<int>ans;
//      int n =nums.size();
//         int sN  = (n*(n+1))/2;
//         int S2N = ( n * (n+1) * (2*n+1) )/6;

//         for(int i = 0 ; i< n ; i++){
//             s1 +=nums[i];
//             s2 +=nums[i]*nums[i];
//         }
//         val1 = s1 - sN ; //x-y;
//         val2 = s2 - S2N; //(x-y)(x+y);

//         val2 = val2/val1;

//         rep = (val1 + val2 )/2;
//         miss = val2 - rep;
//         ans.push_back(rep);
//         ans.push_back(miss);
//      return ans;
//     }
// };