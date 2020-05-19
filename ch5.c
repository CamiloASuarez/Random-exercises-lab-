#include <stdio.h>

int main(){
    int age;

    printf("What is your age? \n");
    scanf("%i", &age);

    if( age >= 30)
         printf("Never its late to learn. what course will we take?", age);

    else if(age <= 29 && age >= 18 )
        printf("It is an excellent time to boost your career");

    else if(age < 18)
        printf("Do you know where to direct your future? Sure I can help you.");

}

