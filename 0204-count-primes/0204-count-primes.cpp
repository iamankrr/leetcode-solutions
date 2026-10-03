class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        
        int count = 0;

        if(n <= 2){
            return 0;
        }

        count = 1;

        for(int i = 3; i*i < n; i = i+2){
            if(isPrime[i]){

                for(int j = i*i; j < n; j = j+2*i){
                    isPrime[j] = false;
                }
            }
        }

        for(int i = 3; i < n; i = i+2){
            if(isPrime[i]){
                count++;
            }
        }

        return count;
    }
};