class Solution {
public:
    double myPow(double x, int n) {

        double result = 1.0;

        if (n < 0) {
            x = 1.0 / x;
            n = -n;
        }

        for (int i = 0; i < n; ++i) {
            result *= x;
        }

        return result;
    }
};