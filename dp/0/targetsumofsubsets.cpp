#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool knapSack(vector<int> &val, int sum){
  int n = val.size();
  vector<vector<bool>> dp(n+1, vector<int>(sum+1));
  for(int i=0; i<n; i++){
    dp[i][0] = true;
  }
  for(int j=1; j<sum; j++){
    dp[0][j] = false;
  }
  // LOgical part 
  for(int i = 1; i<n+1; i++){
    for(int j =1; j<sum+1; j++){
        if(val[i-1]<= j && val[i-1]+dp[i-1][j-val[i-1]] == true){ // include condition
            dp[i][j] =true; 
        }else if(dp[i-1][j] == true){
            dp[i][j] = true;
        }
    }
  }
  return dp[n][sum];
}
int main(){
    vector<int> wt = {2,5,1,3,4};
    vector<int> val = {15, 14,10, 45,30};
    cout<<knapSack(val, 7);
    return 0;
}