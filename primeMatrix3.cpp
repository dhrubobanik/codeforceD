#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    // max value up to 100000, add buffer to find next prime
    const int MAXV = 100000 + 5000;
    vector<bool> isPrime(MAXV + 1, true);
    isPrime[0] = isPrime[1] = false;

    // Sieve primes
    for(int i = 2; i  <= MAXV; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= MAXV; j += i){
                isPrime[j] = false;
            }
        }
    }

    // Precompute moves: dist to next prime
    vector<int> distToPrime(MAXV + 1, 0);
    for(int x = 0; x <= MAXV; x++){
        if(isPrime[x]){
            distToPrime[x] = 0;
        } else {
            int p = x;
            while(p <= MAXV && !isPrime[p]) p++;
            distToPrime[x] = (p <= MAXV ? p - x : 0);
        }
    }

    vector<vector<int>> A(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }

    // Compute row sums + col sums
    vector<long long> rowSum(n, 0), colSum(m, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int moves = distToPrime[A[i][j]];
            rowSum[i] += moves;
            colSum[j] += moves;
        }
    }

    long long ans = LLONG_MAX;
    for(int i = 0; i < n; i++){
        ans = min(ans, rowSum[i]);
    }
    for(int j = 0; j < m; j++){
        ans = min(ans, colSum[j]);
    }

    cout << ans << "\n";
    return 0;
}
