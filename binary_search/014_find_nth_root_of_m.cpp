//brute force solution TC (m*n) // or if use power function TC(m * log(n) )


// class Solution {
//   public:
//     int nthRoot(int n, int m) {
//         // Code here
//         if(m==0){return 0;}
//         int multiply = 1;
//         for(int i = 1 ; i <=m ; i++){
//            int ans = 1;
//             if(pow(i,n) == m){return i;}
//            else if(pow(i,n) > m){break;}
//         }
//         return -1;
//     }
// };

//little optimal solution O(n log m  )


class Solution {
  public:
    //return 0 , == m 
    // return 1 , if power < m 
    //return 2 , if  >  m ;
    int midn(int n , int m , int mid ){
   
     long long ans =1 ;
     for(int i = 1 ; i <=n ; i++){
        
        ans *=mid;
        if(ans > m ){return 2 ;}
     }   
         if (ans == m  ){return 0 ;}   
         else{
            return 1 ;
         } 

    }
    int nthRoot(int n, int m) {
        // Code here
        
        if(m==0){return 0;}
        //bs 
        int low =1 , high = m ; 
        while(low <= high ){
            int mid = low + (high - low )/2 ;
            
            if(midn(n,m,mid)==0){return mid ;}
            else if (midn(n,m,mid)==2){high = mid - 1 ;}
            else if (midn(n,m,mid)==1){low = mid + 1 ;}
           
        }
       return -1;
    }
};