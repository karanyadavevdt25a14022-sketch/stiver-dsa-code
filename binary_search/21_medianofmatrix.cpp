class Solution {
  public:
  int black(vector<vector<int>> &arr ,int mid ){
      int count = 0;
      for(int i = 0 ; i < arr.size() ; i++){
          count +=upper_bound(arr[i].begin(),arr[i].end(), mid) - arr[i].begin();
      }
      return count;
  }
    int median(vector<vector<int>> &arr) {
    
       int r = arr.size();
       int c = arr[0].size();
       int high = INT_MIN ;
       int low = INT_MAX;
       
        for (int i = 0; i < r; i++) {
            low = min(low, arr[i][0]);
            high = max(high, arr[i][c - 1]);
        }
       
       
       while(low <= high ){
           int mid = (high - low) /2 + low;
           
           int lessthan = black(arr , mid );
           
           if(lessthan <= (r*c)/2 ){
           low = mid +1 ;
       }
       else{
           high = mid -1;
       }
       
    }
    return low;
    }
};
  