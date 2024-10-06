#include <stdio.h>

int i = 1;
int j = 1;
float fac1 = 1;
float fac2 = 1;
float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);
float fact1(float a);
float fact2(float b);
void clearInputBuffer();

int main(){
    float x;
    float y;
    int op;
    int test;
    printf("first number:\n");
    while (scanf("%f", &x) != 1) {
        printf("Invalid input. Please enter a valid number:\n");
        clearInputBuffer();
    }
    printf("second number:\n");
    while (scanf("%f", &y) != 1) {
        printf("Invalid input. Please enter a valid number:\n");
        clearInputBuffer();
    }
    printf("choose operation 1 = add, 2 = minus, 3 = multiply, 4 = division, 5 = factorial for num1, 6 = factorial for num2\n");
    while (scanf("%d", &op) != 1 || op < 1 || op > 6) {
        printf("Invalid operation. Please choose 1, 2, 3, 4, 5, or 6:\n");
        clearInputBuffer();
    }

    if (op == 1){
        add(x,y);
    }
    else if (op == 2){
        sub(x,y);
    }
    else if (op == 3){
        mult(x,y);
    }
    else if (op == 4){
        div(x,y);
    }
    else if (op == 5){
        fact1(x);
    }
    else if (op == 6){
        fact2(y);
    }
return 0;
}

float add(float a, float b){
    printf("%f\n", a + b);
    return 0;
}

float sub(float a, float b){
    printf("%f\n", a - b);
    return 0;
}

float mult (float a, float b){
    printf("%f\n", a*b);
    return a*b;
}

float div(float a, float b){
if (b != 0){
    printf("%f\n", a/b);
    return 0;
}
else{
    printf("error! division by 0 not possible\n");
    return 0;
}
}
float fact1(float a){
    for (i=1; i<=a; i++){
        fac1 = fac1*i;
    }
    printf("%f\n", fac1);
return 0;
}

float fact2(float b){
    for (j=1; j<=b; j++){
        fac2 = fac2*j;
    }
    printf("%f\n", fac2);
return 0;
}

void clearInputBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    }