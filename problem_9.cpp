class Solution {
public:
    bool isPalindrome(int x) {
        int r, temp = x;
        long sum=0;
        if(x<0)
            return false;

        while(x>0){
            r=x%10;
            sum=(sum*10)+r;
            x/=10;
        }
        if(sum == temp)
            return true;
        else
            return false;
    }
};
