#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    int initialSpace = 0;
    for (int i =0; i <n; i++)
    {
        //star
        for(int j =1;j<=n-i;j++){

            cout <<"*";
        }
        //Space
        
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        // star
        for (int j=1;j<=n-i;j++)
            {
            cout <<"*";
            }
            initialSpace += 2;
            cout << endl;
    }
     initialSpace = 2*n-2;
    for (int i = 1; i <= n;i++){

      //star
        for(int j =1;j<=i;j++){

            cout <<"*";
        }
        //Space
        
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        // star
        for (int j=1;j<=i;j++)
            {
            cout <<"*";
            }
            initialSpace -= 2;
            cout << endl;  
}
}
int main(){
int n;
cin >> n;
print1(n);

return 0;
}