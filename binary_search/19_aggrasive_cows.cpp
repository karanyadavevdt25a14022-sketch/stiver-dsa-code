class Solution {
    
  public:
    int iscowpossible(vector<int> &arr,int dis ,int k){
        int lastcowat = arr[0] , count = 1 ;
        for(int i = 1 ; i < arr.size() ; i++ ){
            if(arr[i] - lastcowat >= dis){
                lastcowat =arr[i];
                count++;
            }

        }
        if(count >= k){
            return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin() , arr.end());
        int n = arr.size(), ans =0 ;
        int high= arr[n-1],low = 1;
        
        while(low<=high){
            int mid = (high - low )/2 + low ;
             if(iscowpossible(arr,mid,k) == true){
                 ans = mid ;
                 low = mid + 1 ;
             }
             else {high = mid - 1 ;}
        }
            
         return ans;   
        }
      
    
};