#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int duplicate = n;
    while (n > 0)
    {
        int lastdigit= n%10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n / 10;
    }
   if(sum==duplicate)
        cout << "True" << endl;
    else
        cout << "False";
    return 0;
}