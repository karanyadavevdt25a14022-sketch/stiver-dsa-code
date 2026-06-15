#include <bits/stdc++.h>
using namespace std;
int main() {
//hasing using array finding occurance of the numbers

int arr[7]={1,2,3,1,3,2,6};
int n=sizeof(arr)/sizeof(int);
int hash[13]={0};
for(int i=0 ;i<n;i++){
    hash[arr[i]]++;
}
for (int i = 1; i<n; i++)
{
    cout<<hash[i]<<" ";
}


return 0;

}
