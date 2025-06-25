#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, testcases;
    cin >> vectorSize >> testcases;

    vector<long long int> integerVector(vectorSize);
    for (int i = 0; i < testcases; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 0; i < testcases; i++)
    {
        int desiredNumber;
        cin >> desiredNumber;

        auto it = find(integerVector.begin(), integerVector.end(), desiredNumber);

        if (it != integerVector.end())
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }

    return 0;
}