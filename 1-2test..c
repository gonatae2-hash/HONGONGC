//"# 문제
//32767이 소수(prime number)인지 아닌지를 판단하여 출력하는 프로그램을 작성합니다.
//단, 정수를 인수로 받아 소수면 1을 반환하고 소수가 아니면 0을 반환하는 함수를 만들고
//main 함수에서 호출하여 작성합니다.함수명은 prime_check로 합니다.
//
//#실행결과
//소수가 아닙니다.

//#include <stdio.h>
//
//int prime_check(int prime_number);	//정수 반환 void -> int 변경
//
//int main(void)
//{
//	int prime_number = 32767;
//
//
//}
//
//int prime_check(int prime_number)
//{
//	int i=0;
//	if (prime_number < 2) // 1 소수가 아니므로 제외
//	{
//		return 0;
//	}
//	for (i = 2; i*i < prime_number; i++)
//	{
//		if (prime_number % (i * i) == 1)
//		{
//			return 1;
//		}	
//	}
//	return 0;
//}