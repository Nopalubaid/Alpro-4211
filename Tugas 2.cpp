//judul  : buat fungsi dari "max, min, max array, min array, is even, is odd, is factor, sum even, sum odd.

#include <iostream>
using namespace std;

//deklarasi fungsi
int maxarray(int arr[],int n);
int minarray(int arr[],int n);
bool iseven (int a);
bool isodd (int a);
bool isfactor(int a,int b);
int sum_even (int arr[],int n);
int sum_odd (int arr[],int n);

int main()
{
    //memasukkan bilangan untuk di bandingkan
    int a,b;
    cout << " masukkan bilangan 1 : ";
    cin >> a;
    cout << " masukkan bilangan 2 : ";
    cin >> b;
    cout << endl;

    cout << " Bilangan terbesarnya adalah : " << max(a,b) << endl;
    cout << endl;
    cout << " Bilangan terkecilnya adalah : " << min(a,b) << endl;
    cout << endl;

    //memasukkan bilagan array
    int i;
    cout << " masukkan jumlah array : " ;
    cin >> i;
    int arr[i];
    cout << " masukkan array bilangan : " << endl;
    for(int j=0 ; j<i ; j++ )
    {
        cin >> arr[j];
    }
    cout << endl;

    cout << " Yang terbesar dalam array tersebut adalah : " << maxarray( arr , i ) << endl;
    cout << endl;
    cout << " Yang terkecil dalam array tersebut adalah : " << minarray( arr , i ) << endl;
    cout << endl;
    //menambah bilangan genap saja pada array
    cout << " jumlah pada bilangan genap saja pada array : " << sum_even( arr , i ) << endl;
    cout << endl;
    //menambah bilangan ganjil saja pada array
    cout << " jumlah pada bilangan ganjil saja pada array : " << sum_odd( arr , i ) << endl;
    cout << endl;

    //apa ini bilangan genap / ganjil ?
    int gnp;
    cout << " masukkan bilangan genap / ganjil : " ;
    cin >> gnp;
    cout << endl;
    cout << " 1 = Benar & 0 = Salah " << endl;
    cout << endl;
    cout << " apakah Genap ? : " << iseven( gnp ) << endl;
    cout << endl;
    cout << " apakah Ganjil ? : " <<  isodd( gnp ) << endl;
    cout << endl;

    //bilangan faktor
    //disini saya menggunakan inputan pada max dan min
    cout << " apakah " << b << " adalah faktor dari " << a << " : " << isfactor(a,b) << endl;


    return 0;
}

//definisi fungsi
int maxarray(int arr[],int n)
{
    int temp = arr[0];
    for( int i = 0; i < n; i++ )
    {
        if ( arr[i] > temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

int minarray(int arr[],int n)
{
    int temp = arr[0];
    for( int i = 0; i < n; i++ )
    {
        if ( arr[i] < temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

bool iseven (int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isodd (int a)
{
    if (a % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isfactor(int a, int b)
{
    if( a % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum_even (int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        if (arr[i] % 2 == 0)//jika bilangan genap
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sum_odd (int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        if (arr[i] % 2 != 0)//jika bilangan ganjil
        {
            sum += arr[i];
        }
    }
    return sum;
}
