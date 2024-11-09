#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    int x,y;//最大公约数最小公倍数
    if (a>b) {
        int t=a;
        a=b;
        b=t;
    }
    for (int i=1; i<=a; i++) {
        if(a%i==0 && b%i==0)
            x=i;
    }
    y=a*(b/x);
    cout<<"最大公因数为"<<x<<"最小公倍数为"<<y<<endl;
    return 0;
}
