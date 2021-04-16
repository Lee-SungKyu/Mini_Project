#include "manager.h"


int addProduct(Shopping *p)
{
    printf("추가할 제품은? : ");
    getchar();
    scanf("%[^\n]s",p->name);

    printf("제품 재고량은? : ");
    scanf("%d", &p->quantity);

    printf("제품 가격은? : ");
    scanf("%d", &p->price);

    printf("제품 별 평점은? : ");
    scanf("%d", &p -> star_rate);
  
    printf("제품 별 갯수는? : ");
    scanf("%d", &p -> star_count);

    return 1;
}


void readProduct(Shopping p)
{
    printf(" %d    %d        %d        %d      %s\n\n",p.price,p.quantity,p.star_rate,p.star_count,p.name);
}

int updateProduct(Shopping *p)
{
    printf("제품명은? : ");
    getchar();
    scanf("%[^\n]s",p->name);

    printf("제품 재고량은? : ");
    scanf("%d", &p->quantity);

    printf("제품 가격은? : ");
    scanf("%d", &p->price);

    return 1;
}


void deleteProduct(Shopping *p)
{
    p -> quantity = -1;
    p -> price = -1;
    p -> star_rate = -1;
    p -> star_count = -1;

}
/*
int main()
{
    Shopping slist;
    int menu; //Selecting Menu Option
    int count; //Total items

    while(1)
    {
        menu = selectMenu();

        if(menu == 0) break;

        else if (menu == 1)
        {
            readProduct(slist);
        }

        else if (menu == 2)
        {
            count += addProduct(&slist);
            printf("=> ?????!\n\n");

        }
        
        else if (menu == 3)
        {
            updateProduct(&slist);
        }

        else if (menu == 4)
        {
            printf("?????? ??????ð?????? (????: 1) : ");
            int delete;
            scanf("%d", &delete);

            if (delete == 1)
            {
                deleteProduct(&slist);
                count--;
            }
            else
            {
                printf("????!\n");
            }
        }
    }
    printf("?????!\n");
    return 0;
}
*/
