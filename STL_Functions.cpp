#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    // Function Objects('Functor'): Function wrapped in a class so that it is available like an object
    int arr[] = {1, 3, 4, 12, 54, 77};
    // sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}