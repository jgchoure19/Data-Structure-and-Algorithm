class Solution {
public:
    int fib(int n) {
        
       /* int fb[40];
        
        fb[0] =0 ;
        fb[1] =1;
        
        for( int i= 2 ; i<=n ; i++){
            
            fb[i] = fb[i-2]+fb[i-1];
        }
        return fb[n];*/
        
        if(n ==0 || n==1)  return n ;
        
        return fib(n-1)+fib(n-2);
    }
};