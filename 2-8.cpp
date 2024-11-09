#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a=0;
    cout<<"Enter a number: ";
    cin>>a;
    float x0=a,x1=(x0+a/x0)/2;
    if(a>0) {
        while(abs(x1-x0)>1e-10) {
            x0=x1;
            x1=(x0+a/x0)/2;
        }
        cout<<x1<<endl;
    }else
        cout<<"a<0"<<endl;
    return 0;
}
