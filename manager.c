#include "manager.h"


void listProduct(Shopping *p[], int count)
{
    printf("\n No Price Quantity StarRate StarCount Name \n");
    printf("==============================================\n");
    for (int i = 0; i < count; i++)
    {
        if(p[i] == NULL) continue;
        printf("%2d ", i+1);
        readProduct(*p[i]);
    }
}

int selectDataNo(Shopping *p[], int count)
{
    listProduct(p,count);
    int no;

    printf("번호는(취소:0)? ");
    scanf("%d", &no);
    return no;
}

