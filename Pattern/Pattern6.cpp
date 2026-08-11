// **********
//  ********
//   *****
//    ***
//     *
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter no. of iterations ";
    cin >> n;

    for(int i = 1; i <= n; i++ ){

        for(int j = 0; j < n; j++) {
            cout << " ";           
        }
        for(int k = 0; k < 2*n-(2*i+1); k++) {
            cout << "*";           
        }
        cout << endl;
    }

}