#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the value of n : ";
   cin>>n;
   int arr[n];
   for(int i =0; i<n; i++){
       cout << "Enter the "<<i+1<<"element of arr : ";
       cin>> arr[i];
   }
   int maxSum = INT_MIN;
   int prevMax = arr[0];
   for(int i =0; i<n; i++){
       if(maxSum<arr[i]){
           prevMax = maxSum;
           maxSum = arr[i];
       }else if(arr[i]> prevMax && arr[i] != maxSum){
           prevMax = arr[i];
       }
   }
    cout<<"second largest element : "<< prevMax;
    return 0;
}