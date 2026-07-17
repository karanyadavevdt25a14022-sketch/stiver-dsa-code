// class Solution {
// public:
//     int ispossible(vector<int>& arr,int mid ,int threshold){
//          long long  sum = 0;
//        for(int i = 0 ; i< arr.size(); i++){
//              sum += ceil(((double)arr[i]/mid));
//          }
//          if(sum <= threshold){
//             return 1;
//          }
//          return 0;
//     }
//     int maxiarr(vector<int>& arr){
//         int maxi= INT_MIN;
//         for(int i = 0 ; i < arr.size() ; i++){
//             maxi= max(maxi,arr[i]);
//         }
//         return maxi;
//     }
//     int smallestDivisor(vector<int>& arr, int threshold) {
        
//         int n = arr.size();

//         int low = 1 , high = maxiarr(arr);
//         int ans = INT_MIN;
//         while(low <= high){
//             int mid = low + (high - low )/2;
//             if(ispossible(arr,mid,threshold)){
//                 ans = mid ;
//                 high = mid - 1 ;
//             }
//             else {
//                 low = mid + 1 ;
//             }
//         }
       
        
          
//         return ans ; 
//     }
// };