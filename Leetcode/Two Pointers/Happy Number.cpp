class Solution {
public:
    bool isHappy(int n) {
        int copy = n;
    int sum = 0;
    while(sum != 1){
        sum = 0;
        while(copy > 9){
            sum += copy%10 * copy%10;
            copy /= 10;
        }
        copy = sum;
    }
    return (sum == 1);

    }
};