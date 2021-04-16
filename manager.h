#include <stdio.h>
#include <stdlib.h>
#include "product.h"


int selectDataNo(Shopping *p[], int count);
void listProduct(Shopping *p[], int count);
//int addProduct(Shopping *p); //재품 추가
//void readProduct(Shopping p); //하나의 재품 출력
//int updateProduct(Shopping *p); //재품 수정
//void deleteProduct(Shopping *p); //재품 삭제

int loadProduct(Shopping *p[],int linecount); // 파일에서 불러오기
void saveProduct(Shopping *p[], int count); //파일로 저장하기
void searchProduct(Shopping *p[], int count); // 재품 검색
void searchPquantity(Shopping *p[], int count); //재품량 검색
void searchPrice(Shopping *p[], int count); //재품 가격 검색
void searchPSrating(Shopping *p[], int count); //재품 별 rating 검색


