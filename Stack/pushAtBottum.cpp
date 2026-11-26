#include<iostream>
#include<stack>
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
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    pushAtBottum(s,0);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
