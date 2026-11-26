#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Stack{
    private:
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
    }
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    int pop()
    {
        int x = q1.front();
        q1.pop();
        return x;
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}