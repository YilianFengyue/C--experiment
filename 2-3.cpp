#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    float sum=a+b+c;
    cout<<"The sum is: "<<sum<<endl;
    if(a==b || a==c || b==c) {
        cout<<"�ǵ���������"<<endl;
    }
    else {
        cout<<"���ǵ���������"<<endl;
    }
    return 0;
}
