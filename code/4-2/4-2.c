#include <stdio.h>

int sum(int arr[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }
    return s;
}

double average(int arr[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }
    return (double)s / n;
}

int max(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }
    return m;
}

int main(){
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
