class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n == 1) return 0;
        vector<int> isPrime(n + 1, true);
        isPrime[0] = false, isPrime[1] = false;
        int cnt = 0;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        for(int i=0;i<isPrime.size();i++){
            if(isPrime[i]){
                cnt++;
            }
        }
        return cnt;
    }

};