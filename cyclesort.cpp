#include <bits/stdc++.h> 
using namespace std; 
void cycleSort(int arr[], int n) 
{ 
    int writes = 0;
    for (int i = 0; i <= n - 2; i++) { 
        int item = arr[i]; 
        int pos = i; 
        for (int j = i + 1; j < n; j++) 
            if (arr[j] < item) 
                pos++; 
        if (pos == i) 
            continue; 
        while (item == arr[pos]) 
            pos += 1; 
        if (pos != i) { 
            swap(item, arr[pos]); 
            writes++; 
        } 
        while (pos != i) { 
            pos = i  
            for (int j= i + 1; j< n; j++)
                if (arr[j]< item) 
                    pos += 1; 
            while (item == arr[pos]) 
                pos += 1;  
            if (item != arr[pos]) { 
                swap(item, arr[pos]); 
                writes++; 
            } 
        } 
    }
} 
int main() 
{ 
    int arr[] = { 1, 5, 2, 7, 8, 3, 0, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cycleSort(arr, n);  
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 
