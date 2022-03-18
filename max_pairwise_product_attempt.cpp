#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;

long long sortArray(vector<int> &numbers)
{
    int n = numbers.size();
    int temp = 0;
    int temp2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i] > numbers[i + 1])
        {
            temp = numbers[i];
            temp2 = numbers[i + 1];
            numbers[i] = temp2;
            numbers[i + 1] = temp;
        }
    }
    for (int j = 0; j < n; ++j)
    {
        if (numbers[j] > numbers[j + 1])
        {
            temp = numbers[j];
            temp2 = numbers[j + 1];
            numbers[j] = temp2;
            numbers[j + 1] = temp;
        }
    }
    return (long long)numbers[n] * numbers[n - 1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    long long sorted = sortArray(numbers);

    cout << sorted << "\n";
    return 0;
}
