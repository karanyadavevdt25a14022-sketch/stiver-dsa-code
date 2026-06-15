#include <bits/stdc++.h>
using namespace std;
int main() {

//no. of digits 
int n;
cin>>n;

int count=0;
while(n>0){
    count++;
    n/=10;
 }

  cout<<count;




// factors of a number 

for(int i=1;i<=n;i++){
if(n%i==0){
    cout<<i<<" "<<n/i<<endl;
}

}


//check prime number:: 

for(int i=1;i<=n;i++){

    if(n%i==0){
        count++
    }
}


















}