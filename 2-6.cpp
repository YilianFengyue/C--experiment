#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    int x,y;//���Լ����С������
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
    cout<<"�������Ϊ"<<x<<"��С������Ϊ"<<y<<endl;
    return 0;
}
