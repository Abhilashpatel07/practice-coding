#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int knapSack(vector<int> &val, vector<int> &wt, int W){
  int n = val.size();
  vector<vector<int>> dp(n+1, vector<int>(W+1));
  for(int i=0; i<n; i++){
    dp[i][0] = 0;
  }
  for(int j=0; j<W; j++){
    dp[0][j] = 0;
  }
  // LOgical part 
  for(int i = 1; i<n+1; i++){
    for(int j =1; j<W+1; j++){
        if(wt[i-1]<= j){ // include condition
            dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
        }else{
            dp[i][j] = dp[i-1][j];
        }
    }
  }
  return dp[n][W];
}
int main(){
    vector<int> wt = {2,5,1,3,4};
    vector<int> val = {15, 14,10, 45,30};
    cout<<knapSack(val, wt, 7);
    return 0;
}