#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter Value for N : ";
    cin>>n;

    // My Method
    cout<<"\n By Method - 1 (All in One Go) "<<endl;
    for(int i=1; i<=2*n; i++) {
        for(int j=1; j<=2*n; j++) {
            if ((j<=i || j>2*n-i) && i<=n) {
                cout<<" * ";
            }
            else if ((j<=2*n-i+1 || j>=i) && i>n) {
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    // Another Method
    cout<<"\n By Method - 2 (Based on Spaces) "<<endl;
    for(int i=1; i<=n; i++) {
        for( int j=1; j<=i; j++) {
            cout<<" * ";
        }
        int space = 2*n - 2*i;
        for( int j=1; j<=space; j++) {
            cout<<"   ";
        }
        for( int j=1; j<=i; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--) {
        for( int j=1; j<=i; j++) {
            cout<<" * ";
        }
        int space = 2*n - 2*i;
        for( int j=1; j<=space; j++) {
            cout<<"   ";
        }
        for( int j=1; j<=i; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}