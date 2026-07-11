#include <bits/stdc++.h>
using namespace std;

//floor and seel tc = 2 log n 
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> arr, int x) {
        int n= arr.size();
        vector<int> ans;
        int a = -1 ;
        int low = 0 , high = n-1 ;
        while(low<=high){
           int mid1= (low  + high )/2;
            if(arr[mid1] <= x){
                a = mid1 ;
                low = mid1 + 1 ;
            }
            else {
                high = mid1 -1 ;
            }

        }
        ans.push_back(arr[a]);
        a = -1;
        low = 0 ; 
        high = n-1 ;
        while(low<=high){
          int  mid2 =(low  + high )/2;
            if( arr[mid2]>=x ){
                a = mid2;
                high = mid2 -1 ;
            }
            else {
                low = mid2 + 1 ;
            }

        }
        ans.push_back(arr[a]);

        return ans;
    }
};