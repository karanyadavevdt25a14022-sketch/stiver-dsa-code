#include <bits/stdc++.h>
using namespace std;

int main() {

vector<int> arr={7,1,5,3,6,4};
int n=arr.size();
int maxprofix=0;
int profit=0;
int minimum=arr[0];
for (int i = 1; i < n; i++)
{
    profit = arr[i]- minimum;
    maxprofix = max(maxprofix,profit);
    minimum = min(minimum,arr[i]);
}



cout<< maxprofix ; 

    return 0 ;
}