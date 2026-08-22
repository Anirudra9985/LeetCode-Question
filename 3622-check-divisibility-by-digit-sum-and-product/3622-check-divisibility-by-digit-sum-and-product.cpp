class Solution {
public:
    bool checkDivisibility(int n) {
        // int original = n;
        // int sum = 0;
        // int product = 1;

        // while (n > 0) {
        //     int digit = n % 10;

        //     sum += digit;
        //     product *= digit;

        //     n /= 10;
        // }

        // int divisor = sum + product;

        // return original % divisor == 0;

        int s=0,p=1;
        for(int x=n;x>0;x/=10){
             const int r = x%10;
             s+=r;
             p*=r;
        }
        return n%(s+p)==0;
    }
};