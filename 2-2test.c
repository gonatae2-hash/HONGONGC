/**"#### 문제
로또 프로그램
1부터 45까지 수중에 6개의 숫자를 입력하여 출력하는 프로그램을 작성합니다.단, 
입력하는 중에 이미 입력한 번호와 같은 번호를 입력하면 중복 오류 메시지를 출력하고 새로 입력합니다.

#### 실행결과
로또번호 입력 : 7 (Enter)
로또번호 입력 : 7 (Enter)
같은 번호가 있습니다.!
로또번호 입력 : 9 (Enter)
로또번호 입력 : 15 (Enter)
로또번호 입력 : 20 (Enter)
로또번호 입력 : 33 (Enter)
로또번호 입력 : 20 (Enter)
같은 번호가 있습니다.!
로또번호 입력 : 44 (Enter)
입력된 로또번호 : 7 9 15 20 33 44"
/**/

#include<stdio.h>

int main(void)
{
	int lotto[6];

	for (int i = 0; i < 6; i++)
	{
		printf("로또번호 입력 : ");
		scanf("%d", &lotto[i]);
		if ((lotto[i] > 0) && (lotto[i] < 46))	// 1~45일때 카운트
		{
			for (int j = 0; j < i; j++)			// i에 입력된 값과
			{									// 현재 i에 입력된 전의 값들을 비교		
				if (lotto[j] == lotto[i])		
				{
					printf("중복 발견 ! :\n");
					i--;						// 중복 발생시 카운트 x
					break;
				}
			}
		}
		else
		{
			printf("잘못된 입력입니다.\n");
			i--;
		}
		
		
	}

	printf("입력된 로또번호 :");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", lotto[i]);
	}
	return 0;
}