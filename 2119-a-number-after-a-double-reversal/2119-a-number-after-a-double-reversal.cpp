class Solution {
public:
    
    int rev(int num){
        
        int rev1=0;
        
        while(num>0){
            
            rev1=rev1*10 + num%10;
            num/=10;  
        }
        return rev1;
    }
    
    bool isSameAfterReversals(int num) {
        
        int a =rev(num);
        int b=rev(a);
       // cout<<a<<b;
        return num==b;
          
    }
};