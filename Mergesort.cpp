#include<bits/stdc++.h>
using namespace std;

void merge(vector <int> &a, int l, int mid, int r, int &comparisons, int &inversions)
{
    vector<int> leftArray (mid - l + 1);
    vector<int> rightArray (r - mid);
 
    for (register int i = 0; i < leftArray.size(); i++)
        leftArray[i] = a[l + i];
    for (register int j = 0; j < rightArray.size(); j++)
        rightArray[j] = a[mid + 1 + j];
 
    auto iOne = 0, iTwo = 0;
    int indexOfMergedArray = l;
 
    while (iOne < leftArray.size() && iTwo < rightArray.size()) 
    {
        if (leftArray[iOne] <= rightArray[iTwo]) 
        {
            a[indexOfMergedArray] = leftArray[iOne];
            iOne++;
        }
        else 
        {
            a[indexOfMergedArray] = rightArray[iTwo];
            iTwo++;
            inversions++;
        }
        indexOfMergedArray++;
        comparisons++;
    }
 
    while (iOne < leftArray.size()) 
    {
        a[indexOfMergedArray] = leftArray[iOne];
        iOne++;
        indexOfMergedArray++;
    }
 
    while (iTwo < rightArray.size()) 
    {
        a[indexOfMergedArray] = rightArray[iTwo];
        iTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(vector<int> &a, int l, int r, int &comparisons, int &inversions)
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;

    mergeSort(a, l, mid, comparisons, inversions);
    mergeSort(a, mid + 1, r, comparisons, inversions);

    merge(a, l, mid, r, comparisons, inversions);

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(register int i = 0;i<n;i++)
            cin>>a[i];

        int comparisons = 0;
        int inversions = 0;

        mergeSort(a, 0, n-1, comparisons, inversions);

        for(auto it: a)
            cout<<it<<" ";
        cout<<endl;
        cout<<"Comparisons = "<<comparisons<<endl;
        cout<<"Inversions = "<<inversions<<endl;
    }
}
