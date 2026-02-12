#include <iostream>
using namespace std;

int main() {

    int m;
    int n;

    int i;
    int j;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    for(i = 1; i <= m; i++) {

        for(j = 1; j <= n; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
