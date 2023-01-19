#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int reverseNo = 0;
    int duplicate = n; //jus to store original value of n as we are dividing it so
                       //in the end it will be getting 0
    while (n > 0)
    {
        int lastdigit= n%10;
     
        n = n / 10;
        reverseNo = (reverseNo * 10) + lastdigit;
    }
    if(reverseNo==duplicate)
        cout << "True" << endl;
    else
        cout << "False";
    return 0;
}