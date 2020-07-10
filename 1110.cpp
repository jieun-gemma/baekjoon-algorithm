#include <iostream>
using namespace std;


int main(void)
{
    int N;
    int num1, num2;
    int s_num1;
    int result = 0;
    int cnt = 0;

    cin >> N;
    result = N;

    while (1)
    {
        ++cnt;
        num1 = result % 10; //1의 자리
        num2 = result / 10; // 10의 자리
        s_num1 = (num1 + num2) % 10; // 1의 자리

        result = (num1 * 10) + s_num1;

        if (result == N)
            break;

    }

    printf("%d", cnt);
    return 0;
}

