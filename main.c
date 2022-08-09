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

    static int primitiveRoots[255]; //static allows return of local variable address to outside of function
    //int primitiveRoots[255];
    int numToCheck = 0;
    for (int i = 1; i<=prime; i++){
        numToCheck++;
        int possibleRoots[255];
        for (int i = 1; i<=prime; i++){

            //modulus only accepts int values;
            //pow() returns a float, so it must be
            //converted with (int) prefix
            int modulus = (int)pow(numToCheck,i)% prime; 

            //initialize pointer vaiable
            int *possibleRoots[i-1]; 

            //set pointer variable to be the memory
            //address of the modulus variable
            possibleRoots[i-1] = &modulus; 

            if (sizeof(possibleRoots) == prime){
                int *primitiveRoots[i-1];
                primitiveRoots[i-1] = &numToCheck;
            }
            
        //printf("%lu\n",sizeof(primitiveRoots));

        }
    };

    return primitiveRoots;
};

int main(){
    isPrime(11);
    printf("%d", *primitiveRoot(3));   //function returns a pointer, so return value must be dereferenced
return 0;
}

