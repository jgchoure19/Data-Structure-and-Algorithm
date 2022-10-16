class Solution {
public:
    bool isPalindrome(int x) {
        long long  int t=x;
        long long int rev=0;
        
        if(t<0) return false;
        
        //reverse
        while(t!=0){
            rev = (rev*10) + t%10;
            t=t/10;
        }
        
        
        if(rev==x)
        {   return true;}
        else
        {     return false;}
        
    }
};
  
        
    