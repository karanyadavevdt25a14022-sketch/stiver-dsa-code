#include <bits/stdc++.h>
using namespace std;

//print an row optimal 

  int main(){
  int n = 5,ans=1;
  cout<<ans <<" ";
for (int i = 1; i < n; i++)
{
       ans = ans * (n-i) ;
       ans = ans/i;
    cout<<ans <<" ";
}


}

// print pascals triangle

class Solution {
public:
    
    // int fun_ncr(int n , int r){
    //    int ans=1;
    //     for(int i =1 ; i<=r ;i++){
    //         ans = ans*(n-i+1);
    //         ans = ans/(i);
    //     }
    //     return ans;
    // }
    vector<int> genrow(int n ){
        vector<int>r;
        int ans=1;
        r.push_back(ans);
        for (int i = 1; i < n; i++)
         {
          ans = ans * (n-i+1) ;
          ans = ans/i;
           r.push_back(ans);
        }
        return r;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i = 0 ; i < n ; i++){
            ans.push_back(genrow(i));
        }
        return ans;
    }
};