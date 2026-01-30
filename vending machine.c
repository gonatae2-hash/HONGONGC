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

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int num();


int main(void)
{
	int choice;
	
	
    int c = 0;
    int pay = 0;
    

	char* names[] = { "콜라", "사이다", "빼빼로", "포카리", "쌍쌍바" };
	int prices[] = { 2500, 1500, 2000, 1300, 1000 };
    
	printf("================자판기================\n");
    int i = 0;
    int a = 1;
    for (i = 0; i < 5; i++)									// 메뉴 (종류, 금액) 출력
	{
		printf("%d. %s (%d원)\n", a, names[i], prices[i]);
		a = a + 1;
	}
	printf("======================================\n");
    

    int pick;
    pick = num();
  
    // pick 1~5번 사이 입력시 메뉴 정보 반환
    if ((pick >= 1) && (pick <= 5))
    {
        printf("%d. %s (%d원)\n", pick, names[pick-1], prices[pick-1]);  
    }
   
    printf("금액을 넣어주십시오 :\n");
    
    scanf("%d", &pay);
    
    
    int d = 0;
    int pay1 = 0;
    //4500 = 1500 6000
    d = pay - prices[pick - 1];                             // 거스름 돈 계산
    // 금액 부족할 때 누적 계산
    if (pay > prices[pick -1])
    {
        printf("잔돈 %d원이 반환됩니다.\n", abs(d));
        printf("%s가 나옵니다", names[pick - 1]);   
    }
    else if (pay == prices[pick - 1])
    {
        printf("%s가 나옵니다", names[pick - 1]);
    }
    else
    {
        for (pay; pay < prices[pick - 1]; pay = pay + pay1)
        {
            if (d < 0)
            {
                printf("%d원이 부족합니다.\n", abs(d));
                printf("금액을 추가해 주십시오:\n");
                scanf("%d", &pay1);
                d = pay + pay1 - prices[pick - 1];
            }

            printf("잔돈 %d원이 반환됩니다.\n", abs(d));
            printf("%s가 나옵니다", names[pick - 1]);
        }
    }

}

int num()
{
    int i;
    printf("메뉴를 선택하세요 :");
    scanf("%d", &i);

    if (i==1)
    {
        return 1;
    }
    if (i == 2)
    {
        return 2;
    }
    if (i == 3)
    {
        return 3;
    }
    if (i == 4)
    {
        return 4;
    }
    if (i == 5)
    {
        return 5;
    }
    else
    {
        printf("잘못된 번호입니다.\n다시 입력해 주세요.\n\n");
        return num();
    }
}