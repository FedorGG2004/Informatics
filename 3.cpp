#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int w[n][n];
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>w[i][j];
        }
    }
    int k;
    int tmp=0;
    cin>>k;
    cout<<1<<" ";
    for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){
           if(j!=i){
           for(int l=0; l<n; l++){
               if(w[i][j]<=w[i][l]){
                   tmp++;
               }
               if(tmp==n-1){
                   count+=w[i][j];
                    cout<<j+1<<" ";
                    k--;
               }
               tmp=0;
            }

         }
      }
      if(k==0)
          break;
   }
    cout<<count;

    return 0;
}
