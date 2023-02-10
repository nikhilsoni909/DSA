#include <stdio.h>
// void passing(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {printf(" the value of %dst element is %d \n",(i+1),*(ptr+i));
//     }
// }




// void passing(int ptr[], int n)//we are calling array by referance 
// {
//     for (int i = 0; i < n; i++)
//     {printf(" the value of %dst element is %d \n",(i+1),*(ptr+i));//this is also correct we are calling it by referemce arrays 
//     }
// }


void passing(int ptr[], int n)//we are calling array by referance 
{
    for (int i = 0; i < n; i++)
    {printf(" the value of %dst element is %d \n",(i+1),ptr[i]);//this is also correct we are calling it by referemce arrays 
    }
    ptr[2]=5555;//the value will be changed in main function aswell
}


int main()
{
    int arr[] = {12, 23, 34, 34, 234, 123, 23455, 2345};
   passing(arr,8);
   
    return 0;
}