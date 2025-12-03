/*
문제
(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때
(3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가,
둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.

출력
첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
*/
#include <string>
#include <iostream>
using namespace std;

int main() {
    int val1;
    string val2;
    cin >> val1 >> val2;
    if (val1 < 100 || val2[0] == '\0') return 0;

    for (int i = val2.size() - 1; i >= 0; --i)
    {
        cout << val1 * (val2[i] - '0') << '\n';
    }

    int sum = 0;
    for (char c : val2) {
        sum = sum * 10 + (c - '0');
    }

    cout << val1 * sum << '\n';


}