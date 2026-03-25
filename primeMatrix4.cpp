#include<bits/stdc++.h>
using namespace std;
const int N=100005;
vector<bool> isPrime(N+1,true);
vector<int> primeDistance(N+1,0);
void sieve(){
               isPrime[0]=isPrime[1]=false;
               for(int i=2;i*i<=N;++i){
                              if(isPrime[i]){
                                             for(int j=i*i;j<=N;j+=i){
                                                            isPrime[j]=false;
                                             }
                              }
               }
}
void findPrimeDistance(){
               int latestPrime=0;
               for(int i=N;i>=0;--i){
                              if(isPrime[i]){
                                             latestPrime=i;
                              }
                              primeDistance[i]=latestPrime-i;
               }
}
int main(){
               sieve();
               findPrimeDistance();
               int n,m;
               cin>>n>>m;
               vector<vector<int>> mat(n,vector<int>(m));
               for(int i=0;i<n;i++){
                              for(int j=0;j<m;j++){
                                             cin>>mat[i][j];
                              }
               }
               int min_moves=INT_MAX;
               for(int i=0;i<n;i++){
                              int row_sum=0;
                              for(int j=0;j<m;j++){
                                             row_sum+=primeDistance[mat[i][j]];
                              }
                              min_moves=min(min_moves,row_sum);
               }

               for(int j=0;j<m;j++){
                              int col_sum=0;
                              for(int i=0;i<n;i++){
                                             col_sum+=primeDistance[mat[i][j]];
                              }
                              min_moves=min(min_moves,col_sum);
               }
               cout<< min_moves <<endl;
               return 0;
}