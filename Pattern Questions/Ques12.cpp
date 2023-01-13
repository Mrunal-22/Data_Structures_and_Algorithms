#include<bits/stdc++.h>
using namespace std;
//GOOD WORK
void print1(int n){
    for (int i =1; i <=n; i++)
    {
        //space
        for(int j =1;j<=i;j++){

            cout <<j;
        }
        //star
        for (int j = 2*n - (2*i); j >0 ;j--)
            {
            cout <<"-";
            }
        // space
        for (int j=i;j>=1;j--)
            {
            cout <<j;
            }
        cout << endl;
    }
}
int main(){
int n;
cin >> n;
print1(n);

return 0;
}