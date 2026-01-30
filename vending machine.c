// 자판기

// 순서도
/*
1. 음료수/과자 (종류, 번호 ,금액) 출력

2. 상품 번호 입력

3. 선택한 상품의 정보 출력

4. 금액 입력

5. 충분 시		-> 상품 출력 
   불충분 시	-> 금액 추가 문구 -> 상품 출력 
   */


#include <stdio.h>

int num();

int main(void)
{
	int choice;
	int i = 0;
	int a = 1;

   

	char* names[] = { "포카리스웨트", "콜라", "사이다", "커피", "빼빼로" };
	int prices[] = { 1000, 1200, 1000, 800, 1500 };
	printf("================자판기================\n");
	for (i = 0; i < 5; i++)									// 메뉴 (종류, 금액) 출력
	{
		printf("%d. %s (%d원)\n", a, names[i], prices[i]);
		a = a + 1;
	}
	printf("======================================\n");

    int pick;
    pick = num();
    if ((pick > 0) && (pick < 6))
    {
        printf("\n%d. %s (%d원)\n\n", pick+1, names[pick], prices[pick]);
    }
    printf("금액을 넣어주십시오 :");

}
int num()
{
    int i=0;
   
    printf("메뉴를 선택하세요 :");
    scanf("%d", &i);
    if  (i == 1)
    {
        return 0;
    }
    else if (i == 2)
    {
        return 1;
    }
    else if (i == 3)
    {
        return 2;
    }
    else if (i == 4)
    {
        return 3;
    }
    else if (i == 5)
    {
        return 4;
    }
    else
    {
        return i;
    }
}