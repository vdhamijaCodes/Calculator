#include<stdio.h>
#include<math.h>

double add(double a, double b){
    return a+b;
}

double sub(double a, double b){
    return a-b;
}

double mult(double a, double b){
    return a*b;
}

double div(double a, double b){
    if(b == 0){
        return -1;
    }
    return a/b;
}

double pow(double a, double b){
    return pow(a,b);
}

int main(){
    
    printf("To start press 1 and to quit press 0\n");

    int start;
    scanf("%d", &start);

    while(start){
        char op;
        double a, b, res;

        // Read the operator
        printf("Enter an operator (+, -, *, /): ");
        op = getchar();
        // Read the two numbers
        printf("\nEnter two operands: \n")1;
        scanf("%lf %lf", &a, &b);

        if(op == '+'){
        printf("Sum : %.0lf\n", add(a,b));
        }
        else if(op == '-'){
            printf("Difference : %.0lf\n", sub(a,b));
        }
        else if(op == '*'){
            printf("Answer : %.0lf\n",mult(a,b)); 
        }
        else if(op == '/'){
            printf("Answer : %.0lf\n", div(a,b));
        }
        else if(op == '^'){
            printf("Answer : %.0lf", pow(a,b));
        }
        else{
            printf("Invalid Operator : please click 1 to start again or click 0 to quit\n");
        }

        printf("To start Again click 0 else click 1 : \n");
        scanf("%d", &start);
    }
}

