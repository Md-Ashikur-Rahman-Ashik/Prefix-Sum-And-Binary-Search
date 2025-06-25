#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;

    vector<int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    int desiredNumber, flag = 0;
    cin >> desiredNumber;

    int leftIndex = 0;
    int rightIndex = vectorSize - 1;

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
        else if (desiredNumber > integerVector[mid])
        {
            leftIndex = mid + 1;
        }
    }

    if (flag == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}