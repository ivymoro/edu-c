#include <stdio.h>
#pragma warning (disable:4996)

/*
head(�Ӹ�)
main => �̸�
() => ������ ������ ����
   => �����Լ������� ����
0, => �����ִ� ��(return)�� ����
*/

/*
���α׷� �ۼ� (edit) > �ҽ����� > ����� ��ȯ
���α׷� ���� (compifle) : Compiler
��ũ(link)
����
*/

int main()
{
	//printf("god morning!!");

	// ������ ����
	//int a = 10; // �����ϰ� �ʱ�ȭ, int�� ������ ���� �����
	//int b; // ����
	//b = 20; // �ʱ�ȭ

	//printf("a�� %d�̴�\n.", a); //������ ��ȯ���ڿ��� d, �ٹٲ��� \n

	//int a = 10;  //������
	//double b = 10.5; //�Ǽ���
	//char c = 'C'; //���Ϲ���, %c
	//char d[10] = "ABCD"; //���ڿ�(���ڹ迭)
	//char e = "E"; // ���Ϲ��ڶ� " "�� �Է��ϸ� ���ڿ��� �ν�, %s

	//printf("%lf\n", b);
	//printf("%c\n", c);
	//printf("%s\n", d); //��ȭ���ڿ��� s

	//int a1;
	//a1 = 10;
	//int a2 = 20;

	//char c1 = 'c';
	//c1 = 'c';
	//char c2 = 'C';
	//printf("%c\n", c2);

	//char d1[10] = "ABCD";
	//char d2[10] = "ABCD";
	//d2 = "EFGH:" // ���ڿ��� ����� �ʱ�ȭ
	//printf("%s\n", d1);

	//�پ��� �ڷ��� ���
		//int n = 10;
		//double db = 16.8;
		//char ch = 'a';
		//char name[10] = "park";

		//a = 10, 10 = a

		//printf("10\n");
		//printf("������ ���� %d\n", n);
		//printf("������ ��� %d\n", 10);
		//printf("������ ���� %d\n", 10 / 3); // 3(�� ������)
		//printf("������ ���� %d\n", n / 3); // 3(�� ������)

		//printf("10.8\n");
		//printf("�Ǽ��� ���� %lf\n", db);
		//printf("�Ǽ��� ��� %lf\n", 16.8);
		//printf("�Ǽ��� ���� %lf\n", 16.8 / 3); // 5.600000
		//printf("�Ǽ��� ���� %lf\n", db / 3); // 5.600000

		//printf("���� > ������ ���� ���: %d\n", n / 3);			// 3
		//printf("���� > �Ǽ��� ���� ���: %lf\n", 10 / 3);		// 0.000000	 ... lf�� ������ ������ ������ 0.000000�̴�.
		//printf("�Ǽ� > �Ǽ��� ���� ���: %lf\n", 10.0 / 3.0);	// 3.333333
		//printf("�Ǽ� > ������ ���� ���: %d\n", 10.0 / 3.0);	// -1431241283917 (����)
		//printf("���� > ������ ���� ���: %d\n", (int)(10.0 / 3)); // 3	 ... ��������ȯ

	/*int a = 10;
	a = 11;
	a = 12;
	printf("%d\n", a);*/

	//������ ���
	// ��ȯ���ڿ�: %d
	//printf("%d\n", 10);
	//printf("%d , %d\n", 10, 20);
	//printf("%d\n", 10 + 20);

	//10�� 20�� ���� 30�Դϴ�.
	//printf("%d�� %d�� ���� %d�Դϴ�.", 10, 20, 30);

	// ����: ������ ����
	// ����, ���, ����� ����

	// ���� ����
	// ����(������ ���� ����)
	// �ʱ�ȭ (���� ����� ���ÿ� ���� ����)
	// ����: �����͸� ���� �� �� �ִ� �޸��� ������
	// ex) int a;
	// => compiler���� ����(�ڷ���, int, ...), �̸�(a)
	// int : �����(�������� �����ϱ� ���� �����)
	// ����(����) : ���� ������(=), ==
	// a(����, ����� ����) = 10(����� ��)
	// ���� = ���; a = 10
	// ���� = ���� ; b = a
	// ��� = ���; (X)
	// ��� = ����; (x)
	// �������� ���� ���� ������ ����

	// Ű���� �Է�
	// scanf �Լ�
	// ������ �ϳ� �Է�
	// #pragma warning (disable:4996)
	//int a; 
	//scanf("%d", &a); //&:������(&,*,**,*&....)
	//printf("%d", a);

	//int num1, num2;
	//scanf("%d", &num1);
	//scanf("%d", &num2);
	//printf("%d %d", num1, num2);

	//int num3, num4;
	//scanf("%d%d",&num3, &num4);
	// ����, �ٹٲ�, ���ʿ��� ���ڿ��� ������� ����
	//printf("%d , %d", num3, num4);

	//char a, b;
	//sscanf("%c%c", &a, &b);
	//scanf("%c %c", &a, &b); //���� �Է� ���̿����� ������
	//printf("%c, %c", a, b);

	//���α׷� �ۼ�����
	// ��������
	// ������ �Է�
	// ������ ó��(����)
	// ������ ���

	//�ĺ���: ������, �Լ���
	//���ĺ� ��ҹ���, A~Z, a~z => ��ҹ��ڴ� ���� �ٸ� �ĺ���
	//����: 0~9
	//Ư����ȣ: _(underline)
	//ù���ڿ��� ���ڰ� �� �� ����
	//�����(int, double...) ���Ұ�
	//=> if, else, for, break, return....

	// �޿����
	// ���� 100��, ���ʽ� 50��
	// ���� 9%
	// �Ǽ��ɾ��� .... ���Դϴ�.
	/*int bonbong, bonus, total;
	double tax = 0.09;
	double total_tax, real_income;
	bonbong = 100;
	bonus = 50;
	total = bonbong + bonus;
	total_tax = total * tax;
	real_income = total - total_tax;
	printf("�Ǽ��ɾ��� %lf���Դϴ�", real_income);*/

	// ����, �������
	// ������: + - * /
	// �ǿ�����: ����, ���
	// a(�ǿ�����) +(������) 10(�ǿ�����)

	// �ڵ�����ȯ
	// 10 + 20.0 = 30.0
	// 10(����) + 20.0(�Ǽ�) = 30.0(�Ǽ�)
	// => 10.0 (�Ǽ���: �ڵ�����ȯ) + 20.0(�Ǽ�) = 30.0(�Ǽ�)
	//printf("10+20.0=(����)%d\n", 10 + 20.0);
	//printf("10+20.0=(�Ǽ�)%lf\n", 10 + 20.0);

	// ���ڵ�����
	// ����(���ڻ��)�� ' '�� ��� ǥ��
	// ���ڻ���� ũ�� : 1����Ʈ
	//printf("%c\n", 'A');
	//printf("%d\n", 'A'); //65: 0100 0001

	/*int num;
	num = 'A';
	printf("%d\n", num);*/

	//char a;
	//a = 65;
	//printf("%c\n", a);
	//printf("%d\n", a);

	// ������ 4����Ʈ, �Ǽ��� 8����Ʈ
	// ���ڿ� ���� ������
	//char a = 123, b = 124, c = 125, d = 126, e = 127, f = 128, g = 129;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);
	//printf("%d\n", e);
	//printf("%d\n", f);
	//printf("%d\n", g);

	//printf("%d����Ʈ\n", sizeof(10)); // �����ϱ� 4����Ʈ
	//printf("%d����Ʈ\n", sizeof(10.0)); //�Ǽ��ϱ� 8����Ʈ
	//printf("%d����Ʈ\n", sizeof('A')); // ������ ���� 4����Ʈ
	//printf("%d����Ʈ\n", sizeof("A")); // ���� ���� + ���� 1��

	//���ڿ�
	//���ڹ迭 => ���ڿ�
	//���ڿ� ��� => " " �� ��� ǥ��
	//char string[5];
	//printf("%d", sizeof(string));
	//string = "ABCD"; // ���ڿ� ������ ����� ���ÿ� �ʱ�ȭ

	// ���̸��� �Է��ϼ���
	// ��������п� 
	// �̹����� ��������п��Դϴ�.
	//printf("���̸��� �Է��ϼ���\n");
	//char station[20]; //�迭���� ��ü�� ������
	//scanf("%s", &station);
	//scanf("%s", station);
	//printf("�̹� ���� %s�Դϴ�.\n", station);

	// ������ ������ �Է°��� �ٸ����� ���� ������ ����
	//int a;
	//a = 2.5;
	//printf("%d\n", a);
	//printf("%lf\n", a);

	//int a;
	//double b, c;
	//a = 10 / 4;
	//b = 10 / 4;
	//c = 10 / 4, 0;
	//printf("%d\n", a);
	//printf("%lf\n",b);
	//printf("%lf\n",c);

	//int a, b;
	//a = 100 / 30; // �� ������
	//b = 100 % 30; //������ ������
	//printf("%d\n", a);
	//printf("%d\n", b);

	//double a, b;
	//a = 100.0 / 30; // �Ǽ��������� �ܼ� ������
	//b = 100.0 % 30; // �Ǽ������� % ��� �Ұ�, �������� ���������� ����
	//printf("%lf\n", a);
	//printf("%d\n", b);

	//1. ���Ǳ� �ܵ� ���
	// Ŀ�� ���ܿ� 250��
	// 1000���� ���������� �ܵ� �ݾ�
	// �Ž����� ���޽� �ּ� ������ �޴� ���
	// 500�� 1��, 100�� 2��, 50�� 1��
	//int FiveHun = 0, OneHun = 0, Fift = 0, ten = 0;
	///*FiveHun = (1000 - 250) / 500;
	//OneHun = (1000 - 250 - FiveHun * 500) / 100;
	//Fift = (1000 - 250 - FiveHun * 500 - OneHun * 100) / 50;
	//ten = (1000 - 250 - FiveHun * 500 - OneHun * 100 - Fift * 50) / 10;*/
	//FiveHun = (1000 - 250) / 500;
	//OneHun = (1000 - 250) % 500 / 100;
	//Fift = (1000 - 250) % 100 / 50;
	//ten = (1000 - 250) % 50 / 10;
	//printf("500�� %d��\n100�� %d��\n50�� %d��\n10�� %d��", FiveHun, OneHun, Fift, ten);

	// Ŀ�� �ݾװ� Ŀ���ܼ�, ���� �ݾ� �Է�
	/*int cocost = 0, cocount = 0, cost = 0, restcost = 0;;
	int FiveHun = 0, OneHun = 0, Fift = 0, ten = 0;
	printf("Ŀ�� �ݾ�, Ŀ�� �ܼ�, ���Աݾ��� �Է��Ͻÿ�\n");
	scanf("%d %d %d", &cocost, &cocount, &cost);
	restcost = cost - cocost * cocount;
	FiveHun = restcost / 500;
	OneHun = restcost % 500 / 100;
	Fift = restcost % 100 / 50;
	ten = restcost % 50 / 10;
	printf("\n500�� %d��\n100�� %d��\n50�� %d��\n10�� %d��\n\n", FiveHun, OneHun, Fift, ten);*/

	// ����� ���
	//int grad, empl;
	//double percentage;
	//printf("���������� ����ڼ��� �Է��Ͻÿ�\n");
	//scanf("%d %d", &grad, &empl);
	////percentage = empl / grad * 100.0; // �򿬻��ڿ��� 0(����/����) * 100�̾ Ʋ��
	//percentage = empl / (double)grad * 100.0;
	//printf("������� %lf�Դϴ�.", percentage);���� �Ǽ� ������ ����

	//0.375�ð��� ��� �����ΰ�
	/*double time;
	int m, s;
	printf("�а� �ʷ� ���� �ð��� �Է��ϼ���\n");
	scanf("%lf", &time);
	m = time * 60;
	s = (time * 60-m)*60;
	printf("%.4lf�ð��� %d�� %d���Դϴ�\n", time, m, s);*/


	//1�� 365.2422�� / ��,�ð�,��,��
	//double annual = 365.2422;
	//int day, hour, m, s;
	//day = annual;
	//annual = annual - day; //0.2422
	//annual = annual * 24;
	//hour = annual;
	//annual = annual - hour; //0.2422
	//annual = annual * 60;
	//m = annual;
	//annual = annual - m; //0.2422
	//annual = annual * 60;
	//s = annual;
	//annual = annual - s; //0.2422
	//annual = annual * 60;
	//printf("1���� %d�� %d�ð� %d�� %d��\n", day, hour, m, s);

	//���迬��
	// a == b, a != b, a > b, a < b
	// ������
	// ������: !: ����
	// ����: &&(&, and): ��� ���̸� ��
	// ����: ||(|, or): �ϳ��� ���̸� ��

	//int a = 10;
	//printf("%d\n", a >= 20); // �����̹Ƿ� 0�� ����
	//printf("%d\n", a == 10); // ���̹Ƿ� 1�� ����
	//printf("%d\n", a != 10); // �����̹Ƿ� 0�� ����
	//printf("%d\n", a > 5 && a <= 15); // ���̹Ƿ� 1�� ����
	//printf("%d\n", a > 5 && a <= 8); // �����̹Ƿ� 0�� ����
	//printf("%d\n", a > 5 || a <= 15); // ���̹Ƿ� 1�� ����
	//printf("%d\n", a > 5 || a <= 8); // ���̹Ƿ� 1�� ����
	//int b;
	//b = a > 5 && a <= 15;
	//printf("%d\n", b);
	//printf("������:%d\n", !(a > 0));
	//printf("%d\n", a > 0 && 3.2); //3.2�� ��(1)�� ���� (0�̿��� �������� ���� ��)
	//printf("%d\n", 0 && 1);
	//printf("%d\n", 1 && 0);
	//printf("%d\n", 1 || 0);

	//���Կ��� : =, +=, -=, *=, /=...
	//���Կ����� �⺻�� �����ʿ��� ���� �������� ����
	/*int a = 2, b = 3, c = 4;
	a = b = c;
	printf("a=b=c:%d", a);*/
	//int a = 1;
	//a = a + 3; // a+=3
	//printf("%d\n", a);

	// ����������(++) ���ҿ�����(--)
	//int a = 1;
	//a = a + 1;
	//printf("%d\n", a);
	//a++; //��ġ(�����ٷ� �Ѿ�鼭 ����) ��������
	//++a; //��ġ(��� ����) ��������
	//printf("%d\n", a);

	//int a = 1;
	//a++;

	//////// 12.23 ***************************************************************************************************************************

	//printf("12345678901234567890\n");
	//printf("%d\n", 1234);
	//printf("%5d\n", 1234);
	//printf("%-5d\n", 1234);
	//printf("%5d\n", 123456);
	//printf("\t%d\n", 1234);		// \t = tab
	//printf("\t%d\t%d\n", 1234, 5678);
	//printf("\t%d\t%d\n", 123456789, 5678);



	//printf("%lf\n", 3.14);	// lf ������ �Ҽ��� �Ʒ� 6�ڸ�����
	//printf("%.2lf\n", 3.14);
	//printf("%10.2lf\n", 3.14);



	//printf("abcd\n");
	//printf("%s\n", "abcd");
	//printf("%s\n", "abcd efg");
	//printf("%10s\n", "abcd efg");
	//printf("%.1s\n", "abcd efg");
	//printf("%.2s\n", "abcd efg");
	//printf("%10.3s\n", "abcd efg");



	//printf("%c\n", 'a');
	//printf("%c%c\n", 'a', 'b');
	//printf("%c     %c\n", 'a', 'b');
	//printf("%5c%3c\n", 'a', 'b');
	//printf("%c%5c\n", 'a', 'b');
	//printf("%-3c%3c\n", 'a', 'b');   // 3ĭ Ȯ�� �� ���� Ȥ�� ������ ����


	/*
	printf("%d\n", 1234);
	printf("%d\n", -1234);
	printf("%d\n", +1234);  // - ��ȣ�� �ٸ���, + ��ȣ�� �����ȴ�
	printf("%+d\n", 1234);	// + ��ȣ�� ����ϴ� ���
	*/

	/* ���� ����
		1. �й��� �̸� �Է�
		2. ����, ����, ���� ���� �Է�
		3. ������ ���
		|
		|	 �̸�	|	����  | ����  |
		|------------------------------------------------------
			ȫ�浿		90		75		80		000		00.0
		|
	*/

	/*  ��������
	char name[10];
	int kor, eng, mat, sum;
	double avg;
	printf("�̸��� �Է��ϼ���:");
	scanf("%s", &name);
	printf("���������� �Է��ϼ���:");
	scanf("%d", &kor);
	printf("���������� �Է��ϼ���:");
	scanf("%d", &eng);
	printf("���������� �Է��ϼ���:");
	scanf("%d", &mat);
	sum = kor + eng + mat;
	avg = sum / 3.0;				// ���� ������ ���� = ���� ����.   ���� ������ �Ǽ��� �ؾ� ����� �����.
	printf("|--------|--------|--------|--------|--------|--------|\n");
	printf("|  �̸�  |  ����  |  ����  |  ����  |  ����  |  ���  |\n");
	printf("|--------|--------|--------|--------|--------|--------|\n");
	printf("| %s %7d %8d %8d %8d %8.1lf \n", name, kor, eng, mat, sum, avg);
	printf("|--------|--------|--------|--------|--------|--------|\n");
	*/

	/* ��������
	double left, right;
	char sex;
	printf("��, �� �÷��� �Է��ϼ��� : ");
	scanf("%lf %lf", &left, &right);
	//scanf("%lf", &right);
	printf("������ �Է��ϼ��� (M / F) : ");
	scanf(" %c", &sex);					///////		 ���� "%c"�� ���� ���� ���� �Ѵٸ� �ռ� ����ڰ� �Է��� enter�� scanf�� �ԷµǾ������.
											//		�׷��� ���⸦ ���ִ� ���̴�. %s �μ� ������ �ذ��� ���� �ִ�.
	printf("���� : %c, �÷�(��,��) : %.2lf, %.2lf", sex, left, right);
	//*/

	/* ���Ĺ���
	printf("\t123456\t78901234567890\n");
	printf("\t123456\t7890\"12345\"678\\90\n");		// " \ �� ����ϴ� ���
	printf("100%%\n");		//  % �� ����ϴ� ���
	//*/

	/* ��������
	double weight, height, bmi;
	printf("������(kg)�� Ű(m)�� �Է��ϼ���:");
	scanf("%lf %lf", &weight, &height);
	bmi = weight / height / height;
	printf("����� bmi�� %.1lf%%�Դϴ�.\n", bmi);
	//*/

	// ���� ��ȯ
	//10,		 2,   8,			16
	//0~9,	0~1	 0~7	 0~9,a,b,c,d,e,f
	/*
	printf("10���� ��� 12 : %d\n", 12);
	printf("8���� ��� 014 : %d\n", 014);		//  8���� ���� �տ� 0�� ���δ�. �� ������ 014�� 12�� ��µ�.
	printf("16���� ��� c : %d\n", 0xc);		//  16���� : 0x �� ���δ�.
	printf("10���� 12�� 10������ ǥ�� : %d\n", 12);
	printf("10���� 12�� 10������ ǥ�� : %#d\n", 12);
	printf("10���� 12�� 8������ ǥ�� : %o\n", 12);		// %o : 8����
	printf("10���� 12�� 8������ ǥ�� : %#o\n", 12);		// %#o	... 014�� ��µ�
	printf("10���� 12�� 16������ ǥ�� : %x\n", 12);		// %x : 16����
	printf("10���� 12�� 16������ ǥ�� : %#x\n", 12);	// %#x	... 0xc�� ��µ�
	//*/ //d:Decimal, o:Octal, x:heXa-decimal

	/* 12�� �� �������� �Է¹��� �� ���� �ԷµǴ� ��
	int val;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &val);		// 10���� �Է�
	printf("val=%d\n", val);
	printf("val=%#o\n", val);
	printf("val=%#x\n", val);
	//*/

	//int val;
	//scanf("%d", &val);
	//printf("val=%d\n", val);
	//scanf("%o", &val);
	//printf("val=%d\n", val);		// 8���� ������ 10������ ��ȯ�Ͽ� ���. %d�� �߱� ����.
	//scanf("%x", &val);
	//printf("val=%d\n", val);


	// ���� 122p ������ �켱���� review

	// chapter 07. ���ǹ�
	// 
	// if��
	//if (���ǽ�)
	//{
	//	���๮;
	//}

	//if (���ǽ�) { ���๮1; }
	//else { ���๮2; }

	//if (���ǽ�) {
	//	���๮1;
	//	���๮2;
	//}

	//int a = 4;
	//if (a > 5)	
	//	printf("%d", a);		// ���๮�� 1���̸� �߰�ȣ ���� ����

	//���� if ���� ����
	//int n;
	//printf("������ �Է��ϼ��� :");
	//scanf("%d", &n);
	//if (n >= 90) {
	//	printf("A\n");
	//}
	//else {
	//	if (n >= 80) {
	//		printf("B");
	//	}
	//	else {
	//		if (n >= 70) {
	//			printf("C");
	//		}
	//	}
	//}

	////�ߺ� if
	////a,b �Է� => a>=10, b>=10
	////�Ѵٸ���:����, �ϳ�������:����, ��������:������
	//int a, b;
	//printf("a,b�� �Է��ϼ��� :");
	//scanf("%d%d", &a, &b);
	//if (a >= 10) {
	//	if (b >= 10) printf("����\n");
	//	else printf("����\n");
	//}
	//else {
	//	if (b >= 10) printf("����\n");
	//	else printf("������\n");
	//}

	// ������(kg), Ű(m) �Է�
	// bmi (������/Ű^2)
	// ����� bmi 00.0%�Դϴ�.
	// bmi<20:��ü��	bmi>=25:��ü��	����:ǥ��
	// ����� ü���� ()�Դϴ�.
	//double w, h, bmi;
	//printf("������(kg)�� Ű(m)�� �Է��ϼ��� :");
	//scanf("%lf%lf", &w, &h);
	//bmi = w / h / h;
	//printf("����� bmi�� %.1f%%�̸�", bmi);
	//printf("����� ü���� ");
	//if (bmi < 20) printf("��ü��");
	//	else if (bmi >= 25) printf("��ü��");
	//	else printf("ǥ��");
	//printf("�Դϴ�");

	//2. �� �� ������ ��쿡�� ����
	//int a, b;
	//printf("a,b�� �Է��ϼ��� :");
	//scanf("%d%d", &a, &b);
	//if (a >= 10 && b >= 10) printf("����");
	//else if(a>=10||b>=10) printf("����");
	//else printf("������");

	// ������ �Է� ���� ���
	//int a;
	//printf("������ �Է��ϼ��� : ");
	//scanf("%d", &a);
	//if (a >= 0) a = a;
	//else a = -a;
	//printf("�Է��� ������ ������ %d �Դϴ�", a);

	// ����� ���
	//int age;
	//printf("���� :");
	//scanf("%d", &age);
	//printf("����� :");
	//if (age <= 6 || age >= 70) printf("����");
	//else printf("3,000��");

//switch ~case ����
//1 => a, 2 => b, 3 => c;etc => f�� ���
//int n;
//printf("���� �Է��Ͻÿ� :");
//scanf("%d", &n);
//if (n == 1) printf("a");
//else if (n == 2) printf("b");
//else if (n == 3) printf("c");
//else printf("f");
// �� ���α׷��� switch-case ��������
//int n;
//scanf("%d", &n);
//switch (n) {
//case 1:	//if(n==1)
//	printf("a");
//	break;	//switch-case���� ��������. break; �� ���ٸ� ���� ������ �����
//case 2:	//if(n==2)
//	printf("b");
//	break;
//case 3:	//if(n==3)
//	printf("c");
//	break;
//default:	//else ����
//	printf("f");
//}

// ����
//int n;
//printf("�г��� �Է��ϼ��� :");
//scanf("%d", &n);
//switch (n) {
//case 1: printf("��ϱ� : 130����");
//	break;
//case 2:										// 2,3�г��� ���� ����̹Ƿ�
//case 3: printf("��ϱ� : 100����");
//	break;
//case 4: printf("��ϱ� : 110����");
//	break;
//default: printf("�ùٸ� �г��� �Է��Ͻÿ�");
//}

// if ������ ������ �������� �̶�� switch ������ ������ Ư�� �������� Ȯ���ϴ� ���ǹ��̸� break�� ������ ��� �˻縦 �����Ѵ�.

// �ΰ��� ���ڿ� ��Ģ������ �Է¹޾� ��� ��� @@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 0.5 + 0.7 => 0.5,+,0.7
//double x, y, res;
//char op;
//printf("������� �Է��ϼ��� :");
//scanf("%lf%c%lf", &x,&op, &y);					// �Է� �� 3.4+1.2 �� ���� ���� ���������� �ᵵ ����ó���ȴ�.
//printf("�Է¿���� : %.1lf %c %.1lf\n", x, op, y);
//switch (op) {
//case '+':
//	res = x + y;
//	printf("%.1lf %c %.1lf = %.2lf", x, op, y, res);
//	break;
//case '-':
//	res = x - y;
//	printf("%.1lf %c %.1lf = %.2lf", x, op, y, res);
//	break;
//case '*': 
//	res = x * y;
//	printf("%.1lf %c %.1lf = %.2lf", x, op, y, res);
//	break;
//case '/': 
//	res = x / y;
//	printf("%.1lf %c %.1lf = %.2lf", x, op, y, res);
//	break;
//default: printf("�ùٸ� ��Ģ������ �Է��ϼ���");
//	break;
//}
//
//	return 0;
//}

//// �ݺ���
//// �ʱ��, ���ǽ�, ������
//// for, while, do~while
//// break, continue

// for
/*
for(�ʱ��;���ǽ�;������) {
	���๮1;
	���๮2;
	...
}

������� : �ʱ�� > ���ǽ� > (������ ���� ���) ���๮ > ������ >
					���ǽ� > ...
			���ǽ��� ������ ���, ��� for���� �������´�.
*/

//while
/*
while(���ǽ�) {
���๮1;
���๮2;
...
}

������� : �ʱ�� > ���ǽ� > (������ ���� ���) ��ȣ �� ����
					���ǽ� > ...
					������ �����̸� ��� ������ �������´�
*/

//do-while
/*
�ʱ��
do{
������1;
���๮1;
�߰���2;
���๮2;
...
}
while(���ǽ�); -----------------------�� ���� �Ȱ�


*/

//1~10 ����ϴ� �������� ���
//	for (int i = 1;i <= 10;i++) {
//		printf("%d ", i);
//	}
//
//	int j = 1;
//	while (j <= 10) {
//		printf("%d ", j);
//		j++;
//	}
//
//	int k = 1;
//	do {
//		printf("%d ", k);
//		k++;
//	} while (k <= 10);

// 1~10 �� : 55
//int sum = 0;
//for (int i = 1; i <= 10; i++) {
//	sum = sum + i;					// sum += i; �ε� �� �� �ִ�
//}
//printf("1~10 ���� %d\n", sum);
//
//int j = 1;
//sum = 0;
//while (j <= 10) {
//	sum += j;
//	j++;
//}
//printf("1~10 ���� %d\n", sum);
//
//int k = 1;
//sum = 0;
//do {
//	sum = sum + k;
//	k++;
//} while (k <= 10);
//printf("1~10 ���� %d", sum);



// ���ѹݺ���
// for(;;)
// while(1)

//int sum = 0;
//for (int i = 1;i <= 100;i++); {
//	if (i > 10) {
//		break;
//	}
//	sum += i;
//}
//printf("1~10�� ��:%d", sum);

//int sum = 0;
//int i = 1;
//for (;;) {
//	if (i > 10) {
//		break;
//	}
//	sum += i;
// i++;
//}
//printf("1~10�� ��:%d", sum);

//int sum = 0;
//int i = 1;
//while (1) {
//	if (i > 10) {
//		break;
//	}
//	sum += i;
//	i++;
//}
//printf("1~10�� ��:%d", sum);

//1~100 Ȧ���� ��
//int sum = 0;
//for (int i = 1;i <= 100;i++) {
//	if (i % 2 == 1) {
//		sum += i;
//	}
//}
//printf("1~100 Ȧ���� ���� %d", sum);

//int sum = 0;
//for (int i = 1;i <= 100;i+=2) {
//		sum += i;
//}
//printf("1~100 Ȧ���� ���� %d", sum);

//int sum = 0;
//for (int i = 1;i <= 100;i++) {
//	if (i % 2 == 0) {
//		continue;					//// continue : ���ϴ� �ǳʶٰ� ���� �ٽ� ���� for�� ��� ������. 
//	}
//	sum += i;
//}
//printf("1~100 Ȧ���� ���� %d", sum);

//int j = 1;
//int sum2 = 0;
//while (1) {
//	if (j > 100) {
//		break;
//	}
//	if (j % 2 == 1) {
//		sum2 += j;
//	}
//	j++;
//}
//printf("while(1) 1~100 Ȧ���� ���� %d", sum2);



// ������ (for) 2��
//for (int i = 1;i <= 9;i++) {
//	printf("2*%d=%d\n", i, i * 2);
//}

// ���ϴ� ���� �Է¹޾� ������ ���
//int n;
//printf("���ϴ� ���� �Է��Ͻÿ� :");
//scanf("%d", &n);
//for (int i = 1; i <= 9;i++) {
//	printf("%d*%d=%d\n", n, i, n * i);
//}

//////// 12.24 ******************************************************************************************************************************

// ������ 9x9 ��Ʈ (���� for��)
	//for (int dan = 2;dan < 10; dan++) {
	//	for (int i = 1;i <= 9;i++) {
	//		printf("%d*%d=%-2d ", dan, i, dan * i);
	//	}
	//	printf("\n");
	//}

// �Է¹��� ���� for���� ����Ͽ� �� �ٿ� 3���� ���
	//int dan;
	//printf("���� �Է��Ͻÿ� :");
	//scanf("%d", &dan);
	//for (int i = 1;i <= 9;i++) {
	//	printf("%d * %d = %-2d ", dan, i, dan * i);
	//	if (i % 3 == 0) {
	//		printf("\n");
	//	}
	//}

// ���� ������
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 2; j <= 9;j++) {
	//		printf("%d*%d=%-2d ", j, i, j * i);
	//	}
	//	printf("\n");
	//}

// �Է¹��� �ܱ��� ������ ���
// 4 => 2,3,4
// while�� ���
	//int n;
	//int i = 2;
	//int j = 1;
	//printf("�� �Է� :");
	//scanf("%d", &n);
	//while (j<=9) {
	//	while (i <= n) {
	//		printf("%d*%d=%-2d ", i, j, i * j);
	//		i++;
	//	}
	//	printf("\n");
	//	i = 2;
	//	j++;
	//}

// ���� for, ���� while�� ��� �ұ�?
// ���̰� ����?
	//for (�ʱ��;���ǽ�;������) {
	//	���๮
	//}

	//�ʱ��;
	//while (���ǽ�) {
	//	���๮;
	//	������;
	//}

// for, printf("*")�� ����Ͽ�
// *
// **
// ***
// ****
// *****
	//for (int i = 1;i <= 5;i++) {
	//	for (int j = 1;j <= i;j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

// for, printf("*")�� ����Ͽ�
// *****
// ****
// ***
// **
// *
////���1
	//for (int i = 5;i >= 1;i--) {
	//	for (int j = 1;j <= i;j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
////���2 ... (���� ���غ� ���) ... ���� �м����� �ʱ���ڸ� 0���� �������� �� ��� ������ ������ �ִ�
	//for (int i = 0;i < 5;i++) {				
	//	for (int j = 0;j < 5 - i;j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

// for, printf("*")�� ����Ͽ�
//     *
//    ***
//   *****
//  *******
// *********
//    | |
//����for�� ���� ����for��
	//for (int i = 1;i <= 5;i++) {
	//	for (int j = 1;j<=5-i;j++) {
	//		printf(" ");
	//	}
	//	for (int k = 1;k <= 2 * i - 1;k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("   | |");

// for, printf("*")�� ����Ͽ�
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
	//for (int i = 1;i <= 5;i++) {
	//	for (int j = 1;j <= 5 - i;j++) {
	//		printf(" ");
	//	}
	//	for (int k = 1;k <= 2 * i - 1;k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int l = 4;l>=1;l--) {
	//	for (int m = 1;m<=5-l;m++) {
	//		printf(" ");
	//	}
	//	for (int n = 1;n<=2*l-1;n++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

// Ȧ���� �Է¹޾� ���̰� �Է°��� ���� ������ ���, ¦�� �Է� �� ���� �޽��� ���
	//int odd;
	//printf("Ȧ�� �Է� :");
	//scanf("%d", &odd);
	//if (odd % 2 == 1) {
	//	for (int i = 0;i <= odd / 2; i++) {
	//		for (int j = odd / 2 - i;j > 0;j--) {
	//			printf(" ");
	//		}
	//		for (int k = 2 * i;k >= 0;k--) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//	for (int i = 1; i <= odd / 2;i++) {
	//		for (int j = 1; j <= i; j++) {
	//			printf(" ");
	//		}
	//		for (int k = 1; k <= odd - 2 * i; k++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//}
	//else {
	//	printf("Ȧ���� �Էµ��� �ʾҽ��ϴ�");
	//}

// 5���� ���̸� �Է¹޾Ƽ� ��� ���̸� ���.
// for���� ����Ͽ� �Ҽ��� ���� ù° �ڸ����� ���.
	//int age;
	//int sum = 0;
	//double avg;
	//for (int i = 0;i < 5;i++) {
	//	printf("���� �Է� :");
	//	scanf("%d", &age);
	//	sum += age;
	//}
	//avg = sum / 5;
	//printf("��� ���� : %.1lf", avg);

// ���� �Է�
// 5�� ����� �հ�
// 0�� �Է��ϸ� ����
// 5�� ����� ����, ����

	//int dummy, count, count_five, sum;
	//sum = 0;
	//count = 0;
	//count_five = 0;
	//while (1) {
	//	printf("������ �Է��ϼ��� :");
	//	scanf("%d", &dummy);
	//	if (dummy == 0) {
	//		count++;
	//		break;
	//	}
	//	if (dummy % 5 == 0) {
	//		sum += dummy;
	//		count_five++;
	//	}
	//	if (dummy % 5 != 0) {
	//		count++;
	//	}
	//	printf("%d\n", sum);
	//}
	//printf("5�� ����� ���� : %d, ���� : %d", count_five, sum);
	//printf("\n�� �Է� ���� :%d", count + count_five);



//
// -(1/2)+(2/3)-(3/4)+(4/5)-...-(99/100)�� ���ϱ�
//// 1�� ���.
	//double sum = 0;						// sum�� int�� �����ϸ� ������ ���ؼ� double�� �����ؾ���
	//for (int i = 1;i <= 99;i++) {
	//	if (i % 2 == 0) {
	//		sum += i / (i + 1.0);		// ���� �� ��ȯ : (double) <����> 		@@@@@@@@@@@@
	//		printf("%lf\n", sum);
	//	}
	//	else {
	//		sum -= i / (i + 1.);		// i + 1. �� �Ǽ��̰�, ���� i / (i + 1.) ���� �Ǽ��� �ȴ�. >> 1.0 �� 1. �� ����.
	//		printf("%lf\n", sum);
	//	}
	//}
	//printf("%.2lf", sum);
////2�����.
	//double sum = 0, b, c;		// ���� ���� ��Ŀ� �ָ�
	//int a = 1;
	//for (int i = 1;i <= 99;i++) {
	//	a *= (-1);			// a = a * (-1);
	//	b = (double)i / (i + 1);
	//	c = a * b;
	//	sum += c;
	//}
	//printf("%.2lf", sum);

//printf("%lf", - 1 / 2);			// 0.000000
//printf("%lf", -1.0 / 2);			// -0.500000
//printf("%lf", -1 / 2.0);			// -0.500000
//printf("%lf", (double) - 1 / 2);	// -0.500000
//printf("%lf", 1 / (2));			// 0.000000
//printf("%lf", 1 / (2 + .0));		// 0.500000
//printf("%lf",60);					// 0.000000		...??????????



// ! (���丮��) ���� ����
	//int k = 1;
	//for (int i = 1;i <= 3;i++) {
	//	k *= i;		// k = k * i;
	//}
	//printf("%d\n", k);

// 1! + 2! + 3! + ... + 10! = ?
// ���� �� ��	... �����ϱ�� ������ ���������� �� ��� ������ �����ϴ�.
	//int sum = 0, dum = 1;
	//for (int i = 1;i <= 10;i++) {
	//	for (int j = 1; j <= i; j++) {
	//		dum *= j;
	//	}
	//	sum += dum;
	//	printf("%d! = %d\tsum = %d\n", i, dum, sum);
	//	dum = 1;
	//}
	//printf("1! + 2! + 3! + ... + 10! = %d", sum);

// ������
	//int sum = 0, dum = 1;
	//for (int i = 1;i <= 10;i++) {
	//	dum *= i;
	//	sum += dum;
	//	printf("%d! = %d\tsum = %d\n", i, dum, sum);
	//}
	//printf("1! + 2! + 3! + ... + 10! = %d", sum);

//*           *
//**         **
//***       ***
//****     ****
//*****   *****
//****** ******
//*************
//****** ******
//*****   *****
//****     ****
//***       ***
//**         **
//*           *
// ���� ����� ���� �ڵ��س� �Ŀ� ���������ϸ� ���� �Ǵ°� ����
// �Ǵ� ���ʿ� int size = 13; �� ���� ������ �� �ڵ��ϴ� ����� ����������
// ���� for������, ���� for���� ������ �ܺ�for���� ������ ���ӵǾ�� �Ѵ�.
// ������ ���� for���� ���� ������ �ش� for���� �ϼ��� ���� �䱸����(����)�� ����ϸ� �ȴ�.
	//int size;
	//printf("ũ�⸦ �Է��ϼ��� (Ȧ��) :");			
	//scanf("%d", &size);							
	//	for (int i = 1; i <= size/2; i++) {			
	//		for (int j = 1; j <= i; j++) {
	//			printf("*");
	//		}
	//		for (int k = 1; k <= size - 2 * i; k++) {
	//			printf(" ");
	//		}
	//		for (int j = 1; j <= i; j++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//	for (int i = 1; i <= size; i++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	for (int i = 1; i <= size/2; i++) {
	//		for (int j = 1; j <= size/2+1-i; j++) {
	//			printf("*");
	//		}
	//		for (int k = 1; k <= 2*i-1; k++) {
	//			printf(" ");
	//		}
	//		for (int j = 1; j <= size/2+1-i; j++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}



//   1
//  123
// 12345
//1234567
// 12345
//  123
//   1
	//int dum = 1;
	//int size;
	//printf("ũ�⸦ �Է��ϼ��� (Ȧ��):");
	//scanf("%d", &size);
	//for (int i = 1; i <= size / 2;i++) {
	//	for (int j = 1; j <= size / 2-i+1;j++) {
	//		printf(" ");
	//	}
	//	for (int k = 1; k <= 2 * i - 1;k++) {		// �� ���������� ...������ : for(int k = 1; k<= 2*i-1; k++) printf("%d",k);
	//		printf("%d", dum);
	//		dum += 1;
	//	}
	//	dum = 1;
	//	for (int j = 1; j <= size / 2 - i + 1;j++) {
	//		printf(" ");
	//	}
	//	printf("\n");
	//}
	//for (int i = 1; i <= size;i++) {
	//	printf("%d", dum);
	//	dum += 1;
	//}
	//printf("\n");
	//dum = 1;
	//for (int i = 1; i <= size / 2;i++) {
	//	for (int j = 1; j <= i;j++) {
	//		printf(" ");
	//	}
	//	for (int k = 1; k <= size-2*i;k++) {
	//		printf("%d", dum);
	//		dum += 1;
	//	}
	//	dum = 1;
	//	printf("\n");
	//}


//////// 12.26 ******************************************************************************************************************************


//    0
//   101
//  21012
// 3210123
//432101234
// 3210123
//  21012
//   101
//    0
int size;										// �ʿ��� ��Ģ�� ����ϰ� �����ϰ� �ڵ带 ���������� ����.
printf("ũ�⸦ �Է��ϼ��� :");					// ���� ������ �ٽ� ���� �Ȱ��� ������� �ۼ��� �� �ֵ���.
scanf("%d", &size);
size++;
	for (int i = 1;i <= size;i++) {
		for (int j = 1;j <= size - i;j++) {
			printf(" ");
		}
		for (int l = 1;l <= i;l++) {
			printf("%d", i - l);
		}
		for (int m = 2;m <= i;m++) {
			printf("%d", m-1);
		}
	printf("\n");
	}
	for (int i = 1;i <= size - 1;i++) {
		for (int j = 1;j <= i;j++) {
			printf(" ");
		}
		for (int l = 1;l <= size - i;l++) {
			printf("%d", size - i - l);
		}
		for (int m = 1;m <= size-i-1 ; m++) {
			printf("%d", m );
		}
		printf("\n");
	}




	return 0;
}