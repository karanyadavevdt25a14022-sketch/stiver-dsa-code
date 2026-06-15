#include <bits/stdc++.h>
using namespace std;
// sum from n to 1
int sum(int n ){
    if(n<1){
        return 0;
    }
    return n+sum(n-1);
}

//reverse an array 

void revarr(int arr[], int l,int r){

    if(l==r){
        return;
    }
    else{
        swap(arr[l],arr[r]);
       return revarr(arr,l+1,r-1);
    }
}

//check palindrom 

int palindrom(string s,int i){
    int n=s.size();
    if(i>=s.size()/2) return true;
    if(s[i]!=s[n-1-i]) return false;
    else
    return palindrom(s,i+1);
}

int main(){
     cout<< sum(5)<<" ";
     return 0;
    
}