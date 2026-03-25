#include<bits/stdc++.h>
using namespace std;
const vector<vector<int>> score={
               {1,1,1,1,1,1,1,1,1,1},
               {1,2,2,2,2,2,2,2,2,1},
               {1,2,3,3,3,3,3,3,2,1},
               {1,2,3,4,4,4,4,3,2,1},
               {1,2,3,4,5,5,4,3,2,1},
               {1,2,3,4,5,5,4,3,2,1},
               {1,2,3,4,4,4,4,3,2,1},
               {1,2,3,3,3,3,3,3,2,1}, 
               {1,2,2,2,2,2,2,2,2,1},
               {1,1,1,1,1,1,1,1,1,1},
};
int main(){
               int t;cin>>t;
               while(t--){
                              vector<vector<int>> matrix(10,vector<int>(10,0));
                              for(int i=0;i<10;i++){
                                             string line;
                                             cin>>line;
                                             for(int j=0;j<10;j++){
                                                            matrix[i][j]=line[j];
                                             }
                              }
                              int sum_of_count=0;
                              for(int  i=0;i<10;i++){
                                             for(int j=0;j<10;j++){
                                                            if(matrix[i][j]=='X'){
                                                                           sum_of_count+=score[i][j];
                                                            }
                                             }
                              }
                              cout<<sum_of_count<<endl;
               }


}