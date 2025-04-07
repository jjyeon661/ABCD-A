/************************************************************
*
*
* 2개의 3차원 벡터로 내적을 구하는 프로그램
*
* *********************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
	//0 변수선언
	double a1, b1 = 0.0;
	double a2, b2 = 0.0;
	double a3, b3 = 0.0;
	double cross_product = 0.0;

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

	//4 x벡터의 z좌표 입력
	printf("b2의 값을 입력하세요:");
	scanf_s("%lf", &a3);

	//4 y벡터의 z좌표 입력
	printf("b2의 값을 입력하세요:");
	scanf_s("%lf", &b3);



	//5 내적 값을 구한다
	cross_product = a1 * b2 + a2 * b1 + a3 * b3;

	//6 결과값을 출력한다
	printf("내적 계산 결과값은 = %lf \n", cross_product);

	return 0;
}