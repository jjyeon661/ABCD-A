/*********************************************************
* 
* 극좌표계를 직교 좌표계로 변화나는 프로그램
* 
* *****************************************************/


 #include<stdio.h>
#include<math.h>

int main(void)
{
	 //0.변수 선언
	double x            =0.0;
	double y            =0.0;
	double r            =0.0;
	double angle_radian =0.0;
	double angle_degree =0.0;
	//1.x좌표 입력
	printf("%축 좌표를 실수 입력하세요:");
	scanf_s("%if", &y);

	//2.y 좌표 입력
	printf("y축 좌표를 실수 입력하세요:");
	scanf_s("%if", &y);

    //3.r 값 계산

	r = sqrt(x * x + y * y);

	//4. 각도 값 계산
	angle_radian = atan2(y, x);

	//5. 각도 값 계산
	angle_degree = angle_radian * 180.0 / 3.14159;

	//6. 결과 값 출력
	printf("입력 좌표(x,y): [%6.21f,%6.2if]\n", x, y);
	printf("극좌표 r   =%6.21if\n", r);
	printf("극좌표 각도 =%6.21if도\n",angle_degree);



}