#include <iostream>
using namespace std;

int Func(int a, int b)
{
    int M;
    if (a<=b) M=a;
    else M=b;

    int I = 2;
    while (I<=M)
    {
        if (a%I==0 && b%I==0)
        {
            a /= I;
            b /= I;
            continue;
        }
        I += 1;
    }

    return a+b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Func(a,b) <<  endl;
}