#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, testcases;
    cin >> vectorSize >> testcases;

    vector<int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 0; i < testcases; i++)
    {
        int firstIndex, lastIndex, sum = 0;
        cin >> firstIndex >> lastIndex;

        for (int j = firstIndex - 1; j < lastIndex; j++)
        {
            sum = sum + integerVector[j];
        }

        cout << sum << endl;
    }

    return 0;
}