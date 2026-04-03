#include<bits/stdc++.h>
using namespace std;
int main(){

               int n,k;
               cin>>n>>k;
               int c=0;
               for(int i=1;i<=k;i++){
                              if(n%10==0){
                                             c=n/10;
                                             n=c;
                              }else{
                                             c=n-1;
                                             n=c;
                              }
               }
               cout<<n<<endl;
}
