#include <iostream>
using namespace std;
int main() {
    float r,h;
    cin>>r>>h;
    float S=0.0;
    const float PI=3.14159265358979323846;
    S=(1/3)*PI*r*r*r;
    cout<<"S="<<S;
}