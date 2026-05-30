class Solution {
public:
    int reverse(int x) {
        long long reverseSum=0;
        while(x!=0){
            if (reverseSum > INT_MAX / 10 || reverseSum < INT_MIN / 10)
                return 0;
            reverseSum= (reverseSum*10)+(x%10);
            x/=10;
        }
        return reverseSum;
    }
};