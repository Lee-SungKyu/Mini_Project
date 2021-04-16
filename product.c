#include <stdio.h>
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
	printf("%d %d %d %d %s\n\n",p.price,p.quantity,p.star_rate,p.star_count,p.name);
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
/*
int main()
{
	Shopping slist;
	int menu;
	int count; //Total items

	while(1)
	{
		menu = selectMenu();

		if (menu == 0) break;

		else if (menu == 1)
		{
			readProduct(slist);
		}

		else if (menu == 2)
		{
			count += addProduct(&slist);
			printf("=> 추가됨!\n\n");			
		}

		else if (menu == 3)
		{
			updateProduct(&slist);
		}

		else if (menu == 4)
		{
			printf("정말로 삭제하시겠습니까? (삭제: 1) : ");
			int delete;
			scanf("%d", &delete);

			if (delete == 1)
			{
				deleteProduct(&slist);
				count--;
			}
			else
			{
				printf("취소됨!\n");
			}
		}

	}
	printf("종료됨!\n");
	return 0;
}
*/
