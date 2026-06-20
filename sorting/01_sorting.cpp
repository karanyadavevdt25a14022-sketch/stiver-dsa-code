#include <bits/stdc++.h>
using namespace std;

//selection sort time complexity O(n^2)
void selection(int arr[],int n){


    for (int i = 0; i<n; i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest]){
              smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
    
}
//bubble sort //time complexity O(n^2)
void bubble(int arr[],int n){
for (int i = 0; i < n-1; i++)
{
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
}
//insertion sort
void insertion_sort(int arr[] ,int n){

   for (int i = 0; i<=n-1; i++)
   {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
           int temp=arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=temp;
           j--;
        }
        
   }
}
//merg sort time complexity : nlogn

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

// quick sort time complexity O(n^2)

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);

        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main() {
int arr[6]={60,50,20,10,90,76};
// selection(arr,6);
// bubble(arr,6);
// insertion_sort(arr,6);

for (int i =0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}

//weak topic quick sort  and insertion little bit;