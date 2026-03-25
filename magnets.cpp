#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               vector<int> a;
               int count=1;

               while(n--){
                              int x;
                              cin>>x;
                              a.push_back(x);
               }
               for(int i=0;i<a.size()-1;i++){
                              if(a[i]!=a[i+1]) count++;
               }
               cout<<count<<endl;
}