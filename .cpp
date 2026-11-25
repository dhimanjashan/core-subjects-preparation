#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int mostFrequentRating(int arr[], int size)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    int maximum = 0;
    int answer=-1;
    for (auto it : mp)
    {
        maximum = max(maximum, it.second);
        answer=it.first;
    }
    return answer;
}
int main()
{
    int arr[] = {5, 4, 5, 3, 5, 4};
    cout << mostFrequentRating(arr, 6);
}