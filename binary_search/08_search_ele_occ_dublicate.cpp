#include <bits/stdc++.h>
using namespace std;




// brute : linear search   TC = O(n)

//optimal solutin ; BS , TC = O(log n) , TC edge case O(n/2)
class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int n = arr.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(arr[mid]==k){return true;}
            //when all equal 
            if(arr[mid] == arr[l] && arr[mid] == arr[h]){
                h--,l++;
                continue;
            }
            //left sorted
            if(arr[l]<=arr[mid]){
                   if(k<=arr[mid] &&  k>=arr[l] ){
                        h = mid-1 ;
                   }
                   else{
                    l = mid + 1 ;
                 }
            }

            //right sorted

            else{
                if(k<=arr[h] && k>=arr[mid]){
                     h = mid -1 ;
                }
                else{
                     l = mid + 1 ;
                }
            }
        }
        return false;
        
    }
};