#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[100]; //제품이름
    int quantity; //제품량
    int price; // 제품가격
    int star_rate; // 제품 rating
    int star_count; // 제품 rating 개수
}Shopping;


int addProduct(Shopping *p); //제품 추가
void readProduct(Shopping p); //하나의 제품 출력
int updateProduct(Shopping *p); //제품 수정
void deleteProduct(Shopping *p); //제품 삭제

