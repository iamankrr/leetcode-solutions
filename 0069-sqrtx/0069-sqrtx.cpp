class Solution {
public:
    int mySqrt(int x) {
        if(x < 2){
            return x;
        }

        long st = 0 , end = x/2;

        while(st <= end){
            long mid = st + (end - st)/2;

            long square = mid * mid;

            if(square == x){
                return (int) mid;
            }else if(square < x) {
                st = mid + 1; 
            }else {
                end = mid - 1;
            }
        }
        return (int)end;
    }
};