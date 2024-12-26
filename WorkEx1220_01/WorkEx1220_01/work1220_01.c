#include <stdio.h>
#pragma warning (disable:4996)

/*
head(머리)
main => 이름
() => 데이터 갯수와 형태
   => 메인함수에서는 생략
0, => 돌려주는 값(return)의 형태
*/

/*
프로그램 작성 (edit) > 소스파일 > 기계어로 변환
프로그램 번역 (compifle) : Compiler
링크(link)
실행
*/

int main()
{
	//printf("god morning!!");

	// 정수형 변수
	//int a = 10; // 선언하고 초기화, int는 정수형 변수 예약어
	//int b; // 선언
	//b = 20; // 초기화

	//printf("a는 %d이다\n.", a); //정수형 변환문자열은 d, 줄바꿈은 \n

	//int a = 10;  //정수형
	//double b = 10.5; //실수형
	//char c = 'C'; //단일문자, %c
	//char d[10] = "ABCD"; //문자열(문자배열)
	//char e = "E"; // 단일문자라도 " "로 입력하면 문자열로 인식, %s

	//printf("%lf\n", b);
	//printf("%c\n", c);
	//printf("%s\n", d); //변화문자열은 s

	//int a1;
	//a1 = 10;
	//int a2 = 20;

	//char c1 = 'c';
	//c1 = 'c';
	//char c2 = 'C';
	//printf("%c\n", c2);

	//char d1[10] = "ABCD";
	//char d2[10] = "ABCD";
	//d2 = "EFGH:" // 문자열은 선언시 초기화
	//printf("%s\n", d1);

	//다양한 자료형 출력
		//int n = 10;
		//double db = 16.8;
		//char ch = 'a';
		//char name[10] = "park";

		//a = 10, 10 = a

		//printf("10\n");
		//printf("정수형 변수 %d\n", n);
		//printf("정수형 상수 %d\n", 10);
		//printf("정수형 변수 %d\n", 10 / 3); // 3(몫 연산자)
		//printf("정수형 변수 %d\n", n / 3); // 3(몫 연산자)

		//printf("10.8\n");
		//printf("실수형 변수 %lf\n", db);
		//printf("실수형 상수 %lf\n", 16.8);
		//printf("실수형 변수 %lf\n", 16.8 / 3); // 5.600000
		//printf("실수형 변수 %lf\n", db / 3); // 5.600000

		//printf("정수 > 정수형 수식 출력: %d\n", n / 3);			// 3
		//printf("정수 > 실수형 수식 출력: %lf\n", 10 / 3);		// 0.000000	 ... lf로 임의의 정수를 읽으면 0.000000이다.
		//printf("실수 > 실수형 수식 출력: %lf\n", 10.0 / 3.0);	// 3.333333
		//printf("실수 > 정수형 수식 출력: %d\n", 10.0 / 3.0);	// -1431241283917 (에러)
		//printf("정수 > 정수형 수식 출력: %d\n", (int)(10.0 / 3)); // 3	 ... 강제형변환

	/*int a = 10;
	a = 11;
	a = 12;
	printf("%d\n", a);*/

	//정수값 출력
	// 변환문자열: %d
	//printf("%d\n", 10);
	//printf("%d , %d\n", 10, 20);
	//printf("%d\n", 10 + 20);

	//10과 20의 합은 30입니다.
	//printf("%d와 %d의 합은 %d입니다.", 10, 20, 30);

	// 변수: 데이터 저장
	// 변수, 상수, 상수형 변수

	// 변수 선언
	// 대입(변수에 값을 저장)
	// 초기화 (변수 선언과 동시에 값을 저장)
	// 변수: 데이터를 저장 할 수 있는 메모리의 기억공간
	// ex) int a;
	// => compiler에게 형태(자료형, int, ...), 이름(a)
	// int : 예약어(정수값을 저장하기 위한 예약어)
	// 대입(저장) : 대입 연산자(=), ==
	// a(변수, 저장될 공간) = 10(저장될 값)
	// 변수 = 상수; a = 10
	// 변수 = 변수 ; b = a
	// 상수 = 상수; (X)
	// 상수 = 변수; (x)
	// 오른쪽의 값을 왼쪽 변수에 저장

	// 키보드 입력
	// scanf 함수
	// 정수값 하나 입력
	// #pragma warning (disable:4996)
	//int a; 
	//scanf("%d", &a); //&:포인터(&,*,**,*&....)
	//printf("%d", a);

	//int num1, num2;
	//scanf("%d", &num1);
	//scanf("%d", &num2);
	//printf("%d %d", num1, num2);

	//int num3, num4;
	//scanf("%d%d",&num3, &num4);
	// 공백, 줄바꿈, 불필요한 문자열은 사용하지 않음
	//printf("%d , %d", num3, num4);

	//char a, b;
	//sscanf("%c%c", &a, &b);
	//scanf("%c %c", &a, &b); //문자 입력 사이에선ㄴ 공백사용
	//printf("%c, %c", a, b);

	//프로그램 작성순서
	// 번수선언
	// 데이터 입력
	// 데이터 처리(연산)
	// 데이터 출력

	//식별자: 변수명, 함수명
	//알파벳 대소문자, A~Z, a~z => 대소문자는 서로 다른 식별자
	//숫자: 0~9
	//특수기호: _(underline)
	//첫문자에는 숫자가 올 수 없다
	//예약어(int, double...) 사용불가
	//=> if, else, for, break, return....

	// 급여계산
	// 연봉 100원, 보너스 50원
	// 세금 9%
	// 실수령액은 .... 원입니다.
	/*int bonbong, bonus, total;
	double tax = 0.09;
	double total_tax, real_income;
	bonbong = 100;
	bonus = 50;
	total = bonbong + bonus;
	total_tax = total * tax;
	real_income = total - total_tax;
	printf("실수령액은 %lf원입니다", real_income);*/

	// 연산, 연산과정
	// 연산자: + - * /
	// 피연산자: 변수, 상수
	// a(피연산자) +(연산자) 10(피연산자)

	// 자동형변환
	// 10 + 20.0 = 30.0
	// 10(정수) + 20.0(실수) = 30.0(실수)
	// => 10.0 (실수형: 자동형변환) + 20.0(실수) = 30.0(실수)
	//printf("10+20.0=(정수)%d\n", 10 + 20.0);
	//printf("10+20.0=(실수)%lf\n", 10 + 20.0);

	// 문자데이터
	// 문자(문자상수)는 ' '로 묶어서 표현
	// 문자상수의 크기 : 1바이트
	//printf("%c\n", 'A');
	//printf("%d\n", 'A'); //65: 0100 0001

	/*int num;
	num = 'A';
	printf("%d\n", num);*/

	//char a;
	//a = 65;
	//printf("%c\n", a);
	//printf("%d\n", a);

	// 정수는 4바이트, 실수는 8바이트
	// 문자에 작은 값쓰기
	//char a = 123, b = 124, c = 125, d = 126, e = 127, f = 128, g = 129;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);
	//printf("%d\n", e);
	//printf("%d\n", f);
	//printf("%d\n", g);

	//printf("%d바이트\n", sizeof(10)); // 정수니까 4바이트
	//printf("%d바이트\n", sizeof(10.0)); //실수니까 8바이트
	//printf("%d바이트\n", sizeof('A')); // 정수로 들어가서 4바이트
	//printf("%d바이트\n", sizeof("A")); // 문자 갯수 + 공백 1개

	//문자열
	//문자배열 => 문자열
	//문자열 상수 => " " 로 묶어서 표현
	//char string[5];
	//printf("%d", sizeof(string));
	//string = "ABCD"; // 문자열 변수는 선언과 동시에 초기화

	// 역이름을 입력하세요
	// 가산디지털역 
	// 이번역은 가산디지털역입니다.
	//printf("역이름을 입력하세요\n");
	//char station[20]; //배열명은 자체가 포인터
	//scanf("%s", &station);
	//scanf("%s", station);
	//printf("이번 역은 %s입니다.\n", station);

	// 선언한 유형과 입력값이 다를때는 선언 유형을 따라감
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
	//a = 100 / 30; // 몫 연산자
	//b = 100 % 30; //나머지 연산자
	//printf("%d\n", a);
	//printf("%d\n", b);

	//double a, b;
	//a = 100.0 / 30; // 실수형에서는 단순 나누기
	//b = 100.0 % 30; // 실수형에는 % 사용 불가, 나머지는 정수형에만 존재
	//printf("%lf\n", a);
	//printf("%d\n", b);

	//1. 자판기 잔돈 계산
	// 커피 한잔에 250원
	// 1000원을 투입했을때 잔돈 금액
	// 거스름돈 지급시 최소 갯수로 받는 경우
	// 500원 1개, 100원 2개, 50원 1개
	//int FiveHun = 0, OneHun = 0, Fift = 0, ten = 0;
	///*FiveHun = (1000 - 250) / 500;
	//OneHun = (1000 - 250 - FiveHun * 500) / 100;
	//Fift = (1000 - 250 - FiveHun * 500 - OneHun * 100) / 50;
	//ten = (1000 - 250 - FiveHun * 500 - OneHun * 100 - Fift * 50) / 10;*/
	//FiveHun = (1000 - 250) / 500;
	//OneHun = (1000 - 250) % 500 / 100;
	//Fift = (1000 - 250) % 100 / 50;
	//ten = (1000 - 250) % 50 / 10;
	//printf("500원 %d개\n100원 %d개\n50원 %d개\n10원 %d개", FiveHun, OneHun, Fift, ten);

	// 커피 금액과 커피잔수, 투입 금액 입력
	/*int cocost = 0, cocount = 0, cost = 0, restcost = 0;;
	int FiveHun = 0, OneHun = 0, Fift = 0, ten = 0;
	printf("커피 금액, 커피 잔수, 투입금액을 입력하시오\n");
	scanf("%d %d %d", &cocost, &cocount, &cost);
	restcost = cost - cocost * cocount;
	FiveHun = restcost / 500;
	OneHun = restcost % 500 / 100;
	Fift = restcost % 100 / 50;
	ten = restcost % 50 / 10;
	printf("\n500원 %d개\n100원 %d개\n50원 %d개\n10원 %d개\n\n", FiveHun, OneHun, Fift, ten);*/

	// 취업률 계산
	//int grad, empl;
	//double percentage;
	//printf("졸업생수와 취업자수를 입력하시오\n");
	//scanf("%d %d", &grad, &empl);
	////percentage = empl / grad * 100.0; // 몫연산자여서 0(정수/정수) * 100이어서 틀림
	//percentage = empl / (double)grad * 100.0;
	//printf("취업률은 %lf입니다.", percentage);정수 실수 연산자 문제

	//0.375시간은 몇분 몇초인가
	/*double time;
	int m, s;
	printf("분과 초로 나눌 시간을 입력하세요\n");
	scanf("%lf", &time);
	m = time * 60;
	s = (time * 60-m)*60;
	printf("%.4lf시간은 %d분 %d초입니다\n", time, m, s);*/


	//1년 365.2422일 / 일,시간,분,초
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
	//printf("1년은 %d일 %d시간 %d분 %d초\n", day, hour, m, s);

	//관계연산
	// a == b, a != b, a > b, a < b
	// 논리연산
	// 논리부정: !: 부정
	// 논리곱: &&(&, and): 모두 참이면 참
	// 논리합: ||(|, or): 하나라도 참이면 참

	//int a = 10;
	//printf("%d\n", a >= 20); // 거짓이므로 0이 도출
	//printf("%d\n", a == 10); // 참이므로 1이 도출
	//printf("%d\n", a != 10); // 거짓이므로 0이 도출
	//printf("%d\n", a > 5 && a <= 15); // 참이므로 1이 도출
	//printf("%d\n", a > 5 && a <= 8); // 거짓이므로 0이 도출
	//printf("%d\n", a > 5 || a <= 15); // 참이므로 1이 도출
	//printf("%d\n", a > 5 || a <= 8); // 참이므로 1이 도출
	//int b;
	//b = a > 5 && a <= 15;
	//printf("%d\n", b);
	//printf("논리부정:%d\n", !(a > 0));
	//printf("%d\n", a > 0 && 3.2); //3.2는 참(1)로 간주 (0이외의 나머지는 전부 참)
	//printf("%d\n", 0 && 1);
	//printf("%d\n", 1 && 0);
	//printf("%d\n", 1 || 0);

	//대입연산 : =, +=, -=, *=, /=...
	//대입연산의 기본은 오른쪽에서 왼쪽 방향으로 진행
	/*int a = 2, b = 3, c = 4;
	a = b = c;
	printf("a=b=c:%d", a);*/
	//int a = 1;
	//a = a + 3; // a+=3
	//printf("%d\n", a);

	// 증가연산자(++) 감소연산자(--)
	//int a = 1;
	//a = a + 1;
	//printf("%d\n", a);
	//a++; //후치(다음줄로 넘어가면서 연산) 증가연산
	//++a; //전치(즉시 연산) 증가연산
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



	//printf("%lf\n", 3.14);	// lf 형식은 소수점 아래 6자리까지
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
	//printf("%-3c%3c\n", 'a', 'b');   // 3칸 확보 후 왼쪽 혹은 오른쪽 정렬


	/*
	printf("%d\n", 1234);
	printf("%d\n", -1234);
	printf("%d\n", +1234);  // - 기호와 다르게, + 기호는 생략된다
	printf("%+d\n", 1234);	// + 기호를 출력하는 방법
	*/

	/* 연습 예제
		1. 학번과 이름 입력
		2. 국어, 영어, 수학 점수 입력
		3. 다음을 출력
		|
		|	 이름	|	국어  | 영어  |
		|------------------------------------------------------
			홍길동		90		75		80		000		00.0
		|
	*/

	/*  연습예제
	char name[10];
	int kor, eng, mat, sum;
	double avg;
	printf("이름을 입력하세요:");
	scanf("%s", &name);
	printf("국어점수를 입력하세요:");
	scanf("%d", &kor);
	printf("영어점수를 입력하세요:");
	scanf("%d", &eng);
	printf("수학점수를 입력하세요:");
	scanf("%d", &mat);
	sum = kor + eng + mat;
	avg = sum / 3.0;				// 정수 나누기 정수 = 몫이 계산됨.   정수 나누기 실수로 해야 제대로 연산됨.
	printf("|--------|--------|--------|--------|--------|--------|\n");
	printf("|  이름  |  국어  |  영어  |  수학  |  총점  |  평균  |\n");
	printf("|--------|--------|--------|--------|--------|--------|\n");
	printf("| %s %7d %8d %8d %8d %8.1lf \n", name, kor, eng, mat, sum, avg);
	printf("|--------|--------|--------|--------|--------|--------|\n");
	*/

	/* 연습예제
	double left, right;
	char sex;
	printf("좌, 우 시력을 입력하세요 : ");
	scanf("%lf %lf", &left, &right);
	//scanf("%lf", &right);
	printf("성별을 입력하세요 (M / F) : ");
	scanf(" %c", &sex);					///////		 만약 "%c"와 같이 띄어쓰기 없이 한다면 앞서 사용자가 입력한 enter가 scanf에 입력되어버린다.
											//		그래서 띄어쓰기를 해주는 것이다. %s 로서 문제를 해결할 수도 있다.
	printf("성별 : %c, 시력(좌,우) : %.2lf, %.2lf", sex, left, right);
	//*/

	/* 서식문자
	printf("\t123456\t78901234567890\n");
	printf("\t123456\t7890\"12345\"678\\90\n");		// " \ 를 출력하는 방법
	printf("100%%\n");		//  % 를 출력하는 방법
	//*/

	/* 연습예제
	double weight, height, bmi;
	printf("몸무게(kg)와 키(m)를 입력하세요:");
	scanf("%lf %lf", &weight, &height);
	bmi = weight / height / height;
	printf("당신의 bmi는 %.1lf%%입니다.\n", bmi);
	//*/

	// 진법 변환
	//10,		 2,   8,			16
	//0~9,	0~1	 0~7	 0~9,a,b,c,d,e,f
	/*
	printf("10진수 상수 12 : %d\n", 12);
	printf("8진수 상수 014 : %d\n", 014);		//  8진수 수는 앞에 0을 붙인다. 본 문장의 014는 12로 출력됨.
	printf("16진수 상수 c : %d\n", 0xc);		//  16진수 : 0x 를 붙인다.
	printf("10진수 12를 10진수로 표현 : %d\n", 12);
	printf("10진수 12를 10진수로 표현 : %#d\n", 12);
	printf("10진수 12를 8진수로 표현 : %o\n", 12);		// %o : 8진수
	printf("10진수 12를 8진수로 표현 : %#o\n", 12);		// %#o	... 014로 출력됨
	printf("10진수 12를 16진수로 표현 : %x\n", 12);		// %x : 16진수
	printf("10진수 12를 16진수로 표현 : %#x\n", 12);	// %#x	... 0xc로 출력됨
	//*/ //d:Decimal, o:Octal, x:heXa-decimal

	/* 12를 각 진법으로 입력받을 때 실제 입력되는 값
	int val;
	printf("숫자를 입력하세요:");
	scanf("%d", &val);		// 10진수 입력
	printf("val=%d\n", val);
	printf("val=%#o\n", val);
	printf("val=%#x\n", val);
	//*/

	//int val;
	//scanf("%d", &val);
	//printf("val=%d\n", val);
	//scanf("%o", &val);
	//printf("val=%d\n", val);		// 8진수 변수를 10진수로 변환하여 출력. %d로 했기 때문.
	//scanf("%x", &val);
	//printf("val=%d\n", val);


	// 교재 122p 연산자 우선순위 review

	// chapter 07. 조건문
	// 
	// if문
	//if (조건식)
	//{
	//	실행문;
	//}

	//if (조건식) { 실행문1; }
	//else { 실행문2; }

	//if (조건식) {
	//	실행문1;
	//	실행문2;
	//}

	//int a = 4;
	//if (a > 5)	
	//	printf("%d", a);		// 실행문이 1줄이면 중괄호 생략 가능

	//다중 if 구문 예제
	//int n;
	//printf("점수를 입력하세요 :");
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

	////중복 if
	////a,b 입력 => a>=10, b>=10
	////둘다만족:정상, 하나만만족:보통, 만족없음:비정상
	//int a, b;
	//printf("a,b를 입력하세요 :");
	//scanf("%d%d", &a, &b);
	//if (a >= 10) {
	//	if (b >= 10) printf("정상\n");
	//	else printf("보통\n");
	//}
	//else {
	//	if (b >= 10) printf("보통\n");
	//	else printf("비정상\n");
	//}

	// 몸무게(kg), 키(m) 입력
	// bmi (몸무게/키^2)
	// 당신의 bmi 00.0%입니다.
	// bmi<20:저체중	bmi>=25:과체중	사이:표준
	// 당신의 체중은 ()입니다.
	//double w, h, bmi;
	//printf("몸무게(kg)와 키(m)를 입력하세요 :");
	//scanf("%lf%lf", &w, &h);
	//bmi = w / h / h;
	//printf("당신의 bmi는 %.1f%%이며", bmi);
	//printf("당신의 체중은 ");
	//if (bmi < 20) printf("저체중");
	//	else if (bmi >= 25) printf("과체중");
	//	else printf("표준");
	//printf("입니다");

	//2. 둘 다 만족할 경우에만 정상
	//int a, b;
	//printf("a,b를 입력하세요 :");
	//scanf("%d%d", &a, &b);
	//if (a >= 10 && b >= 10) printf("정상");
	//else if(a>=10||b>=10) printf("보통");
	//else printf("비정상");

	// 정수값 입력 절댓값 출력
	//int a;
	//printf("정수를 입력하세요 : ");
	//scanf("%d", &a);
	//if (a >= 0) a = a;
	//else a = -a;
	//printf("입력한 정수의 절댓값은 %d 입니다", a);

	// 입장료 출력
	//int age;
	//printf("나이 :");
	//scanf("%d", &age);
	//printf("입장료 :");
	//if (age <= 6 || age >= 70) printf("무료");
	//else printf("3,000원");

//switch ~case 구문
//1 => a, 2 => b, 3 => c;etc => f를 출력
//int n;
//printf("값을 입력하시오 :");
//scanf("%d", &n);
//if (n == 1) printf("a");
//else if (n == 2) printf("b");
//else if (n == 3) printf("c");
//else printf("f");
// 위 프로그램을 switch-case 구문으로
//int n;
//scanf("%d", &n);
//switch (n) {
//case 1:	//if(n==1)
//	printf("a");
//	break;	//switch-case문을 빠져나옴. break; 이 없다면 구문 끝까지 실행됨
//case 2:	//if(n==2)
//	printf("b");
//	break;
//case 3:	//if(n==3)
//	printf("c");
//	break;
//default:	//else 역할
//	printf("f");
//}

// 예제
//int n;
//printf("학년을 입럭하세요 :");
//scanf("%d", &n);
//switch (n) {
//case 1: printf("등록금 : 130만원");
//	break;
//case 2:										// 2,3학년은 같은 출력이므로
//case 3: printf("등록금 : 100만원");
//	break;
//case 4: printf("등록금 : 110만원");
//	break;
//default: printf("올바른 학년을 입력하시오");
//}

// if 구문이 참거짓 양자택일 이라면 switch 구문은 변수가 특정 값인지를 확인하는 조건문이며 break가 없으면 모든 검사를 진행한다.

// 두개의 숫자와 사칙연산을 입력받아 결과 출력 @@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 0.5 + 0.7 => 0.5,+,0.7
//double x, y, res;
//char op;
//printf("연산식을 입력하세요 :");
//scanf("%lf%c%lf", &x,&op, &y);					// 입력 시 3.4+1.2 와 같이 식을 연속적으로 써도 정상처리된다.
//printf("입력연산식 : %.1lf %c %.1lf\n", x, op, y);
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
//default: printf("올바른 사칙연산을 입력하세요");
//	break;
//}
//
//	return 0;
//}

//// 반복문
//// 초기식, 조건식, 증감식
//// for, while, do~while
//// break, continue

// for
/*
for(초기식;조건식;증감식) {
	실행문1;
	실행문2;
	...
}

실행순서 : 초기식 > 조건식 > (조건이 참인 경우) 실행문 > 증감식 >
					조건식 > ...
			조건식이 거짓인 경우, 즉시 for문을 빠져나온다.
*/

//while
/*
while(조건식) {
실행문1;
실행문2;
...
}

실행순서 : 초기식 > 조건식 > (조건이 참인 경우) 괄호 안 본문
					조건식 > ...
					조건이 거짓이면 즉시 구문을 빠져나온다
*/

//do-while
/*
초기식
do{
증감식1;
실행문1;
중감식2;
실행문2;
...
}
while(조건식); -----------------------잘 이해 안감


*/

//1~10 출력하는 여러가지 방법
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

// 1~10 합 : 55
//int sum = 0;
//for (int i = 1; i <= 10; i++) {
//	sum = sum + i;					// sum += i; 로도 쓸 수 있다
//}
//printf("1~10 합은 %d\n", sum);
//
//int j = 1;
//sum = 0;
//while (j <= 10) {
//	sum += j;
//	j++;
//}
//printf("1~10 합은 %d\n", sum);
//
//int k = 1;
//sum = 0;
//do {
//	sum = sum + k;
//	k++;
//} while (k <= 10);
//printf("1~10 합은 %d", sum);



// 무한반복문
// for(;;)
// while(1)

//int sum = 0;
//for (int i = 1;i <= 100;i++); {
//	if (i > 10) {
//		break;
//	}
//	sum += i;
//}
//printf("1~10의 합:%d", sum);

//int sum = 0;
//int i = 1;
//for (;;) {
//	if (i > 10) {
//		break;
//	}
//	sum += i;
// i++;
//}
//printf("1~10의 합:%d", sum);

//int sum = 0;
//int i = 1;
//while (1) {
//	if (i > 10) {
//		break;
//	}
//	sum += i;
//	i++;
//}
//printf("1~10의 합:%d", sum);

//1~100 홀수의 합
//int sum = 0;
//for (int i = 1;i <= 100;i++) {
//	if (i % 2 == 1) {
//		sum += i;
//	}
//}
//printf("1~100 홀수의 합은 %d", sum);

//int sum = 0;
//for (int i = 1;i <= 100;i+=2) {
//		sum += i;
//}
//printf("1~100 홀수의 합은 %d", sum);

//int sum = 0;
//for (int i = 1;i <= 100;i++) {
//	if (i % 2 == 0) {
//		continue;					//// continue : 이하는 건너뛰고 위로 다시 가서 for문 계속 돌려라. 
//	}
//	sum += i;
//}
//printf("1~100 홀수의 합은 %d", sum);

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
//printf("while(1) 1~100 홀수의 합은 %d", sum2);



// 구구단 (for) 2단
//for (int i = 1;i <= 9;i++) {
//	printf("2*%d=%d\n", i, i * 2);
//}

// 원하는 단을 입력받아 구구단 출력
//int n;
//printf("원하는 단을 입력하시오 :");
//scanf("%d", &n);
//for (int i = 1; i <= 9;i++) {
//	printf("%d*%d=%d\n", n, i, n * i);
//}

//////// 12.24 ******************************************************************************************************************************

// 구구단 9x9 세트 (이중 for문)
	//for (int dan = 2;dan < 10; dan++) {
	//	for (int i = 1;i <= 9;i++) {
	//		printf("%d*%d=%-2d ", dan, i, dan * i);
	//	}
	//	printf("\n");
	//}

// 입력받은 단을 for문을 사용하여 한 줄에 3개씩 출력
	//int dan;
	//printf("단을 입력하시오 :");
	//scanf("%d", &dan);
	//for (int i = 1;i <= 9;i++) {
	//	printf("%d * %d = %-2d ", dan, i, dan * i);
	//	if (i % 3 == 0) {
	//		printf("\n");
	//	}
	//}

// 세로 구구단
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 2; j <= 9;j++) {
	//		printf("%d*%d=%-2d ", j, i, j * i);
	//	}
	//	printf("\n");
	//}

// 입력받은 단까지 구구단 출력
// 4 => 2,3,4
// while문 사용
	//int n;
	//int i = 2;
	//int j = 1;
	//printf("단 입력 :");
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

// 언제 for, 언제 while을 써야 할까?
// 차이가 뭘까?
	//for (초기식;조건식;증감식) {
	//	실행문
	//}

	//초기식;
	//while (조건식) {
	//	실행문;
	//	증감식;
	//}

// for, printf("*")을 사용하여
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

// for, printf("*")을 사용하여
// *****
// ****
// ***
// **
// *
////방법1
	//for (int i = 5;i >= 1;i--) {
	//	for (int j = 1;j <= i;j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
////방법2 ... (생각 못해본 방법) ... 패턴 분석에서 초기숫자를 0으로 설정했을 때 얻는 수학적 장점이 있다
	//for (int i = 0;i < 5;i++) {				
	//	for (int j = 0;j < 5 - i;j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

// for, printf("*")을 사용하여
//     *
//    ***
//   *****
//  *******
// *********
//    | |
//이중for문 속의 다중for문
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

// for, printf("*")을 사용하여
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

// 홀수를 입력받아 높이가 입력값과 같은 마름모를 출력, 짝수 입력 시 오류 메시지 출력
	//int odd;
	//printf("홀수 입력 :");
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
	//	printf("홀수가 입력되지 않았습니다");
	//}

// 5명의 나이를 입력받아서 평균 나이를 출력.
// for문을 사용하여 소수점 이하 첫째 자리까지 출력.
	//int age;
	//int sum = 0;
	//double avg;
	//for (int i = 0;i < 5;i++) {
	//	printf("나이 입력 :");
	//	scanf("%d", &age);
	//	sum += age;
	//}
	//avg = sum / 5;
	//printf("평균 나이 : %.1lf", avg);

// 정수 입력
// 5의 배수만 합계
// 0을 입력하면 종료
// 5의 배수의 갯수, 총합

	//int dummy, count, count_five, sum;
	//sum = 0;
	//count = 0;
	//count_five = 0;
	//while (1) {
	//	printf("정수를 입력하세요 :");
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
	//printf("5의 배수의 갯수 : %d, 총합 : %d", count_five, sum);
	//printf("\n총 입력 갯수 :%d", count + count_five);



//
// -(1/2)+(2/3)-(3/4)+(4/5)-...-(99/100)를 구하기
//// 1번 방법.
	//double sum = 0;						// sum을 int로 선언하면 저장을 못해서 double로 선언해야함
	//for (int i = 1;i <= 99;i++) {
	//	if (i % 2 == 0) {
	//		sum += i / (i + 1.0);		// 강제 형 변환 : (double) <정수> 		@@@@@@@@@@@@
	//		printf("%lf\n", sum);
	//	}
	//	else {
	//		sum -= i / (i + 1.);		// i + 1. 이 실수이고, 따라서 i / (i + 1.) 역시 실수가 된다. >> 1.0 과 1. 은 같다.
	//		printf("%lf\n", sum);
	//	}
	//}
	//printf("%.2lf", sum);
////2번방법.
	//double sum = 0, b, c;		// 변수 선언 방식에 주목
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



// ! (팩토리얼) 연산 구현
	//int k = 1;
	//for (int i = 1;i <= 3;i++) {
	//	k *= i;		// k = k * i;
	//}
	//printf("%d\n", k);

// 1! + 2! + 3! + ... + 10! = ?
// 내가 한 것	... 동작하기는 하지만 정답지보다 더 길고 구조가 복잡하다.
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

// 정답지
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
// 먼저 상수에 대해 코딩해낸 후에 변수대입하면 쉽게 되는것 같다
// 또는 애초에 int size = 13; 과 같이 선언한 후 코딩하는 방법도 괜찮을지도
// 이중 for문에서, 내부 for문의 변수는 외부for문의 변수에 종속되어야 한다.
// 하지만 막상 for문을 지을 때에는 해당 for문의 완성을 위한 요구조건(패턴)만 고려하면 된다.
	//int size;
	//printf("크기를 입력하세요 (홀수) :");			
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
	//printf("크기를 입력하세요 (홀수):");
	//scanf("%d", &size);
	//for (int i = 1; i <= size / 2;i++) {
	//	for (int j = 1; j <= size / 2-i+1;j++) {
	//		printf(" ");
	//	}
	//	for (int k = 1; k <= 2 * i - 1;k++) {		// 잘 동작하지만 ...정답지 : for(int k = 1; k<= 2*i-1; k++) printf("%d",k);
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
int size;										// 필요한 규칙을 명료하게 정리하고 코드를 직관적으로 하자.
printf("크기를 입력하세요 :");					// 내가 언제나 다시 만들어도 똑같은 방식으로 작성할 수 있도록.
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