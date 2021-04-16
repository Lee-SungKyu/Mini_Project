#include "manager.h"


int addProduct(Shopping *p)
{
    printf("추가할 재품은? : ");
    getchar();
    scanf("%[^\n]s",p->name);

    printf("재품 재고량은? : ");
    scanf("%d", &p->quantity);

    printf("재품 가격은? : ");
    scanf("%d", &p->price);

    p -> star_rate = 0;
    p -> star_count = 0;

    return 1;
}


void readProduct(Shopping p)
{
    printf("%d  %d      %d      %d      %s\n\n",p.price,p.quantity,p.star_rate,p.star_count,p.name);
}

int updateProduct(Shopping *p)
{
    printf("재품명은? : ");
    getchar();
    scanf("%[^\n]s",p->name);

    printf("재품 재고량은? : ");
    scanf("%d", &p->quantity);

    printf("재품 가격은? : ");
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
