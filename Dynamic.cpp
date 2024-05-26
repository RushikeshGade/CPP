#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int Size = 0;

    cout<<"Enter the size of array : \n";
    cin>>Size;

    ptr = new int[Size];

     // ptr = (int*)malloc(Size * sizeof(int));  // malloc syntax

     //use the memory
         
    delete ptr;

    return 0 ;
}