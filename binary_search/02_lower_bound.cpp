
#include <bits/stdc++.h>
using namespace std;

//lower bound TC = O(log n)
 class Solution{
public:
    int lowerBound(vector<int> &arr, int x){
        int n = arr.size();
        int ans =n-1;
        int low = 0, high = n-1 ,mid;
        while(high >= low){
            mid = ( low + high )/2;
            if(arr[mid]>=x){
                ans = mid;
                high = mid -1 ;
            }
            else{
                low = mid + 1;
            }
        }
    return ans;

    }
};