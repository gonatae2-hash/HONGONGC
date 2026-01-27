//자신의 학번, 이름 학점을 출력하는 프로그램이 완성되도록

//#include <stdio.h>
//int main(void)
//{
//	printf("학번 :%d\n",32165 );
//	printf("이름 :%s\n","홍길동");
//	printf("학점 :$c\n","A");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int a;
//
//	a = 424967295;
//	printf("%d\n", a);
//	a = -1;
//	printf("%u\n", a);
//
//	return 0;
//}

//국어, 영어 수학 점수를 저장할 변수 (kor,eng,mat)를 선언하고 각각 70,80,90점으로 초기화

//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 70, eng = 80, mat = 90;
//	int tot;
//	
//	tot = kor + eng + mat;
//		printf("국어:%d 영어:%d 수학:%d\n", kor,eng,mat);
//		
//		printf("총점:%d\n", tot);
//		return 0;
//}
// scanf("%d",&a)

//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//
//	scanf("%d", &a);
//	printf("입력된 값 : %d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
////int main(void)
////{
////	char ch;
////
////	printf("문자 입력 : ");
////	scanf("%c", &ch);
////	printf("%c문자의 아스키 코드 값은 %d입니다.",ch,ch);
////
////}
//
//#include <stdio.h>

//int main(void)
//{
//	int a = 10, b = 20;
//	int res = 2;
//
//	a += 20; //a와 20을 더한 결과를 다시 a에 저장(+=)
//	res *= b + 10; //b에 10을 더한 결과값을 res에 곱하고 다시 res에 저장
//
//	printf("a=%d,b =%d", a, b);
//	printf("res=%d\n", res);
//	return 0;
//
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 10, b = 20, res;
//	res = (a > b) ? a : b;
//	printf("큰 값: %d\n", res);
//	return 0;
//}

 //short 형과 long형의 자료형 크기를 배교해 크기가 큰 자료형이 무엇인지 출력하세요
//#include <stdio.h>
//int main(void)
//{
//	int res;
//	short a;
//	long b;
//
//	a = sizeof(a);
//	b = sizeof(b);
//
//
//	res = (a > b)
//		? printf("a")
//		: printf("b");
//	
//	return 0;
//
//}

//야구 좌석수 70개 입장객 수 65명일때 입장률을 표시하는 프로그램

//#include <stdio.h>
//
//int main(void)
//{
//	int seat=70;
//	int audience=65;
//	double rate;
//	
//	rate = (double)audience / (double)seat*100;
//
//	printf("%.1f %%",rate);
//}

//3.76시간은 몇 시간 , 몇 분, 몇 초인지 출력하는 프로그램

//#include<stdio.h>

//int main(void)
//{
//	int hour, min, sec;
//	double time = 3.76;
//
//	hour = (int)time;
//	printf("%d\n",hour);
//	min = (time - hour) * 60;
//	printf("%d\n",min);
//	sec = ((time - hour) * 60 - min) * 60;
//	printf("%d\n", sec);
//	printf("%.2f시간은 %d시간 %d분 %d초입니다", time, hour, min, sec);
//}
//

//"p148 도전 실전 예제
//체중(kg)과 키(cm)를 입력해 BMI(신체질량지수)를 구한 후 BMI의 값이 20.0이상 25미만이면 ""표준입니다.""를 출력하고 그렇지 않으면 ""체중관리가 필요합니다.""를 출력합니다.
//BMI는 표준체중, 저체중, 과체중을 판별하는 수치로 몸무게를 키의 제곱으로 나누어 구합니다.이때 키는 미터(m)단위로 계산합니다.

//실행결과
//몸무게(kg)과 키(cm) 입력 : 66 185.6
//체중관리가 필요합니다."

//#include<stdio.h>
//
//int main(void)
//{
//	double kg;
//	double cm;
//	double BMI;
//
//	printf("몸무게를 입력하세요:");
//	scanf("%lf", &kg);
//	printf("키를 입력하세요:");
//	scanf("%lf", &cm);
//	BMI = kg / ((cm/100) * (cm/100));
//	printf("%.1lf\n",BMI);
//	((BMI >= 20) && (BMI <= 25))
//		? printf("표준입니다.\n")
//		: printf("체중관리가 필요합니다.");
//}
//

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 20;
//	int b = 0;
//
//	if (a > 10);
//	{
//		b = a;
//	}
//	printf("a:%d, b:%d", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 10;
//
//		if (a >= 12)
//		{
//			a = 1;
//		}
//		else
//		{
//			a = -1;
//		}
//		printf("a:%d\n", a);
//
//		return 0;
//}
//

//#include<stdio.h>
//int main(void)
//{
//	int chest = 150;
//	char size;
//	if (chest <= 90)
//	{
//		size = 'S';
//	}
//	else if ((chest > 90) && (chest <= 100))
//	{
//		size = 'M';
//	}
//	else
//	{
//		size = 'L';
//	}
//	printf("size : %c",size);
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 20, b = 10;
//
//	if (a > 10)
//	{
//		if (b >= 0)
//		{
//			b = 1;
//		}
//		else
//		{
//			b = -1;
//		}
//	}
//
//	printf("a : %d, b : %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 10, b = 20;
//
//	if (a < 0)
//	{							//
//		if (b > 0)
//		{
//			printf("ok");
//		}
//	}							//중괄호를 없애면 else가 가장 가까운 if문이랑 연결됨**생략 x
//	else
//	{
//		printf("ok");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int rank = 1, m = 0;
//
//	switch (rank)
//	{
//	case 1:
//		m = 300;
//		break;
//	case 2:
//		m = 200;
//		break;
//	case 3:
//		m = 100;
//		break;
//	default:
//		m = 10;
//		break;
//	}
//	printf("m : %d", m);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	printf("정수 입력 : ");
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("거짓");
//		break;
//	default:
//		printf("참");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a, b, d ;
//	char c;
//	printf("사칙연산 입력(정수): ");
//	scanf("%d%c%d", &a, &c, &b);
//	if (c == '*')
//	{
//		d = a * b;
//		printf("%d", d);
//	}
//	else if (c == '+')
//	{
//		d = a + b;
//		printf("%d", d);
//	}
//	else if (c == '-')
//	{
//		d = a - b;
//		printf("%d", d);
//	}
//	else if (c == '/')
//	{
//		d = a / b;
//		printf("%d", d);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int cnt=0;
//	printf("횟수를 입력하세요:");
//	scanf("%d", &cnt);
//	while (i < cnt)
//	{
//		printf("Be happy\n");
//		i = i + 1;
//	}
//	return 0;

//}

//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int cnt = 0;
//	printf("횟수를 입력하세요:");
//	scanf("%d", &cnt);
//	for (i; i < cnt; i = i + 1)
//	{
//		printf("be happy\n");
//	}
//	return 0;
//}