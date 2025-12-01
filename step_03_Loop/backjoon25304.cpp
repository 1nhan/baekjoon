/*
문제

영수증에 적힌,
	구매한 각 물건의 가격과 개수
	구매한 물건들의 총 금액
을 보고, 구매한 물건의 가격과 개수로 계산한 총 금액이
영수증에 적힌 총 금액과 일치하는지 검사해보자.

입력
첫째 줄에는 영수증에 적힌 총 금액 $X가 주어진다.
둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 $N이 주어진다.
이후 $N개의 줄에는 각 물건의 가격 $a와 개수 $b가 공백을 사이에 두고 주어진다.

출력
구매한 물건의 가격과 개수로 계산한 총 금액이
영수증에 적힌 총 금액과 일치하면 Yes를 출력한다.
일치하지 않는다면 No를 출력한다.

1 <= X <= 1 000 000 000
1 <= N <= 100
1 <= a <= 1 000 000
1 <= b <= 10
*/
#include<iostream>
using namespace std;

void is_right() {
	int X, N, a, b;
	cin >> X;
	if (X < 1 && 1000000000 < X)return;
	cin >> N;
	if (N < 1 && 100 < N)return;
	int sum = 0;
	for (int i = 0; i < N; ++i) {
		cin >> a >> b;
		if (a < 1 && 1000000 < a || b < 1 && 10 < b)return;
		sum += (a * b);
	}
	if (X == sum) {
		cout << "Yes";
		return;
	}
	cout << "No";
}

int main()
{
	is_right();
}