#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

//brute 
int nz=0;
int temp[n];

for(int i=0;i<n;i++){
if(arr[i]!=0){
  
    temp[nz]=arr[i];
      nz++;
}
}
for(int i=0;i<nz;i++){
    arr[i]=temp[i];
}
for(int i=nz;i<n;i++){
    arr[i]=0;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}