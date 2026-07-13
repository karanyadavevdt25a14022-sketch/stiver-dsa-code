#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &arr)  {
        int n = arr.size();
        int mini = INT_MAX , ans ;
        int high = n-1 , low =0;
         //we have to find the sorted part index only 
         while(low <= high ){
          int  mid = (low + high)/2;


          if(arr[low] <= arr[mid]){
          
              if(mini >= arr[low]){
                mini =  arr[low];
                ans = low;
                low = mid + 1 ;
              }
              low = mid + 1 ;
          }

          else {
                if(arr[mid]<mini){
                mini =  arr[mid];
                ans = mid;
                high = mid -1 ;
                }
               high = mid -1 ;  
          }

          
         }
        return ans;
    }
};