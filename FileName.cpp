#include <stdio.h>
#include <math.h>

int main(void)
{
	//0 ��������
	double a1, b1 = 0.0;
	double a2, b2 = 0.0;
	double a3, b3 = 0.0;
	double dot_product = 0.0;

	//1 x������ x��ǥ �Է�
	printf("a1�� ���� �Է��ϼ���:");
	scanf_s("%lf", &a1);

	//2 x������ y��ǥ �Է�
	printf("a2�� ���� �Է��ϼ���:");
	scanf_s("%lf", &a2);

	//3 y������ x��ǥ �Է�
	printf("b1�� ���� �Է��ϼ���:");
	scanf_s("%lf", &b1);

	//4 y������ y��ǥ �Է�
	printf("b2�� ���� �Է��ϼ���:");
	scanf_s("%lf", &b2);

	//5 y������ z��ǥ �Է�
	printf("b2�� ���� �Է��ϼ���:");
	scanf_s("%lf", &a3);

	//6 y������ z��ǥ �Է�
	printf("b2�� ���� �Է��ϼ���:");
	scanf_s("%lf", &b3);


	//7 ���� ���� ���Ѵ�
	dot_product = a1 * b1 + a2 * b2;

	//8 ������� ����Ѵ�
	printf("���� ��� ������� = %lf \n", dot_product);

	return 0;
}