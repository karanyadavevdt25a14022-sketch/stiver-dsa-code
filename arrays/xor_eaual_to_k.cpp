//Find the total number of subarrays having bitwise XOR of all elements equals to B.


//brute_force_Solution / better 
/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* A, int n1, int B) {
    
    int maxi = 0
    
    for(int i = 0 ; i  < n1  ; i++ ){
        
      int  xoor = 0;
      
      for(int j = i ; j < n1 ; j++ ){
          
          xoor =xoor^arr[j];
          
          if(xoor == B ){
              maxi = max(maxi , j - i + 1);
          }
      }
        
        
    }
    
    return maxi;
    
    
    
    
    
    
    
    
    
}


//optimal  solution : logic let a front x and find x by the help of xor (which is pushed every iteration ) and then find x and if it exists then you will increase the cnt by the accrance of that x in the sub array
// TC = O(n * log(n)) sc O(N);

int Solution::solve(vector<int> &arr, int B) {
    
    int n1 = arr.size();
     int cnt = 0;
    
    for(int i = 0 ; i  < n1  ; i++ ){
        
      long long  xoor = 0;
      
      for(int j = i ; j < n1 ; j++ ){
          
          xoor =xoor^arr[j];
          
          if(xoor == B ){
              cnt++;
          }
      }
        
        
    }
    
    return cnt;
}








