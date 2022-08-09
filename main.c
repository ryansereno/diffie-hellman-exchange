#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

int * primitiveRoot(int prime){ /*function cannot natively return an array, it must return an address of an array*/

    static int array[255]; /*static allows return of local variable address to outside of function*/
    int primitiveRoots[255];
    double numToCheck = 0;
    for (int i = 1; i<=prime; i++){
        numToCheck++;
        int possibleRoots[255];
        for (int i = 1; i<=prime; i++){
            int modulus = (int)pow(numToCheck,i)% prime; /*modulus only accepts int values*/
            int *possibleRoots[i-1]; /* initialize pointer vaiable*/
            possibleRoots[i-1] = &modulus; /*set pointer variable to be the memory address of the modulus variable*/
        printf("%d\n",modulus);

        }
    };

    return array;
};

int main(){
    isPrime(29);
    primitiveRoot(3);
return 0;
}

