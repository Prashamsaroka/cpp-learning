#include <iostream>
using namespace std;
int main()
{
    int arr[100], sum = 0, n, maximum, minimum;
    cout << "===== ARRAY DEMO =====\n";
    cout << "Enter number of elements in array:";
    cin >> n;
    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << endl;
    maximum = arr[0];
    minimum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    cout << "Sum     :" << sum << endl;
    cout << "Maximum :" << maximum << endl;
    cout << "Minimum :" << minimum << endl;
    return 0;
}