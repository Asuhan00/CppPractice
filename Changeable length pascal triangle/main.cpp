#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter lenght of pascal triangle : ";
    cin >> size;
    int** ptr = new  int*[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = new int[i + 1];
    }
    ptr[0][0] = 1;
    ptr[1][0] = 1;
    ptr[1][1] = 1;
    for (int i = 2; i <size; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (j==0||j==i)
            {
                ptr[i][j] = 1;
            }
            else 
            {
                ptr[i][j] = ptr[i - 1][j - 1] + ptr[i - 1][j];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size-i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << ptr[i][j] << " ";

        }
        cout << endl;
    }
    system("pause");
    
}