#include <stdio.h>

int menu() {
    int n;

    printf("\n~ Simple Calculator ~\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\n");
    printf("Select Mode > ");
    scanf("%d", &n);

    return n;
}

void addition(){
	int n1, n2;
	printf("\nEnter number 1> ");
	scanf("%d",&n1);
	printf("\Enter number 2> ");
	scanf("%d",&n2);

	printf("Result is: %d\n", n1+n2);
}

void subtraction(){
    //여기에 구현해주세요!
	int n1, n2;
	printf("\nEnter number 1> ");
	scanf("%d", &n1);
	printf("Enter number 2> ");
        scanf("%d",&n2);

        printf("Result is: %d\n", n1-n2);

}

void multiplication() {
    int n1, n2;

    printf("\nEnter number 1 > ");
    scanf("%d", &n1);
    printf("Enter number 2 > ");
    scanf("%d", &n2);

    printf("Result is: %d\n", n1*n2);
}

void division() {
    int n1, n2;
    float result=0.0;

    printf("\nEnter number 1 > ");
    scanf("%d", &n1);
    printf("Enter number 2 > ");
    scanf("%d", &n2);

    result = (n1*1.0)/(n2*1.0);
    printf("Result is: %.1f\n", result);
}

int main(void) {
    int mode;

    while(1) {
        mode = menu();

        if (mode == 1) {
            addition();
        }

        else if (mode == 2) {
            subtraction();
        }

        else if (mode == 3) {
            multiplication();
        }

        else if (mode == 4) {
            division();
        }

        else if (mode == 0) {
            break;
        }
        
        else {
            printf("wrong input!");
            continue;
        }
    }
    printf("~ Good bye ~\n");

    return 0;
}
