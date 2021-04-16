#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[100]; //재품이름
    int quantity; //재품량
    int price; // 재품가격
    int star_rate; // 재품 rating
    int star_count; // 재품 rating 개수
}Shopping;

int selectDataNo(Shopping *p[], int count);
void listProduct(Shopping *p[], int count);
int addProduct(Shopping *p); //재품 추가
void readProduct(Shopping p); //하나의 재품 출력
int updateProduct(Shopping *p); //재품 수정
void deleteProduct(Shopping *p); //재품 삭제

int loadProduct(Shopping *p,int linecount); // 파일에서 불러오기
void saveProduct(Shopping *p, int count); //파일로 저장하기
void searchProduct(Shopping *p); // 재품 검색
