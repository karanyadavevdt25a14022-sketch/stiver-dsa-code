// // //brute force solution 




// // class Solution {
// // public:
// //     int ispossible(vector<int>& arr,int day, int m, int k){

// //      int count = 0 , bouq = 0; 

// //      for(int  i = 0 ; i < arr.size() ; i++){
// //         if(arr[i] <=day){
// //             count++;
// //         }
// //         else{
// //             bouq += (count/k);
// //             count = 0;
// //         }
// //      }
// //        bouq += (count/k);

// //        if(bouq >= m){return 1;}

// //        return 0;
      
// //     }
// //     int minarr(vector<int>& arr){
// //         int maxi = INT_MAX;
// //         for(int i = 0 ;i< arr.size() ; i++ ){
// //             maxi = min(arr[i],maxi);
// //         }
// //         return maxi;
// //     }
// //     int maxarr(vector<int>& arr){
// //         int maxi = INT_MIN;
// //        for(int i = 0 ;i< arr.size() ; i++ ){
// //             maxi = max(arr[i],maxi);
// //         }
// //         return maxi;
// //     }


// //     int minDays(vector<int>& arr, int m, int k) {
// //         if(arr.size() < m * k ){return  -1 ;}
// //         for(int i =minarr(arr) ; i <=maxarr(arr) ; i++){
// //             if(ispossible(arr,i,m,k) == 1 ){
// //                 return i ;
// //             }
// //         }
// //         return -1 ;
// //     }  
// // };





// //optimal binary search way ;;




// class Solution {
// public:
//     int ispossible(vector<int>& arr,int day, int m, int k){

//      int count = 0 , bouq = 0; 

//      for(int  i = 0 ; i < arr.size() ; i++){
//         if(arr[i] <=day){
//             count++;
//         }
//         else{
//             bouq += (count/k);
//             count = 0;
//         }
//      }
//        bouq += (count/k);

//        if(bouq >= m){return 1;}

//        return 0;
      
//     }
//     int minarr(vector<int>& arr){
//         int maxi = INT_MAX;
//         for(int i = 0 ;i< arr.size() ; i++ ){
//             maxi = min(arr[i],maxi);
//         }
//         return maxi;
//     }
//     int maxarr(vector<int>& arr){
//         int maxi = INT_MIN;
//        for(int i = 0 ;i< arr.size() ; i++ ){
//             maxi = max(arr[i],maxi);
//         }
//         return maxi;
//     }

//     //binary search 


//     int minDays(vector<int>& arr, int m, int k) {
//         long long prod = (long long) m * k;
//           if(arr.size() < prod ){return  -1 ;}

//         int low = minarr(arr) ,high = maxarr(arr);
//           int ans = -1 ;
//         while(low <=high ){
            
//             long long  mid = low + (high - low )/2;
//             if(ispossible(arr,mid,m,k)){
//                 ans = mid;
//                 high = mid -1 ;
//             }
//             else {
//                 low = mid + 1 ;
//             }
//         }
//          return ans ;
//         }
       
     
// };