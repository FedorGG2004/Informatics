#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int w[n][n];
    int count1=0;
    int count2=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>w[i][j];
        }
    }
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++){
          if(w[i][j]!=w[j][i]){
              count1+=w[i][j];
          }
          if(w[i][j]==w[j][i]){
              count2+=w[i][j];
          }
       }
    }
    cout<<count1+count2/2;

    return 0;
}
