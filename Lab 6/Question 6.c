#include <stdio.h>
int main(){
    
    int n;
    printf("Enter the meter reading digits: ");
    scanf("%d", &n);
    
    int even = 0, odd = 0;
    int reading[n];
    for(int i =0;i<n;i++){
        printf("Enter the digit %d: ",i+1);
        scanf("%d",&reading[i]);

        if (reading[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }// calculating --> if even and odd digits
    }

    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);

    return 0;
}