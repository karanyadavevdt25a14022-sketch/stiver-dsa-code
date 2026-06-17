#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,8,3,3,4,4};
    int x=0;
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        x=x^arr[i];
    }
    cout<<x<<endl;

   
}