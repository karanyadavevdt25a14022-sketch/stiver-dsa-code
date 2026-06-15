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
if(n%i==0 ){
    cout<<i<<" "<<n/i<<endl;
}

}


//check prime number: 

for(int i=1;i<=n;i++){

    if(n%i==0 ){
        count++;
        if((n/i)!=i){
            count++;
        }
    }
    if(count == 2){
        cout<<"prime "<<endl;
    }
    else{
        cout<<"not prime "<<endl;
    }
}


//GCD or HCF
//brute

int gcd=1,n1,n2;
cin>>n1>>n2;
for (int i = 1; i <=min(n1,n2); i++)
{
    if(n1%i==0 && n2%i==0 ){
        gcd=i;
    }
}

cout<<gcd;

//optimized code 

int gcd1=1;
for (int  i = min(n1,n2); i>=1; i--)
{
    if(n1%i==0 && n2%i==0){
        gcd=i;
    }
}
cout<<gcd<<" ";

}