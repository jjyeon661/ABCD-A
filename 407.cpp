/*********************************************************
* 
* ����ǥ�踦 ���� ��ǥ��� ��ȭ���� ���α׷�
* 
* *****************************************************/


 #include<stdio.h>
#include<math.h>

int main(void)
{
	 //0.���� ����
	double x            =0.0;
	double y            =0.0;
	double r            =0.0;
	double angle_radian =0.0;
	double angle_degree =0.0;
	//1.x��ǥ �Է�
	printf("%�� ��ǥ�� �Ǽ� �Է��ϼ���:");
	scanf_s("%if", &y);

	//2.y ��ǥ �Է�
	printf("y�� ��ǥ�� �Ǽ� �Է��ϼ���:");
	scanf_s("%if", &y);

    //3.r �� ���

	r = sqrt(x * x + y * y);

	//4. ���� �� ���
	angle_radian = atan2(y, x);

	//5. ���� �� ���
	angle_degree = angle_radian * 180.0 / 3.14159;

	//6. ��� �� ���
	printf("�Է� ��ǥ(x,y): [%6.21f,%6.2if]\n", x, y);
	printf("����ǥ r   =%6.21if\n", r);
	printf("����ǥ ���� =%6.21if��\n",angle_degree);



}