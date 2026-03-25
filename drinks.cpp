#include<bits/stdc++.h>
using namespace std;
int main(){
               long double n;
               cin>>n;
              long double sum=0;
              long double x;
               for(int i=1;i<=n;i++){
                              cin>>x;
                              sum+=(x/100);
               }
               cout<<(sum/n)*100<<endl;
}