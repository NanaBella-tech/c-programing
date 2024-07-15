#include <stdio.h>
int main(){
int n;
// prompt the user for input
printf("Enter a positive integer (n): ");
scanf("%d", &n);
 // print numbers from 1 to n
 for (int i =1; i <=n; i++){
     printf("%d\n", i);
 }
    return 0;
 }