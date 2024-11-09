#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    float sum=a+b+c;
    cout<<"The sum is: "<<sum<<endl;
    if(a==b || a==c || b==c) {
        cout<<"是等腰三角形"<<endl;
    }
    else {
        cout<<"不是等腰三角形"<<endl;
    }
    return 0;
}
