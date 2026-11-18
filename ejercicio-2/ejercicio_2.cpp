#include <iostream>
using namespace std;

int main()
{
    int n, i, suma;

    i = 0;
    cout << "digita un numero" << endl;
    cin >> n;
    suma = n;
    while (i < n)
    {
        suma = suma + i;
        i = i + 1;
    }
    cout << suma;
    return 0;
}