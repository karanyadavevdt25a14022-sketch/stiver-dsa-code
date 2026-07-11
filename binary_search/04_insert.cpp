


#include <bits/stdc++.h>
using namespace std;

//insert at location 
class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        int n = arr.size();
        int ans =n;
        int low = 0, high = n-1 ,mid;
        while(high >= low){
            mid = ( low + high )/2;
            if(arr[mid] >= x){
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