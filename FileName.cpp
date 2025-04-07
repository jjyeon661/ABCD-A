#include <stdio.h>
#include <math.h>

int main(void)
{
	//0 변수선언
	double a1, b1 = 0.0;
	double a2, b2 = 0.0;
	double a3, b3 = 0.0;
	double dot_product = 0.0;

	//1 x벡터의 x좌표 입력
	printf("a1의 값을 입력하세요:");
	scanf_s("%lf", &a1);

	//2 x벡터의 y좌표 입력
	printf("a2의 값을 입력하세요:");
	scanf_s("%lf", &a2);

	//3 y벡터의 x좌표 입력
	printf("b1의 값을 입력하세요:");
	scanf_s("%lf", &b1);

	//4 y벡터의 y좌표 입력
	printf("b2의 값을 입력하세요:");
	scanf_s("%lf", &b2);

	//5 y벡터의 z좌표 입력
	printf("b2의 값을 입력하세요:");
	scanf_s("%lf", &a3);

	//6 y벡터의 z좌표 입력
	printf("b2의 값을 입력하세요:");
	scanf_s("%lf", &b3);


	//7 내적 값을 구한다
	dot_product = a1 * b1 + a2 * b2;

	//8 결과값을 출력한다
	printf("내적 계산 결과값은 = %lf \n", dot_product);

	return 0;
}