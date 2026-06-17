#include <bits/stdc++.h>
using namespace std;
// arr[]={1,1,1,1,0,0,0,1,1,1,2,2,1,1,1}
int main(){
    int arr[]={1,1,1,0,0,0,1,1,1,2,2,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    int cons=0,maxi=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            cons++;
            maxi=max(cons,maxi);
        }
        else if(arr[i]!=1)
        {
          
          cons=0;
        }
    }
    cout<<maxi;
    
}