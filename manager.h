#include <stdio.h>
#include <stdlib.h>
#include "product.h"


int selectDataNo(Shopping *p[], int count);
void listProduct(Shopping *p[], int count);


int loadProduct(Shopping *p,int linecount); // 파일에서 불러오기
void saveProduct(Shopping *p, int count); //파일로 저장하기
void searchProduct(Shopping *p); // 재품 검색
