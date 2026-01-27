// 1-4 문제
// 자동차 주행시간 측정 프로그램
// 거리(km)와 속력(km / h)을 입력받은 후에 시간을 계산하여 출력합니다.단, 다음 조건을 만족하도록 작성합니다.
//
// 조건:
// 거리와 속력인 입력받는 변수는 int형으로 선언하고
// 시간, 분을 저장할 변수도 int형으로 선언합니다.
// 초는 소수점 이하 셋째 자리까지 출력합니다.
//
// # 실행결과 #
// 거리와 속력 입력 : 420 65 (Enter)
// 소요 시가은 6시간 27분.538초입니다."

#include <stdio.h>

int main(void)
{
	int km=0;		// 거리
	int speed=0;	// 속력
	int hour;		// 시간
	int min;		// 분
	double sec;		// 초

	
	
	printf("거리와 속력 입력 : ");
	scanf("%d %d", &km, &speed);

	hour = km / speed;											// km / speed 몫 = 시간	
	min = ((km%speed)*60)/speed;								// km % speed 나머지 = 분
	sec = (((km % speed) * 3600.0) / speed) -(min * 60);		// *** 초 변환시 3600.0처럼 실수형으로 계산하기 ***
	printf("소요 시간은 %d시간 %d분 %.3lf초 입니다.", hour,min,sec);
}