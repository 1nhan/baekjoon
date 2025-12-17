/*
문제 baecjoon1914
세 개의 장대가 있고 첫 번째 장대에는 반경이 서로 다른 n개의 원판이 쌓여 있다. 
각 원판은 반경이 큰 순서대로 쌓여있다. 
이제 수도승들이 다음 규칙에 따라 첫 번째 장대에서 세 번째 장대로 옮기려 한다.
한 번에 한 개의 원판만을 다른 탑으로 옮길 수 있다.
쌓아 놓은 원판은 항상 위의 것이 아래의 것보다 작아야 한다.
이 작업을 수행하는데 필요한 이동 순서를 출력하는 프로그램을 작성하라. 
단, 이동 횟수는 최소가 되어야 한다.

입력
첫째 줄에 첫 번째 장대에 쌓인 원판의 개수 N (1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄에 옮긴 횟수 K를 출력한다.

N이 20 이하인 입력에 대해서는 두 번째 줄부터 수행 과정을 출력한다. 
두 번째 줄부터 K개의 줄에 걸쳐 두 정수 A B를 빈칸을 사이에 두고 출력하는데, 
이는 A번째 탑의 가장 위에 있는 원판을 B번째 탑의 가장 위로 옮긴다는 뜻이다. 
N이 20보다 큰 경우에는 과정은 출력할 필요가 없다.


예제 입력 1
3
예제 출력 1
7
1 3
1 2
3 2
1 3
2 1
2 3
1 3
*/
#include <iostream>
using namespace std;
constexpr int condition = 20;


void TOH(int n, int A, int B, int C)
{
	if (n > 0)
	{
		TOH(n - 1, A, C, B);
		cout << A<<' ' << C << '\n';
		TOH(n - 1, B, A, C);
	}
}
/*
	unsighned long long은 2^64까지 처리 가능
	문제는 N이 100이하일때를 묻고 있음
*/
unsigned long long power(int n)
{
	if (n == 0) return 1ULL;
	return (2ULL * power(n - 1));
}

int main()
{
	int number;
	cin >> number;
	// 하노이 타워의 횟수 = 2^n-1;
	cout<<power(number)-1<<'\n';
	if (number > condition || 0 > number) return 0;
	TOH(number,1,2,3);
}