// switch statement

#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("#input.txt","r",stdin);
        freopen("#output.txt","w",stdout);
    #endif

    char oper;
    // cout<<"Enter an Operator : ";
    cin>>oper;

    int a,b;
    // cout<<"Enter 2 Numbers : ";
    cin>>a>>b;

    switch (oper) {
        case '+':
            cout<<"Sum : "<<a+b;
            break;
        case '-':
            cout<<"Difference : "<<a-b;
            break;
        case '*':
            cout<<"Multiplication : "<<a*b;
            break;
        case '/':
            cout<<"Division : "<<a/b;
            break;
        default:
            cout<<"This is Not Under My Capability to Calculate!"<<endl;
            break;
    }
    return 0;
}