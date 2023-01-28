#include<bits/stdc++.h>
using namespace std;

//1-paratmeterised method
void fun(int i,int sum)
{
    if (i<1)
    {
        cout << sum;
        return;
    }

    fun(i - 1, sum + i);
}
int main()

{
    int n;
    cin >> n;
    fun(n,0);
    return 0;
}