#include "manager.h"

int selectMenu()
{
        int menu;
	#ifdef DEBUG
		printf("=> DEBUGMODE\n");
	#endif
        printf("==================\n");
        printf("1. 재품조회\n");
        printf("2. 재품추가\n");
        printf("3. 재품수정\n");
        printf("4. 재품삭제\n");
        printf("0. 종료\n");
        printf("==================\n");
        printf("=> 원하는 메뉴는? : ");
        scanf("%d", &menu);
        return menu;
}

int main()
{
    Shopping *slist[100];
    int menu;
    int count = 0;
    int index = 0;

    while(1)
    {
        menu = selectMenu();

        if(menu == 0) break;

        else if (menu == 1)
        {
            listProduct(slist,index);
        }

        else if (menu == 2)
        {
            slist[index] = (Shopping *)malloc(sizeof(Shopping));

            count += addProduct(slist[index++]);
            printf("=> 추가됨!\n\n");

        }
        
        else if (menu == 3)
        {
            int no = selectDataNo(slist,index);
            if(no > 0)
            {
                updateProduct(slist[no-1]);
            }
            else
            {
                printf("취소됨!\n");
            }
            
        }

        else if (menu == 4)
        {
            int no = selectDataNo(slist,index);
            if(no > 0)
            {
                printf("정말로 삭제하시겠습니까? (삭제: 1) : ");
                int delete;
                scanf("%d", &delete);
                if (delete == 1)
                {
                    free(slist[no-1]);
                    slist[no-1] = NULL;
                    count--;
                }


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
