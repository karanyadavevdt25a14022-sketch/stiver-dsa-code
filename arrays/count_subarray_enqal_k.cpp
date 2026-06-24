#include <bits/stdc++.h>
using namespace std;

//brute approch / better approch  O(n^2)
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
       int count = 0;
       for (int i = 0; i < n ; i++)
       {

           int sum = 0;
           for (int j = i; j < n; j++)
           {
            sum +=arr[j]
            if (sum == k)
            {
                count++;
            }
            
           }
           

        }
        return count;
    }
};



//optimal approch with presum consecpts 
// class Solution {
// public:
//     int subarraySum(vector<int>& arr, int k) {
//         int n = arr.size();
//         map<int,int>mp;
//         mp[0]=1;
//         int count=0,psum=0;
//        for(int i = 0 ; i < n ;i++){
//         psum +=arr[i];
//         int remove = psum-k;
//         count +=mp[remove];
//         mp[psum]++;
//        }


//         return count;
//     }
// };