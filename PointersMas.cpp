#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

void Print(int* M, int n);   // виведення масиву
void RandomFill(int* M, int n);   // заповнення массиву рандомними числами
void Sort(int* const array, const int size);   // сортування масиву

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 12;
    int* A = new int[n];
    RandomFill(A, n);
    Sort(A, n);
    Print(A, n);
    delete[] A;
    getchar;
    return 0;
}
// заповнення массиву рандомними числами
void RandomFill(int* M, int n)
{
    for (int i = 0;i < n;i++)
    {
        *M = rand() % 100; //через вказівник
        *M++;
    }
}

void swap(int* const elem1Ptr, int* const elem2Ptr)

{

    int hold = *elem1Ptr;

    *elem1Ptr = *elem2Ptr;

    *elem2Ptr = hold;

}

void Sort(int* const array, const int size)   // сортування масива
{

    int smallest; //індекс найменшого елемента



    //цикл до -1 элемента

    for (int i = 0; i < size - 1; ++i)

    {

        smallest = i;	//перший індекс масива що лишився

       //Визначення індексу найменшого елемента:

        for (int index = i + 1; index < size; ++index)

        {

            if (array[index] < array[smallest])

                smallest = index;

        }

        swap(&array[i], &array[smallest]);

    }

}

//виведення масиву
void Print(int* M, int n)
{
    cout << "Відсортований масив за зростанням" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << M[i] << " ";
    }
    cout << endl;
}