#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, testcases;
    cin >> vectorSize >> testcases;

    vector<int> integerVector(vectorSize);
    for (int i = 0; i < testcases; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 0; i < testcases; i++)
    {
        int desiredNumber;
        cin >> desiredNumber;

        int leftIndex = 0;
        int rightIndex = vectorSize - 1;
        int flag = 0;

        while (leftIndex <= rightIndex)
        {
            int mid = (leftIndex + rightIndex) / 2;
            if (integerVector[mid] == desiredNumber)
            {
                flag = 1;
                break;
            }
            else if (desiredNumber < integerVector[mid])
            {
                rightIndex = mid - 1;
            }
            else
            {
                leftIndex = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}