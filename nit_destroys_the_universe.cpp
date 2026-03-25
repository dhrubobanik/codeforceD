#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              vector<long long> v(n);
                              for(long long i=0;i<n;i++)cin>>v[i];
                              bool count_of_zero=all_of(v.begin(),v.end(),[](long long x){return x==0;});
                              
                              long long left=0,right=n-1;
                               while( left<n &&v[left]==0)left++;
                               while(right>=0 && v[right]==0)right--;
                               bool found_zero=false;
                               for(long long i=left;i<=right;i++){
                                             if(v[i]==0)found_zero=true;

                               }
                               if(count_of_zero)cout<<"0"<<endl;
                               else if(!found_zero)cout<<"1"<<endl;
                               else cout<<"2"<<endl;
               }
}