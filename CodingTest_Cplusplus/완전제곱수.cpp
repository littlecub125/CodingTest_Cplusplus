# include <iostream>
# include <stdlib.h>
#include<vector>
#include<math.h>
using namespace std;

/*
M�� N�� �־��� �� M�̻� N������ �ڿ��� �� ������������
���� ��� ��� �� ���� ���ϰ� �� �� �ּڰ��� ã�� ���α׷���
�ۼ��Ͻÿ�. ���� ��� M=60, N=100�� ��� 60�̻� 100������
�ڿ��� �� ������������ 64, 81, 100 �̷��� �� 3���� �����Ƿ�
�� ���� 245�� �ǰ� �� �� �ּڰ��� 64�� �ȴ�.
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
