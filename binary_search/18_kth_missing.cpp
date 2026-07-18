// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         vector<int>missed;
//         set<int>st;

//         for(int i = 0 ; i < arr.size() ; i++){
//             st.insert(arr[i]);
//         }
//         for(int i = 1 ; i <=1000 + arr.size() ; i++ ){
//             if(st.find(i) == st.end()){
//                missed.push_back(i);
//             }
//         }

//         if(k<=missed.size()){
//             return missed[k-1];
//         }
//         return -1;

//     }
// };

//TC = O(N);

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
        
//        for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i]<=k){k++;}
//         else {
//         break;
//        }
//        }
       
//      return k;
//     }
// };

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n= arr.size();
        
//         if(arr[0] > k){return k ;}
//         int low = 0 , high = n-1 ;

//         while(low<=high){
//             int mid = (high - low )/2 + low ;
//             int missing = arr[mid] - (mid + 1);
//             if(missing < k) {low = mid +1;}
//             else{high = mid - 1;}
//         }

       
//        return high + 1 + k;
//     }
// };