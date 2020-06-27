#include <iostream>
using namespace std;
int arr[100000];

int main()
{
    int n, k, x;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int h = 0; h < k; h++)
    {
        cin >> x;
        int L = 0;
        int R = n;
        while (L < R)
        {
            int M = L + (R - L) / 2;
            if (arr[M] >= x)
                R = M;
            else
                L = M + 1;
        }

        if (arr[L] == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}