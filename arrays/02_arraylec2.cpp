#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }
    
}


//left roataion by one place
void left_rotaion(int arr[],int n){
int temp=arr[0];
for (int i = 1; i<n; i++)
{
    arr[i-1]=arr[i];
}

  arr[n-1]=temp;
} 

// 1) left rotation by k places 
void k_left_rotation(int arr[],int n,int k)
{
k=k%n;
int temp[n];  //copy in temp
for (int i = 0; i<k ; i++)
{
    temp[i]=arr[i];
}
for(int i=k;i<n;i++)//shift k places 
{
    arr[i-k]=arr[i];
}
//givimg back temp values 
for(int i=n-k;i<n;i++){
    arr[i]=temp[i-(n-k)];
}

}


// 2) left rotation by k places with constant space complexity  , Time complexity = O(2n)

// reverse the first part then other part then reverse whole array
void reverse(int arr[] , int start,int end){
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
} 


void krot(int arr[],int n, int k){

k=k%n;
reverse(arr,0,k-1);
reverse(arr,k,n-1);
reverse(arr,0,n-1);

}
// MOve All The Zeroes To the end  
// 1) Brute force
void zerotoend(int arr[],int n){
    vector<int>v;
    //storing in vector with tc: n 
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){v.push_back(arr[i]);}
    }
    // puting the starting tc: sizeof vector
    for (int i=0;i<v.size();i++)
    {
        arr[i]=v[i];
    }
    // now assinging 0 from v.size to n 
    for(int i=v.size() ;i<n;i++){
        arr[i]=0;
    }
    

}

//2) optimal solution two pointer way 
// j will always at the zero

void zero_to_endoptimal(int arr[],int n)
{
    int j;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
}
for (int i = j+1; i < n; i++)
{
   if(arr[i]!=0){
    
    
    swap(arr[j],arr[i]);
    j++;
}

}

}


//union of two sorted array with no duplicates 

void uni(int arr1[],int n1,int arr2[],int n2 ){

set<int>st;
for (int i = 0; i < n1; i++)
{
    st.insert(arr1[i]);
}
for (int i = 0; i < n2; i++)
{
    st.insert(arr2[i]);
}
int n=st.size();

int unio[n], j=0;
for(auto x:st)
{
    
    unio[j]=x;
    j++;
}
printarr(unio,j);


}

//2) union by 2 pointer way

void union_2pointerway(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    vector<int> v;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            if(v.empty() || v.back() != arr1[i])
                v.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            if(v.empty() || v.back() != arr2[j])
                v.push_back(arr2[j]);
            j++;
        }
        else
        {
            if(v.empty() || v.back() != arr1[i])
                v.push_back(arr1[i]);

            i++;
            
        }
    }

    while(i < n1)
    {
        if(v.empty() || v.back() != arr1[i])
            v.push_back(arr1[i]);
        i++;
    }

    while(j < n2)
    {
        if(v.empty() || v.back() != arr2[j])
            v.push_back(arr2[j]);
        j++;
    }

    for(int x : v)
        cout << x << " ";
}


//inetersection of two arrays //time complexity: O(n1.n2) ,space complexity : O(n2)
//1) brute force method 

void intersection_(int arr1[],int n1,int arr2[],int n2){

    int vis[n2]={0};
    vector<int>v;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j<n2; j++)
        {
            if(arr1[i]==arr2[j] && vis[j]==0){
              v.push_back(arr2[j]);
              vis[j]=1;
            }
        }
        
    }
    for (auto x : v)
    {
        cout<<x<<" ";
    }
    

}

//2) optimal way 

void intersection_2(int arr1[] ,int n1, int arr2[] , int n2)
{

    vector<int>ans;
    int i=0,j=0;

    while (i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            ans.push_back(arr2[i]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    for(auto x : ans ){cout<<x<<" "; }


}


int main() {
    int arr[7]={10,0,100,56,0,0,3};
    int n=sizeof(arr)/sizeof(int);
    // left_rotaion(arr,n);
    // k_left_rotation(arr,n,10);
    // krot(arr,n,10);
    // zerotoend(arr,n);
    // zero_to_endoptimal(arr,n);
    int arr1[5]={1,1,2,2,3};
    int arr2[6]={1,1,2,5,8,9};
    // uni( arr1,5,arr2,6 );
    // union_2pointerway( arr1,5,arr2,6 );
    // intersection_( arr1,5,arr2,6 );
    intersection_2(arr1,5,arr2,6);
    // printarr(arr,n);cout<<endl;
    return 0;

}