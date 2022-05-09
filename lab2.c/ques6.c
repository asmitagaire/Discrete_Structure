#include<stdio.h>
#include<stdlib.h>
char binarysearch(int * arr, int l, int a, int num)
{
    if(a >= 1)
    {
        int mid = (a + l)/ 2;
        if (arr[mid] == num)
        {
            return binarysearch( arr l, mid -1; num);
        }
        
    }
}