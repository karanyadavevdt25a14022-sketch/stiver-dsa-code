#include <bits/stdc++.h>
using namespace std;

//brute liner  search

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<=n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
        }
        return 0;
       
    }
};

//better : Hashing

//optimal 

//1)using sum 

class Solution {
public:
    int missingNumber(vector<int>& arr) {
       int n=arr.size();
       
       int sum=(n*(n+1))/2;
       int s2=0;
       for(int i=0;i<n;i++)
       {s2 +=arr[i];}
       return (sum-s2);
    }

};

//2) using xor 

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
       int xor1=0;
       int xor2=0;
       for(int i=0;i<n;i++) {
          xor1 = xor1^(i+1);
          xor2 = xor2^arr[i];
       }
       xor1=xor1^(n+1);
       return (xor1^xor2);
    }

};