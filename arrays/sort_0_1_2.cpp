#include <bits/stdc++.h>
using namespace std;
void printarr(vector<int>& nums,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}
int main() {
vector<int> arr={1,2,0,0,0,2,2,2,1,1,1,2};
int n=arr.size();
//brute force solution 
//use Merg Sort tc:O(NlogN) , Space complexity = O(1);

//better solution the mannual filling 
//1) count the number of 0,1,2 and then manually run 3 loops till count0 , 1 then 2 and fill the space ;
//  int c1=0,c2=0,c0=0,ind=0;
//  for (int i = 0; i < n; i++)
//  {
//     if(arr[i]==0){c0++;}
//     else if(arr[i]==1){c1++;}
//     else{ c2++;}
//  }
//  for(int i=0;i<c0;i++){arr[ind++]=0;}
//  for(int i=0;i<c1;i++){arr[ind++]=1;}  //c1+c2+c3 == n so whole three time complexity= O(N);
//  for(int i=0;i<c2;i++){arr[ind++]=2;}
 
//optimal solution //tc : O(N)
// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
//         int n = arr.size();

//         int low=0,mid=0,high=n-1;

//         while(mid<=high){
//             if(arr[mid]==0){
//                 swap(arr[mid],arr[low]);
//                 mid++;
//                 low++;

//             }

//             else if(arr[mid]==1){
//                 mid++;
//             }

//             else{
                
//                     swap(arr[mid],arr[high]);
//                     high--;

                
//                 }
          
//         }

    
//     }
// };






















//  printarr(arr,n);  
return  0;
}