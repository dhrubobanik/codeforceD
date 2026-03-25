#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
               bool result =false;
               for(int i=2;i<=sqrt(n);i++){
                              if(n%i==0) result=true;
               }
               if(!result) return true;
               else return false;

}
int nextPrime(int n){
               int count=0,next=n;
              while(true){
               next++;
               if(prime(next)){
                              count=next-n;
                               break;
                   }
              }   
              return count;
}
int main(){
               int r,c;
               cin>>r>>c;
               vector<vector<int>> M(r,vector<int>(c));
               vector<int> result;
               for(int i=1;i<=r;i++){
                              for(int j=1;j<=c;j++){
                                             cin>>M[i][j];
                              }
               }
               bool f=false;
               for(int i=0;i<r;i++){
                              int sum=0;
                              for(int j=0;j<c;j++){
                                             if(!prime(M[i][j])){
                                                    sum+=(nextPrime(M[i][j]));
                                                    f=true;
                                             }
                              }
                              result.push_back(sum);
               }
               for(int j=0;j<c;j++){
                              int sum=0;
                              for(int i=0;i<r;i++){
                                             if(!prime(M[i][j])){
                                                            sum+=(nextPrime(M[i][j]));
                                                            f=true;
                                             }

                                             result.push_back(sum);
                              }
               }
               if(!f) cout<<"0"<<endl;
               else{
                              int a=*min_element(result.begin(),result.end());
                              cout<<a<<endl;
               }


}