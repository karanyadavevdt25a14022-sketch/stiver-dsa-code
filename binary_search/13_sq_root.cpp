//brute is linear search way 
//tc = O(N)


//optimal way is binary search way TC (Log n )







class Solution {
public:
    int floorSqrt(int n)  {
      int low = 1 , ans =0 ;
      int high = n  ;
      while(low <= high){
        int mid = (low + high)/2;
         if ( mid * mid <= n){
            ans = mid ;
            low = mid + 1 ;}
        else if (mid * mid >=  n){high = mid -1 ;}
       
      }
      return ans;
    }
};