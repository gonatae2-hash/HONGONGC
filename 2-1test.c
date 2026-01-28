//"#### 문제
//다섯 명의 심사위원 점수를 입력하여 유효점수와 평균을 출력하는 프로그램을 작성합니다.
// 유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.
//
//#### 실행결과
//5명 심사위원의 점수 입력 : 7 9 4 8 5
//유효점수 : 7 8 5
//평균 : 6.7 "

#include <stdio.h>


int main(void)
{

	int score[5];
	int i;
	double average;
	int total=0;

	printf("5명 심사위원의 점수 입력 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	int max = score[0];					// max값을 초기 입력값으로 지정
	int min = score[0];					// min값을 초기 입력값으로 지정

	for (i = 0; i < 5; i++)
	{
		if (score[i] > max)				// max(초기 입력값)과 score[i]값 비교
		{
			max = score[i];				// max를 더 큰 값으로 변환
		}
		if (score[i] < min)				// min(초기 입력값)과 score[i]값 비교
		{
			min = score[i];				// min를 더 작은 값으로 변환
		}
	}

	int a = 0;							// 유효 점수의 갯수 카운트
	printf("유효 점수 : ");
	for (i = 0; i < 5; i++)
	{
		if ((score[i] != max) && (score[i] != min))
		{
			printf("%d ", score[i]);
			total = total + score[i];	// 유효 점수 총합
			a = a + 1;
		}
	}
	average = (double)total / a;				// 평균 = (유효 점수 총합 / 유효 점수 갯수)
	printf("\n평균 점수 : %.1lf", average);
}

