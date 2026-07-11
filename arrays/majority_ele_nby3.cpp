#include <iostream>
using namespace std;

//brute O(N^2) check evry element and keep the track of it and count ++ and puch in vector;

//better hashing TC O(n) * O(logn) , SC O(N)

//optimal by flag method O(N) ,O(1);
 
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& arr) {
//         vector<int>ans;
//        int cn1=0,cn2=0,el1,el2;
//        int mini = int(arr.size()/3)+1;
//        for(int i = 0 ; i < arr.size(); i++){
//          if(cn1==0 && el2 != arr[i]){
//             cn1=1;
//             el1=arr[i];
//          } 
//          else if(cn2 == 0 && el1 !=arr[i]){
//             cn2=1;
//             el2=arr[i];
//          }
//          else if(el1 == arr[i]){cn1++;}
//          else if(el2 == arr[i]){cn2++;}      
//          else{
//             cn1--;
//             cn2--;
//          }
          // now the el1 and el2 points to the majority elements ,  now manually find the no. of that appers 
//     }
//        cn1 = 0 ,cn2 = 0;
//           for(int i = 0 ; i < arr.size() ; i++ ){
//             if(arr[i]== el1){
//                 cn1++;
//             }
//             else if(arr[i] == el2){
//                 cn2++;
//             }
//          }
//          if(cn1 >= mini){ans.push_back(el1);}
//          if(cn2 >= mini){ans.push_back(el2);}
//     return ans;
//     }
// };