#include<bits/stdc++.h>
using namespace std;

void printArray(int a[],int n) {
    for(int i=0; i<n; ++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main()
{
    int n;
    cin >> n;
    int a[n+7];

    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    int pos;
    cin >> pos;

    if(pos==n-1) n--;
    else {
        for(int i=pos+1; i<n; ++i) {
            a[i-1] = a[i];
        }
        n--;
    }
    printArray(a,n);

    return 0;
}


/*

    Deletion

    delete last value
    -> just reduce size by 1

    delete from middle or start or anywhere
    3 2 5 7 4
    pos : 2
    3 2 7 4


*/