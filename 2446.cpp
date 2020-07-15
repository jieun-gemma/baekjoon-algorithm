#include <iostream>
using namespace std;


int main(void)
{
    int N;
    cin >> N;

    for (int l = 0; l < N - 1; l++)
    {
        for (int n = 0; n < l; n++) cout << " ";
        for (int m = 2 * (N - 1); m > (2 * l) - 1; m--) cout << "*";

        cout << "\n";
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j > i; j--) cout << " ";
        for (int k = 0; k < (2 * i) + 1; k++) cout << "*";

        cout << "\n";
    }


    return 0;
}
