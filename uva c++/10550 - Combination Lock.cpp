#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,a1,b1,c1;
    while(cin >> a >> b >> c >> d) {
        if(!a&&!b&&!c&&!d)
            break;
        if(a<b)
        a1=40-(b-a);
        else
        a1= a-b;
        if(b>c)
        b1=40-(b-c);
        else b1= c-b;
        if(c<d)
        c1=40-(d-c);
        else
        c1=c-d;
        cout << 360*3+(a1+b1+c1)*9 << endl;
    }
    return 0;
}
