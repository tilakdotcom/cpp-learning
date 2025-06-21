//cpp day 5
#include <bits/stdc++.h>
using namespace std;

int nextGap(int gap) {
    if (gap <= 1) return 0;
    return (gap / 2) + (gap % 2);
}

void merge(long long arr1[], long long arr2[], int n, int m) {
    int gap = nextGap(n + m);
    while (gap > 0) {
        int i = 0, j = gap;
        while (j < (n + m)) {
            if (j < n) {
                if (arr1[i] > arr1[j]) swap(arr1[i], arr1[j]);
            } else if (i < n && j >= n) {
                if (arr1[i] > arr2[j - n]) swap(arr1[i], arr2[j - n]);
            } else {
                if (arr2[i - n] > arr2[j - n]) swap(arr2[i - n], arr2[j - n]);
            }
            i++;
            j++;
        }
        gap = nextGap(gap);
    }
}