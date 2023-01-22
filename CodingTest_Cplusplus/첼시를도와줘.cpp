# include <iostream>
# include <stdlib.h>
#include<vector>
#include<math.h>
using namespace std;

/*
M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인
것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램을
작성하시오. 예를 들어 M=60, N=100인 경우 60이상 100이하의
자연수 중 완전제곱수는 64, 81, 100 이렇게 총 3개가 있으므로
그 합은 245가 되고 이 중 최솟값은 64가 된다.
*/

// using vector
int main()
{
    vector<int> v;
    int M, N;
    int i;
    int temp_ans = 0;

    cin >> M;

    cin >> N;

    for (int i = M; i <= N; i++)
    {
        if ((int)sqrt(i) * sqrt(i) == i)
        {
            v.push_back(i);
        }
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    if (sum == 0)
    {
        cout << -1;
    }
    else
        cout << sum << "\n" << v[0];
    return 0;
}


// using only variable
/*

int main()
{
    int max = 0;
    int min = 789456123;
    int i = 1;
    int sum = 0;
    int M, N, temp_ans;

    cin >> M;
    cin >> N;

    while (true)
    {
        temp_ans = i * i;
        if (temp_ans >= M && temp_ans <= N)
        {
            sum += temp_ans;
            if (temp_ans < min)
            {
                min = temp_ans;
            }
        }
        else if (temp_ans > N)
            break;
        i++;
    }
    if (sum == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum << "\n" << min;
    }
}
*/
