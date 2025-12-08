/*
문제
영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 
이 문자열에는 몇 개의 단어가 있을까? 
이를 구하는 프로그램을 작성하시오. 
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

입력
첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 
이 문자열의 길이는 1,000,000을 넘지 않는다. 
단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 
또한 문자열은 공백으로 시작하거나 끝날 수 있다.

출력
첫째 줄에 단어의 개수를 출력한다.

예제 입력 1
The Curious Case of Benjamin Button
예제 출력 1
6
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
	string 타입으로 문자열을 다담는다.
	이 string 타입 변수.size()만큼 반복문을 돌린다.
	조건 분기를 설정해서 공백일떄와 아닐때를 동작하게 한다.
	공백일때는 벡터에 저장 후 temp 변수를 비운다.
	공백이 아닐때는 string[i]같이 문자를 잠시 사용할 객체에 저장한다.
*/
void print_answer()
{
	vector<string>vector_s;
	string string_s;
	getline(cin, string_s); // 한 줄 전체를 입력 

	if (string_s.size() > 1000000) return;
	
	
	string temp = "";
	for (int i = 0; i < string_s.size(); ++i) {
		if (string_s[i] == ' ') {
			if (!temp.empty()) {
				vector_s.push_back(temp);
				temp.clear();
			}
		}
		else {
			temp += string_s[i];
		}
	}
	if (!temp.empty()) {
		vector_s.push_back(temp);
	}
	cout << vector_s.size() << '\n';
}

int main()
{
	print_answer();
	return 0;
}
