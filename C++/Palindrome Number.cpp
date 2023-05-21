class Solution {
public:
    bool isPalindrome(int x) {

        long long rev=0;
        int temp=x;
        int b=0;

        while(x>0){
            b = x%10;
            rev = (rev*10) + b;
            x = x/10;
        }

        if(rev==temp)
            return true;
        return false;
        
    }
};
