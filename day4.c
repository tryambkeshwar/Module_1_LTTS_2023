//1//
#include<stdio.h>
int main() {
    // variable declaration
    int a[6],i;
    float sum=0,avg;
    printf("enter the array elements:");
    // loop initialise
    for(i=0;i<6;i++) {
    scanf("%d",&a[i]);    
    }
    // loop initialisation
    for(i=0;i<6;i++) {
        sum=sum+a[i];
        avg=sum/6;
    }
    // printig sum and average 
    printf("sum=%f\n",sum);
    printf("avg=%f",avg);
}

2.#include<stdio.h>
#define N 6
int main() {
    int n;
    int a[N],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);    
    }
    for(i=n-1;i>=0;i--) {
        printf("%d",a[i]);
    } 
}

3.#include<stdio.h>
#define N 6
int main() {
    int n,even=0,odd=0;
    int a[N],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]);    
    }
    for(i=0;i<n;i++) {
        if(a[i]%2==0) {
            even=even+a[i];
        }
        else {
            odd=odd+a[i];
    }
    }
    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
    printf("Difference between even and odd elements: %d\n", even -odd);


}