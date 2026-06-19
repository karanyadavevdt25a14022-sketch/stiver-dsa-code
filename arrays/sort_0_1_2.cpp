#include <bits/stdc++.h>
using namespace std;
void printarr(vector<int>& nums,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}

//brute force solution 
//use Merg Sort tc:O(NlogN) , Space complexity = O(1);

//better solution the mannual filling 
//1) count the number of 0,1,2 and then manually run 3 loops till count0 , 1 then 2 and fill the space ;
int main() {
vector<int> arr={1,2,0,0,0,2,2,2,1,1,1,2};
int n=arr.size();

 int c1=0,c2=0,c0=0,ind=0;

 for (int i = 0; i < n; i++)
 {
    if(arr[i]==0){c0++;}
    else if(arr[i]==1){c1++;}
    else{ c2++;}
 }
 for(int i=0;i<c0;i++){arr[ind++]=0;}
 for(int i=0;i<c1;i++){arr[ind++]=1;}  //c1+c2+c3 == n so whole three time complexity= O(N);
 for(int i=0;i<c2;i++){arr[ind++]=2;}
 
 printarr(arr,n);



  
return  0;
}