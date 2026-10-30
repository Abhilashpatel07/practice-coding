 /*#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string &s1, string &s2, int n, int m){
    if(n == 0 || m == 0){
        return 0;
    }
    if(s1[n-1] == s2[m-1]){
        return lcs(s1, s2, n-1, m-1)+1;
    }else{
        int ans1 = lcs(s1, s2, n-1, m);
        int ans2 = lcs(s1,s2, n, m-1);
        return max(ans1, ans2);
    }
}



int main()
{
    string s1 = "abcde";
    string s2 = "acde";
    int n = s1.size();
    int m = s2.size();
    cout<<lcs(s1,s2,n,m);

    return 0;
}
*/
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string &s1, string &s2, int n, int m, vector<vector<int>>&dp){
    if(n == 0 || m == 0){
        return 0;
    }
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    if(s1[n-1] == s2[m-1]){
        return dp[n][m] = lcs(s1, s2, n-1, m-1, dp)+1;
    }else{
        int ans1 = lcs(s1, s2, n-1, m, dp);
        int ans2 = lcs(s1,s2, n, m-1, dp);
        return dp[n][m] = max(ans1, ans2);
    }
}



int main()
{
    string s1 = "abcde";
    string s2 = "acde";
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    for(int i =0; i<n+1; i++ ){
        for(int j =0; j<m+1; j++){
            dp[i][j] = -1;
        }
    }
    cout<<lcs(s1,s2,n,m,dp);

    return 0;
}