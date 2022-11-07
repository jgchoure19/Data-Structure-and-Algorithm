class Solution {
public:
    int maximum69Number (int num) {
        
        int rightcnt=-1;
        int inital =0 ;
        int temp = num ;
        
        while( temp>0){
            
            int number= temp%10;
            if(number==6) rightcnt= inital ;
            
            inital++;
            temp/=10;
            
        }
        
        if(rightcnt==-1)  return num;    //given 9669     we didt add 9669+300=9969
        
        int ans =num+(3* pow(10 , rightcnt));
        return ans;
       
    }
};