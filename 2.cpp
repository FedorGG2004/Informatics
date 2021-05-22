#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int w[n][n];
    int count=0;
    bool flag=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>w[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        count=0;
      for (int j=0;j<n;j++){
           if(w[i][j]==0)
               count++;
      }
      if(count==n){
          flag=1;
         cout<<i+1<<" ";
      }
    }
    if(flag==0)
        cout<<0;
    return 0;
}
