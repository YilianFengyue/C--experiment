#include <iostream>
using namespace std;

int main() {
    int cnt=0,letter=0,space=0,digit=0,others=0;
    char s[100];
    cin.getline(s,100);
    int i=0;
    while(s[i]!='\0') {

        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            letter++;
        else if(s[i]>='0' && s[i]<='9')
            digit++;
        else if(s[i]<0)
            cnt++;
        else if(s[i]==' ')
            space++;
        else
            others++;
        i++;
    }
    cout<<"cnt="<<cnt/2<<" letter="<<letter<<" space="<<space<<" others="<<others<<endl;
    return 0;
}

