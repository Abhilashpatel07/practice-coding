#include <iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{   int n; 
cout<<"Enter the value of n : ";
cin>>n;
int arr[n];
for(int i =0; i<n; i++){
    cout<<"Enter the "<<i+1<<"st element : ";
    cin>>arr[i];
}
    int count = 0;
    int target;
    cout<<"Enter the value of target : ";
    cin>> target;
    for(int i =0; i<n; i++){
        int sum = arr[0];
        for(int j =i+1; j<n; j++){
            sum += arr[j];
            if(sum == target){
                count++;
            }
        }
        cout<< count;
    }

    return 0;
}