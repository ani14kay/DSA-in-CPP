// if...else if...else statements

#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("#input.txt","r",stdin);
        freopen("#output.txt","w",stdout);
    #endif

    int a,b,c;
    cin>>a>>b>>c;

    if (a>b) {
        if (a>c)
            cout<<"Greatest is : "<<a<<endl;
        else
            cout<<"Greatest is : "<<c<<endl;
    }
    else {
        if (c>b)
            cout<<"Greatest is : "<<c<<endl;
        else
            cout<<"Greatest is : "<<b<<endl;
    }
    return 0;
}