// ****
// ****
// ****
// ****

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cout << "Enter no. of Rows\n";
    cin >> n;

    cout << "Enter no. of Columns\n";
    cin >> m;

    for(int i = 0; i<n; i++ ){

        for(int j =0; j <m; j++ ){
            cout << "*";
        }
        cout << endl;

    }
}