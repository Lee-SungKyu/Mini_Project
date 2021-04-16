#include "manager.h"

int selectMenu()
{
    int menu;
    printf("==================\n");
    printf("1. 제품조회\n");
    printf("2. 제품추가\n");
    printf("3. 제품수정\n");
    printf("4. 제품삭제\n");
    printf("5. 제품저장\n");
    printf("6. 제품검색(이름)\n");
    printf("7. 제품검색(제품량)\n");
    printf("8. 제품검색(최소금액))\n");
    printf("9. 제품검색(별평점)\n");
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
    int linecount = 0;
    char c;

    FILE *fp;
    
    if ((fp = fopen("store.txt", "r")))
    {

        for (c = getc(fp); c != EOF; c = getc(fp))
        {

            if (c == '\n')
            {
                linecount++;
            }
        }
        count = loadProduct(slist,linecount);
        index = count;
        
        fclose(fp);
    }
    else
    {
        printf("\n => 파일없음\n");
        fp = fopen("store.txt", "wt");
        fclose(fp);
    }

    while(1)
    {
        menu = selectMenu(menu);

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
        else if (menu == 5)
        {
            saveProduct(slist,index);
        }
        else if (menu == 6)
        {
            searchProduct(slist,index);
        }
        else if (menu == 7)
        {
            searchPquantity(slist,index);
        }
        else if (menu == 8)
        {
            searchPrice(slist,index);
        }
        else if (menu == 9)
        {
            searchPSrating(slist,index);
        }
    }
    printf("종료됨!\n");
    return 0;

}
