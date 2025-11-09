#include <iostream>
using namespace std;
int frequency(int a[], int l, int r, int x)
{
    int count = 0;
    for (int i = l; i <= r; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}
int calculate(int a[], int l, int r)
{
    if (l == r)
    {
        return a[l];
    }
    int mid = (l + r) / 2;

    int leftmost = calculate(a, l, mid);
    int rightmost = calculate(a, mid + 1, r);

    if (leftmost == rightmost)
    {
        return leftmost;
    }

    int left = frequency(a, l, r, leftmost);
    int right = frequency(a, l, r, rightmost);
    return (left > right) ? leftmost : rightmost;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = calculate(a, 0, n-1);
    cout << "max occuring element is " << result;
}