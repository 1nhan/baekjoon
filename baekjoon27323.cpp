/*
정수 A, B 가 주어진다. 세로 길이가 A cm, 
가로 길이가 B cm 인 아래와 같은 직사각형의 넓이를 cm2 단위로 구하시오.

입력
표준 입력에 다음과 같은 형태로 입력이 주어진다.

A
B
출력
세로 길이가 A cm, 가로 길이가 B cm인 직사각형의 넓이를 cm2 단위로 구하고, 단위 (cm2)를 생략하여 출력한다.

제한
1 ≦ A ≦ 100.
1 ≦ B ≦ 100.
A, B 는 정수이다.
예제 입력 1
2
3
예제 출력 1
6
세로 길이가 2 cm, 가로 길이가 3 cm인 직사각형의 넓이는 6 cm2이므로, 6 을 출력한다.

*/
#include<iostream>
using namespace std;

void print_answer()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a > 100 || 1 > a)return;
	if (b > 100 || 1 > b)return;
	cout<< a * b;
}

int main()
{
	print_answer();
}