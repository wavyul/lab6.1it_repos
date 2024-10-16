#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE)
{
    int MIN = 15;
    int MAX = 85;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

int sum(int* arr, int SIZE)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 || arr[i] % 13 == 0)
            sum += arr[i];
    }
    return sum;
}

int count(int* arr, int SIZE)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 || arr[i] % 13 == 0)
            count++;
    }
    return count;
}

void updateArray(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 || arr[i] % 13 == 0)
        {
            arr[i] = 0;
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 21;
    int arr[SIZE];
    create(arr, SIZE);
    Print(arr, SIZE);
    cout << endl;
    cout << "sum = " << sum(arr, SIZE) << endl;
    cout << "count = " << count(arr, SIZE) << endl;
    updateArray(arr, SIZE);
    Print(arr, SIZE);
    return 0;
}
