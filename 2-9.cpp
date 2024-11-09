#include <iostream>
using namespace std;
int main() {
    double apple=0.8;
    double sum=0;
    for (int i=2;i<100;i=i*2) {
        sum+=i*apple;
    }
    cout<<sum<<endl;
    return 0;
}
