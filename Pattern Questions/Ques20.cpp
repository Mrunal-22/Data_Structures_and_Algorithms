#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    int initialSpace = 2*n-2;
    for (int i =1; i <=2*n-1; i++)
    {
        int stars = i;
        if(i>n)
            stars = 2 * n - i;
        // star
        for(int j =1;j<=stars;j++){

            cout <<"*";
        }
        //Space
        
        for (int j = 1; j <=initialSpace; j++)
        {
            cout << " ";
        }
        // star
        for(int j =1;j<=stars;j++){

            cout <<"*";
        }
            cout << endl;
            if(i<n)
            initialSpace -= 2;
            else
            initialSpace += 2;
    }
}

int main(){
int n;
cin >> n;
print1(n);

return 0;
}