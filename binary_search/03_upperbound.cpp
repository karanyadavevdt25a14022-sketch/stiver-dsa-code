
#include <bits/stdc++.h>
using namespace std;

//upper bound TC = O(log n)
 class Solution{
public:
    int upperBound(vector<int> &arr, int x){
        int n = arr.size();
        int ans =n;
        int low = 0, high = n-1 ,mid;
        while(high >= low){
            mid = ( low + high )/2;
            if(arr[mid]> x){
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
