#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int sum_i(int a[], const int SIZE);
int kilkist_i(int a[], const int SIZE);
void zamina_i(int a[], const int SIZE);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));

    int r;
    const int SIZE = 21;
    int a[SIZE];

    cout << "a[] = ";
    for (r = 0; r < 21; r++)
    {
        a[r] = 10 + rand() % 90;
        cout << a[r] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "Ітераційний спосіб:" << endl;
    cout << "\nКількість вибраних елементів:" << kilkist_i(a, SIZE) << endl;
    cout << "Сума вибраних елементів: " << sum_i(a, SIZE) << endl;
    cout << "Модифікований масив:";
    zamina_i(a, SIZE);
   

    return 0;
}
//ітераційний спосіб
int sum_i(int a[], const int SIZE)
{
    int s = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (((a[i] % 2) ==0) || ((a[i] % 3) != 0))
            s += a[i];
    }
    return s;
}
int kilkist_i(int a[], const int SIZE)
{
    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (((a[i] % 2) == 0) || ((a[i] % 3) != 0))
            k++;
    }
    return k;
}
void zamina_i(int zam[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (((zam[i] % 2) == 0) || ((zam[i] % 3) != 0))
            cout << 0 << "  ";
        else
            cout << zam[i] << "  ";
    }
}
