/*
문제
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다.
둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다.
모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

출력
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
*/
#include<vector>
#include<iostream>
using namespace std;

void print_min_max()
{
	int N, val;
	vector<int>val_vec;

	cin >> N;
	if (N < 1 || 1000000 < N)return;
	for (int i = 0; i < N; i++)
	{
		cin >> val;
		val_vec.push_back(val);
	}

	int min = val_vec[0],
		max = val_vec[0];
	for (int x = 0; x < N; x++)
	{
		if (min > val_vec[x])min = val_vec[x];
		if (max < val_vec[x])max = val_vec[x];
	}
	cout << min << ' ' << max;

}
int main()
{
	print_min_max();
}