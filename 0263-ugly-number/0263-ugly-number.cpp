class Solution {
public:
    bool isUgly(int n) {
        
        while(n>1){
            if(n%2==0) n/=2;
            else if(n%3==0) n/=3;
            else if (n%5==0) n/=5;
                
            else return false;
        }
        
        if(n==1) return true;
        
        return false;
        
//         if(n<=0) return false;
//         while(1)
//         {    if(n==1) return true;
//             if(n%2==0) while(n%2==0){n/=2;}
//             else if(n%3==0) while(n%3==0) n/=3;
//             else if(n%5==0) while(n%5==0) n/=5;
//             else return false;
        
//         }
       
        
        
    }
};