#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row(m,1), col(n,1);
        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                if(mat[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
       for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){
            if(row[i] == 0 || col[j] == 0){
                mat[i][j] = 0;
            }
        }
       }
       for(int i =0; i<m; i++){
           for(int j =0; j<n; j++){
               cout<< mat[i][j]<<" ";
           }
           cout<< endl;
       }

    }

int main()
{
   int n,m;
   cout<<"Enter the value of n : ";
   cin >> n;
   cout<<"Enter the value of m : ";
   cin>>m;
   vector<vector<int>> arr(m, vector<int>(n));
   for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            cin>> arr[i][j];
        }
        cout<<endl;
   }
    setZeroes(arr);
    return 0;
}