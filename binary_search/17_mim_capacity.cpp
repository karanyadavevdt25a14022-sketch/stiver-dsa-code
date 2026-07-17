// class Solution {
// public:
//     int maxarr(vector<int>& arr){
//        int maxi = INT_MIN ;
//        for(int i = 0 ; i < arr.size(); i++){
//         maxi = max(maxi,arr[i]);
//        }
//        return maxi;
//     }

//     long long sumofarr(vector<int>& arr){
//         long long sum = 0 ;
//         for(int i = 0 ; i< arr.size() ; i++){
//             sum +=arr[i];
//         }
//         return sum;
//     }

//     int ispossible(vector<int>& arr,int capacity ){
                  
//            int currentsum = 0 , count = 1;
//            for(int i = 0 ; i < arr.size() ; i++){
//                    if(currentsum + arr[i] <= capacity  ){
//                        currentsum += arr[i];
//                    }
//                    else{
//                     count++;
//                     currentsum = arr[i];
//                 }
//              }
//            return count;
//     }


//     int shipWithinDays(vector<int>& arr, int days) {
        

//         int low =maxarr(arr) , high = sumofarr(arr);
//           int ans ;
//          while(low <= high){
//             int mid = low + (high - low )/2;
//              int dayreq =ispossible(arr,mid);
//              if(dayreq <= days){
//                 ans = mid ; 
//                 high = mid - 1 ; 
//              }
//              else{
//                 low = mid +1  ; ;
//               }
//          }

//         return ans ;




//     }
// };