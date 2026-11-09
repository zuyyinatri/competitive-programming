#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    int arr_left[n1], arr_right[n2];

    for(int i = 0; i < n1; i++)
        arr_left[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        arr_right[j] = arr[m + 1 + j];

    int k = l;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(arr_left[i] <= arr_right[j]){
            arr[k] = arr_left[i];
            i++;
        }
        else{
            arr[k] = arr_right[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = arr_left[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = arr_right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int m = (r + l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main () {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n];
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);

            if(arr[i] % 2 == 0)
                even = 1;
            else
                odd = 1;
        }

        if(even && odd)
            mergeSort(arr, 0, n - 1);

        for(int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}
