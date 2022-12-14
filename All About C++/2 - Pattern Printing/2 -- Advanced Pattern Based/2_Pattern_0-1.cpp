#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter Value for N : ";
    cin>>n;

    // My Method
    cout<<"\n By Method - 1 (My Method) "<<endl;;
    int counter;
    for(int i=1;i<=n;i++) {
        if(i%2==1){
            counter = 0;
        }
        else{
            counter = 1;
        }
        for(int j=1;j<=i;j++){
            if(counter ==0){
                cout<<" "<<1<<" ";
                counter =1;
            }
            else {
                cout<<" "<<0<<" ";
                counter =0;
            }
        }
        cout<<endl;
    }

    // Another Method
    cout<<"\n By Method - 2 (Another Method) "<<endl;;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if((i+j)%2==0){
                cout<<" "<<1<<" ";
            }
            else{
                cout<<" "<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}