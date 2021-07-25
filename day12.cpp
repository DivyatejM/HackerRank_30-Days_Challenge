#include<iostream>
using namespace std;
int main() {
  int a[6][6]={{1,1,1,0,0,0},
               {0,1,0,0,0,0},
               {1,1,1,0,0,0},
               {0,0,2,4,4,0},
               {0,0,0,2,0,0},
               {0,0,1,2,4,0}};
  // for(int i=0;i<6;i++) {
  //   for(int j=0;j<6;j++)
  //     cin>>a[i][j];
  // }
  int maxSum=0;
  int currSum=0;
  for(int i=1;i<5;i++) {
    for(int j=1;j<5;j++) {
      currSum = ( a[i][j] +a[i-1][j] + a[i-1][j-1] +a[i-1][j+1] +a[i+1][j] + a[i+1][j-1] + a[i+1][j+1]);
            if(currSum>maxSum)
                maxSum = currSum;
        }
    }
    cout<<maxSum; 
    return 0;

}