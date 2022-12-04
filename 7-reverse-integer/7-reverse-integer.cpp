class Solution {
public:
    int reverse(int x) {
       
        long rev =0 ;
         int n =x;
          if(x < 0) x = abs(x);
        
        while(x>0){
            
            rev=rev*10+x%10;
            x/=10;
        }
        
        if(rev>=pow(2,31)) return 0;
        
        if(n<0)  return -rev;
            return rev;
     
        
    }
};