/*
문제
알파벳 소문자로만 이루어진 단어가 주어진다. 
이때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.

팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다.

level, noon은 팰린드롬이고, 
baekjoon, online, judge는 팰린드롬이 아니다.

입력
첫째 줄에 단어가 주어진다. 
단어의 길이는 1보다 크거나 같고, 
100보다 작거나 같으며, 
알파벳 소문자로만 이루어져 있다.

출력
첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다.

예제 입력 1
level
예제 출력 1
1
예제 입력 2
baekjoon
예제 출력 2
0
*/
#include <iostream>
#include <string>
using namespace std;

/*
string타입 기준 처음과 끝을 가리키게 할 수 있는 인덱스 변수를 지정.
first와 last의 인덱스를 좁히면서 검사.
*/
bool print_answer()
{
	string string_s;
	cin >> string_s;
	int first = 0;
	int last = string_s.length() - 1;

	while (first < last) {
		if (string_s[first] != string_s[last])
			return false;
		++first;
		--last;
	}
	return true;
}

int main()
{
	cout<< print_answer();
	return 0;
}