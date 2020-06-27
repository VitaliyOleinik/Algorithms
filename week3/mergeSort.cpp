#include <iostream>

using namespace std;

int a[1000];
int n;

void merge(int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; i++){
        L[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++){
        R[i] = a[m + 1 + i];
    }
    int pointer1 = 0;
    int pointer2 = 0;
    int k = l;
    while(pointer1 < n1 && pointer2 < n2){
        if(L[pointer1 <= R[pointer2]]){
            a[k] = L[pointer1];
            pointer1++;
        }else{
            a[k] = R[pointer2];
            pointer2++;
        }
        k++;
    }
    while(pointer1 < n1){
        a[k] = L[pointer1];
        pointer1++;
        k++;
    }
    while(pointer2 < n2){
        a[k] = R[pointer2];
        pointer2++;
        k++;
    }
}

void mergesort(int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(l, m);
        mergesort(m + 1, r);
        merge(l, m, r);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}