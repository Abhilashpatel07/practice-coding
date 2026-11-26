#include <iostream>
#include<stack>
#include<vector>
using namespace std;
void pushAtBottum(stack<int> &s, int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottum(s,element);
    s.push(top);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int topElement = s.top();
    s.pop();
    reverse(s);
    pushAtBottum(s, topElement);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}