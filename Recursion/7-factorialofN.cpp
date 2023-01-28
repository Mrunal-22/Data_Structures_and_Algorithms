/*#include<bits/stdc++.h>
using namespace std;

//1-parameterised method
void fun(int i,int fact)
{
    if (i<1){
    cout<<fact;
    return;
    }

    fun(i - 1, fact * i);
}
int main()

{
    int n;
    cin >> n;
    fun(n,1);
    return 0;
}*/

//2-Functional method
#include<bits/stdc++.h>
using namespace std;

//2-functional method
int fun(int n)
{
    if (n==0)
    
        return 1;
    else
        return n*fun(n-1);
}
int main()

{
    int n;
    cin >> n;
    cout<<fun(n);
    return 0;
}