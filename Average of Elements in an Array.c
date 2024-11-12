#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    float arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    float average = sum / n;
    printf("Average: %.2f\n", average);
    return 0;
}
