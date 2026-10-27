#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{   int n; 
    cout<<"Enter the value of n : ";
    cin>>n;
    int m; 
    cout<<"Enter the value of m : ";
    cin>>m;
vector<vector<int>> arr(m, vector<int>(n));
for(int i =0; i<m; i++){
    for(int j =0; j<n; j++){
    cin>>arr[i][j];
}
    cout<<endl;
}
vector<vector<int>> ans(m, vector<int>(n)); 
for(int i =0; i<m; i++){
    for(int j =0; j<n; j++){
     ans[j][m-i-1] = arr[i][j]; 
    }
}
for(int i =0; i<m; i++){
    for(int j =0; j<n; j++){
    cout<<ans[i][j];
} 
    cout<<endl;
}
 
   return 0;
}