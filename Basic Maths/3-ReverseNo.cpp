#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int reverseNo = 0;
    while (n > 0)
    {
        int lastdigit= n%10;
     
        n = n / 10;
        reverseNo = (reverseNo * 10) + lastdigit;
    }
    cout << reverseNo;
    return 0;
}