#include <iostream>
using namespace std;
int metodo(int num)
{
    int it=0;
    while (num!=1)
    {
        if(num%2==0)
            num/=2;
        else
            num=3*num+1;
        it++;
    }
    return it;
}
int main()
{
    int a,b,i;
    while (cin>>a>>b)
    {
        int salida=0,aux=0,ini=a,fin=b;

        if(a>b)
        {
            swap(ini,fin);
        }
        for(i=ini; i<=fin; ++i)
        {
            aux=metodo(i);

            if (salida<aux){
                salida=aux;
            }
        }
        cout<<a<<" "<<b<<" "<<salida+1<<endl;
    }
    return 0;
}
