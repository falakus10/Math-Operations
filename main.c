#include <stdio.h>


int sum(int , int );
int minus(int , int );
int divide(int , int );
int multiply(int , int );

int main() {
    
   int(*functions[4])(int, int) = {sum, minus, multiply, divide};
   for (int i = 0; i < 4; ++i){
       printf("%p\n", (*functions[i]));
   }
   char *operations[] = {"Addition" , "Subtraction", "Multiplication", "Division"};
    for (int i = 0; i < 4; ++i){
        printf("Answer of %s : %d\n",operations[i], (*functions[i])(6, 2));
    }

    return 0;
}

int sum(int a, int b){
    return a + b;
}
int minus(int a, int b){
    return a - b;
}
int divide(int a, int b){
    if(b !=0) {
        return a / b;
    }else{
        printf("Divisor cant be zero");
        return 0;
    }
}
int multiply(int a, int b){
    return a * b;
}
