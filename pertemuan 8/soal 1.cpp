#include <iostream>

using namespace std;

bool ganjil (int n)
{
    if (n % 2 != 0)
    {
    return true;
    }else
    {
    return false;
    }
}

void genapterkecil (int arr[],int n)
{
    int kecil = arr[0];
    int indek = 0;
    for (int i=0 ; i<n ;i++)
    {
        if (!ganjil(arr[i]))
        {
            if (arr[i]<kecil)
            {
                kecil = arr[i];
                indek = i;
            }
        }
    }
    cout << " array terkecilnya " << kecil << " di indek ke " << indek << endl;
}

int main()
{
    int arr[] = {6,7,4,2,5};
    int n = sizeof(arr) / sizeof arr [0];
    genapterkecil(arr, n);

    return 0;
}
