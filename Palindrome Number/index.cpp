class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        
        if(x < 0 || x%10==0){
            return false;
        }
        
        
        
        int rev {0};
        
        int rem {0};
        
        while(x>rev){
            rem = x%10;
            
            rev = rev*10+rem;
            
            x = x/10;
        }
        
        if(x == rev || x == rev/10){
            return true;
        }else{
            return false;
        }
    }
};
