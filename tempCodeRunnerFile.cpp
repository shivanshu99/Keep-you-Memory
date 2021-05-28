#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max1 = -9999;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
cout<<max1<<endl;
    int ind[max1]={-1};
    
    int min_num = 10000;
    int min_ind = 0;
     for (int i = 0; i < max1; i++)
    {
        cout<<ind[i]<<endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (ind[arr[i]] == -1)
        {
            ind[arr[i]] = arr[i];
        }
        else if (ind[arr[i]] == arr[i])
        {
            min_ind = i + 1;
        }
        min_num = min(min_ind, min_num);
    }
    cout << min_num;

    return 0;
}