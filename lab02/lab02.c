#include <stdio.h>

int main(){
    int arr[10];
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < 10; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}