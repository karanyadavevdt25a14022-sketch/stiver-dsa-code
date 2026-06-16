#include <bits/stdc++.h>
using namespace std;

//largest eliment 
//bruete : sort the array last one is the largest one 
//optimal
int largest(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

//second largest  : optimal time complexity O(n)

int seclargest(int arr[],int n){
    int seclargest=INT_MIN;
    int lar=largest(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]>seclargest && arr[i]!=lar){
            seclargest=arr[i];
        }
    }
    return seclargest;
}

//smallest and second smallest

int secsmallest(int arr[],int n){

    int secsmallest=INT_MAX;
    int smallest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<smallest)
        {

            secsmallest=smallest;
            smallest=arr[i];
        
        }
        else{
            if(arr[i]<secsmallest && arr[i]!=smallest){
                secsmallest=arr[i];
            }
        }
    }
    return secsmallest;
   
}
//sorted or not array : TC = O(n)

int issorted(int arr[] ,int n){
    for (int i = 1; i < n; i++)
    {
       if(arr[i]<arr[i-1]){return false;}
    }
    return true;
}

//remove duplicates - TC = nlogn of set + iteration O(n), SC = O(n) due to set
// int remove_duplicates(int arr[],int n){
//     set<int>st;
//       for (int i = 0; i < n; i++)
//       {
//         st.insert(arr[i]);
//       }
//       int index=0;
//       for(auto x:st){
//         arr[index]=x;
//         index++;
    
//     }
//     return index;
// }

//remove duplicates Two pOinter Approch
int remove_dulplicate_twopoint(int arr[],int n){
    int i=0;
   for(int j = 1; j < n-1; j++)
   {
         if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
         }
   }
   return (i+1);
}

int main() {
int arr[5]={40,10,30,80,10};
int n=sizeof(arr)/sizeof(int);
cout<<"largest "<<largest(arr,n)<<endl;
cout<<"seclargest "<<seclargest(arr,n)<<endl;
cout<<"secsmallest "<<secsmallest(arr,n)<<endl;
cout<<"is_sorted "<<issorted(arr,n)<<endl;
cout<<remove_dulplicate_twopoint(arr,n)<<endl;
return 0;

}