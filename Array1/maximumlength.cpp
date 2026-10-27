#include<iostream>
 #include<vector> 
 #include<string>
 #include<algorithm>
 using namespace std;
 int main(){
     int n;
     cout<<"Enter the value of n : ";
     cin>>n;
     int arr[n];
     for(int i =0; i<n; i++){
         cout<<"Enter the "<<i+1<<"st element : ";
         cin>>arr[i];
     }
     int target;
     cout<< "Enter the target : ";
     cin>> target;
     vector<int> ans(n-1);
     ans[0] = arr[0];
     for(int i =1; i<n; i++){
          ans[i] = arr[i]+ans[i-1];
     }
     for(int i = n-2; i>=0; i--){
        if(ans[i] == target){
            cout<< i+1;
            break;
        } 
     }
     return 0;
 }