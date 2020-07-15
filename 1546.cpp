#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, A;
    int Max;
    vector<double>grade;
    double sum = 0.0;
    double Avg = 0.0;


    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        grade.push_back(A);
    }
    sort(grade.begin(), grade.end());
    Max = grade[N - 1];

    for (int j = 0; j < N; j++)
    {
        grade[j] = grade[j] / Max * 100;
        sum += grade[j];
    }

    Avg = sum / N;
    cout.precision(2);
    printf("%lf", Avg);

    return 0;
}
