#include<stdio.h>

 int *findMid(int arr[] ,int n);


int main () {
	
	int a[] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a,n);
    printf("%d" ,*mid);
    return 0;
    
}
int *findMid(int arr[] ,int n) {
	return &arr[n/2];
}
