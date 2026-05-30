class Solution {
public:
    bool isPalindrome(int x) { 
        int y=x;
        if(y<0){
            return false;
        }
        long long revSum=0;
        while(y!=0){
            if (revSum > INT_MAX / 10 || revSum < INT_MIN / 10)
                return 0;
            revSum=(revSum*10)+(y%10);
            y/=10;
        }
        return x==revSum;
    }
};