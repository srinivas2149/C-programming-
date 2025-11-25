
#include <stdio.h>

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int numbers[] = {10, 20, 30, 50};
    display(numbers, 4); // passing array to function
    return 0;
}
