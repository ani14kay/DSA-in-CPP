// for, while and do_while loop executions

#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("#input.txt","r",stdin);
        freopen("#output.txt","w",stdout);
    #endif

    int n,sum = 0;
    cin>>n;
    cout<<"The Number Entered is : "<<n<<endl;
    
    for (int i=1; i<=n; i++) {
        sum = sum  + i;
    }
    cout<<"\nBy For Loop, Sum is : "<<sum<<endl;
    int n2 = n;
    sum=0;
    while(n>0) {
        sum = sum + n;
        n--;
    }
    cout<<"By While Loop, Sum is : "<<sum<<endl;
    
    sum=0;
    do {
        sum = sum + n2;
        n2--;
    }
    while (n2>0);
    cout<<"By Do_While Loop, Sum is : "<<sum<<endl;
    
    return 0;
}