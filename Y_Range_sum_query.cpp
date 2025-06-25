#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, testcases;
    cin >> vectorSize >> testcases;

    vector<int> integerVector(vectorSize + 1);
    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    vector<int> sumVector(vectorSize + 1);
    sumVector[0] = integerVector[0];

    for (int i = 1; i <= vectorSize; i++)
    {
        sumVector[i] = sumVector[i - 1] + integerVector[i];
    }

    for (int i = 1; i <= testcases; i++)
    {
        int firstIndex, lastIndex;
        cin >> firstIndex >> lastIndex;

        int sum = sumVector[lastIndex] - sumVector[firstIndex - 1];

        cout << sum << endl;
    }

    return 0;
}