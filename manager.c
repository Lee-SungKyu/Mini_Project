#include "manager.h"
#include <string.h>

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

int loadProduct(Shopping *p[],int linecount)
{
    int count = 0;
    FILE *fp;
    fp = fopen("store.txt", "r");

    for (int i = 0; i < linecount; i++)
    {
        fscanf(fp,"%d %d %d %d %s",&p[i]->price,&p[i]->quantity,&p[i]->star_rate,&p[i]->star_count,p[i]->name);
        count++;
    }
    fclose(fp);
    printf("\n=> 로딩 성공!\n");
    return count;
}
void saveProduct(Shopping *p[], int count)
{
    FILE *fp;
    fp = fopen("store.txt", "wt");

    for (int i = 0; i < count; i++)
    {
        if(p[i]->price == -1) continue;
        fprintf(fp, "%d %d %d %d %s\n",p[i]->price,p[i]->quantity,p[i]->star_rate,p[i]->star_count,p[i]->name);
    }
    fclose(fp);
    printf("=> 저장됨!");

}
void searchProduct(Shopping *p[], int count)
{
    int scnt = 0;
    char search[20];

    printf("검색할 제품은? : ");
    scanf("%s", search);

    printf("\n No Price Quantity StarRate StarCount Name \n");
    printf("==============================================\n");
    for (int i = 0; i < count; i++)
    {
        if(p[i]->price == -1) continue;
        if(strstr(p[i]->name,search))
        {
            printf("%2d ", i+1);
            readProduct(*p[i]);
            scnt++;
        }
    }
    if (scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
    
}
void searchPquantity(Shopping *p[], int count)
{
    int scnt = 0;
    int find = 0;
    printf("검색할 최소 제품량은? : ");
    scanf("%d", &find);

    printf("\n No Price Quantity StarRate StarCount Name \n");
    printf("==============================================\n");

    for (int i = 0; i < count; i++)
    {
        if(p[i]->price == -1) continue;
        if(p[i]->quantity >= find)
        {
            printf("%2d ", i+1);
            readProduct(*p[i]);
            scnt++;
        }
    }
    if (scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchPrice(Shopping *p[], int count)
{
    int scnt = 0;
    int find = 0;
    printf("검색할 최소 금액은? : ");
    scanf("%d", &find);

    printf("\n No Price Quantity StarRate StarCount Name \n");
    printf("==============================================\n");

    for (int i = 0; i < count; i++)
    {
        if(p[i]->price == -1) continue;
        if(p[i]->price >= find)
        {
            printf("%2d ", i+1);
            readProduct(*p[i]);
            scnt++;
        }
    }
    if (scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchPSrating(Shopping *p[], int count)
{
    int scnt = 0;
    int find = 0;
    printf("검색할 최소 별 평점은? : ");
    scanf("%d", &find);

    printf("\n No Price Quantity StarRate StarCount Name \n");
    printf("==============================================\n");

    for (int i = 0; i < count; i++)
    {
        if(p[i]->price == -1) continue;
        if(p[i]->star_rate >= find)
        {
            printf("%2d ", i+1);
            readProduct(*p[i]);
            scnt++;
        }
    }
    if (scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}

