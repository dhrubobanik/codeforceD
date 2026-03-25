#include<bits/stdc++.h>
using namespace std;
int main(){
               int n,group=0;
               cin>>n;
               string first,second;
               while(n--){
                              cin>>second;
                              if(first!=second){
                                             group++;
                                             first=second;
                              }
               }
               cout<<group<<endl;
}