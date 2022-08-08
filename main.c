#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n){
    for (int i=2;i<n;i++){
        if (n % i == 0){
            printf("Not a prime number\n");
            return 0;
        }
    };
        printf("%d is Prime\n",n);
        return 1;
};

int * primitiveRoots(int n){ /*function cannot natively return an array, it must return an address of an array*/

    static int array[255]; /*static allows return of local variable address to outside of function*/
    for (int i = 1; i<=n; i++){

        printf("%d\n",i);
    };

    return array;
};

int main(){
    isPrime(29);
    primitiveRoots(29);
return 0;
}

