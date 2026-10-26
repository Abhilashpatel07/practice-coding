#include <iostream>
#include<vector>
#include<string>
using namespace std;
string to_upper(string s){
    for(int i =0; i<s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}
 
int main()
{
    string s1, s2;
    cout<< "Enter the first name : ";
    cin>>s1;
    cout<< "Enter the last name : ";
    cin>> s2;
    int pincode[6];
    for(int i =0; i<6; i++){
        cout<<"Enter the "<< i+1<< "digit : ";
        cin>>pincode[i];
    }
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    string out = "";
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1>n2){
        char ch = s2[0];
        out = out+(char)tolower(ch)+ to_upper(s1)+to_string(pincode[n-1])+to_string(pincode[6-n+1]);
    }else if(n1<n2){
        char ch = s1[0];
        out = out+(char)tolower(ch)+ to_upper(s2)+to_string(pincode[n-1])+to_string(pincode[6-n+1]);
    }else{
         if(s1>s2){
            char ch = s2[0];
            out = out+(char)tolower(ch)+ to_upper(s1)+to_string(pincode[n-1])+to_string(pincode[6-n+1]);
         }else if(s2>s1){
            char ch = s1[0];
            out = out+(char)tolower(ch)+ to_upper(s2)+to_string(pincode[n-1])+to_string(pincode[6-n+1]); 
         }else{
            char ch = s1[0];
        out = out+(char)tolower(ch)+ to_upper(s2)+to_string(pincode[n-1])+to_string(pincode[6-n+1]); 
         }
    }
    cout<< out<<" ";
    
    return 0;
}