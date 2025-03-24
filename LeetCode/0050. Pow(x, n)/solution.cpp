class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n % 2 == 0) return 1.0;
        if(x == -1 && n % 2 != 0) return -1.0;

        long binExp = n;
        double ans = 1;

        if(n < 0){
            x = 1/x;
            binExp = -binExp;
        }

        while(binExp > 0){
            if(binExp % 2 == 1)
                ans *= x;
            x *= x;
            binExp /= 2;
        }
        return ans;
    }
};