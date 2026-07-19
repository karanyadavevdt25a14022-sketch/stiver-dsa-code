// class Solution {
//   public:
//     int noofstudent(vector <int> & arr,int pages){
        
//         int currentpages =arr[0] ,count =1 ;
//         for(int i = 1 ; i < arr.size() ; i++){
            
//             if( currentpages + arr[i] <= pages ){
//                 currentpages +=arr[i];
//             }
//             else{
//                 currentpages = arr[i];
//                 count++;
//             }
//         }
//         return count;
//     }
//     long long maxarr(vector<int> &arr){
//         long long mini = INT_MIN;
//         for(int  i = 0 ; i < arr.size() ; i++){
//            mini = max(arr[i],mini);  
//         }
        
//         return mini;
//     }
    
    
//     long long sumarr(vector<int> &arr){
//         long long sum  = 0 ;
        
//         for(int i = 0 ;i  < arr.size() ; i ++){
//             sum +=arr[i];
//         }
//         return sum;
//     }
    
    
//     int findPages(vector<int> &arr, int k) {
//         // code here
        
//         int n = arr.size() , ans = -1;
        
//         if(k>n){return -1 ;}
//         int low = maxarr(arr) ;
//         int high = sumarr(arr);
             
//         while(low <= high){
//             int mid = (high - low )/2 + low ;
              
//              if(noofstudent(arr,mid) > k ){
                 
//                  low = mid + 1; 
//              }
//              else{
//               ans = mid ;
//              high = mid - 1 ;}
//         }
        
        
//         return  ans ;
    
//     }
// };