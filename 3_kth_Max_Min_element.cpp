
#include <bits/stdc++.h>
using namespace std;

void Bubble(int size, int *arr)
{
    int counter = 1;

    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        counter++;
    }
}
int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    cout << "Entering Elements Of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Performing Sorting"<<endl;
    Bubble(n,arr);
    int k;
    cout << " enter k: ";
    cin >> k;
    cout<<"The " << k << " Smallest element is: "<<arr[k]<<endl;
    cout<<"The " << k << " Greatest element is: "<<arr[n-k];
}
