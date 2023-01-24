#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0;
    int *c = &a;
    int **d = &c;
    a = 3;
    cout << *c << endl;
    cout << d;
    return 0;
}
