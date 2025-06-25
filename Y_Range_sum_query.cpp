#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, testcases;
    cin >> vectorSize >> testcases;

    vector<long long int> integerVector(vectorSize + 1);
    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    vector<long long int> sumVector(vectorSize + 1);
    sumVector[1] = integerVector[1];

    for (int i = 2; i <= vectorSize; i++)
    {
        sumVector[i] = sumVector[i - 1] + integerVector[i];
    }

    for (int i = 1; i <= testcases; i++)
    {
        int firstIndex, lastIndex;
        cin >> firstIndex >> lastIndex;

        long long int sum;
        if (firstIndex == 0)
        {
            sum = sumVector[lastIndex];
        }
        else
        {
            sum = sumVector[lastIndex] - sumVector[firstIndex - 1];
        }

        cout << sum << endl;
    }

    return 0;
}