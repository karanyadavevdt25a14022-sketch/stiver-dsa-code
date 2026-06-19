#include <iostream>
#include <map>
#include<vector>
using namespace std;
int main() {

//to find the largest sub array sub == k
 vector<int> arr={1,0,0,0,0,3};
int n=arr.size();
int k=1,maxlen=0;
map<int,int>mp;
//brute 
// for (int  i = 0; i < n; i++)
// {   int  sum =0;
//     for (int j = i; j < n; j++)
//     {
//         sum +=arr[j];
//         if(sum==k){
//             maxlen=max(maxlen,j-i+1); 
//         }
//     }
    
// }



//better
// int sum=0;
// for (int i = 0; i < n; i++)
// {
//     sum +=arr[i];
//     if (sum==k)
//     {
//         maxlen=i+1;
//     }
//     int rem=sum-k;
//     if(mp.find(rem)!=mp.end())
//     {
//         int len=i-mp[rem];
//         maxlen=max(len,maxlen);
//     }
//     else if(mp.find(sum)==mp.end())
//     {
//         mp[sum]=i;
//     }
// }

//optimal_solution

int left=0;
int right=0;
int len=0;
int sum =0;
while(left<=right && right<n)
{  //when sum > k 
    sum +=arr[right];
    
  while (left<=right && sum>k)
  {
    sum -=arr[left++];
  }
  if(sum == k){maxlen= max(maxlen,right-left+1);}
  right++;
}

cout<<maxlen<<" ";

}