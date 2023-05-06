#include <stdio.h>
#define DZ_SZ 10

 void FUNC1(int);

int main() {
    int dizi[DZ_SZ] = {0};
    for(int index=0; index<sizeof(dizi)/sizeof(dizi[0]); index++)
    {
        printf("dizinin elemanlari:%d \n",dizi[index]);
    }


    // C99 standard variable-sized array initializing
        int n;

        printf("Enter the size of the array: \n");
        scanf("%d", &n);

        FUNC1(n);





    return 0;
}

/*
void FUNC1(int input)
{
    int number;
    printf("enter a number \n" );
    scanf("%d", &number);
    int array[number]={0};

    for(int i=0; i<sizeof(array)/sizeof(array[0]);i++)
    {
        printf("The value of array in function: %d \n", array[i]);
    }
}
*/

void FUNC1(int n)
{
    int arr[n];

    for(int i=0; i<n; i++)
        arr[i] = i+1;

    printf("The array elements are: ");

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

