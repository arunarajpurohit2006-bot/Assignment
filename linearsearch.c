#include <stdio.h>
int linearsearch(int arr[], int s, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == s)
            return i;
    }
    return -1;
}

int main() {
    int n,i,arr[100],s,p;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter search element: ");
    scanf("%d", &s);
    p=linearsearch(arr, s, n);
    if (p!=-1) 
        printf("element found at %d",p);
    else 
        printf("element not found");
    return 0;
}
