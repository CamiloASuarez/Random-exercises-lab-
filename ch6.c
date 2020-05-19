#include <stdio.h>

int main(){
    int option;

    printf("Write a number between 1 and 6: \n");
    scanf("%i", &option);

    switch(option){
    case 1:
        printf("Today we gonna learn about programming.");
        break;
    case 2:
        printf("What about marketing course?");
        break;
    case 3:
        printf("Today its a great day to start learning about design.");
        break;
    case 4:
        printf("What about online business?");
        break;
    case 5:
        printf("Let's see a couple of classes about audiovisual production. ");
        break;
    case 6:
        printf("Maybe its a good time to develop a soft skill on PLATZI. ");
        break;
    default:
        printf("Are you sure your number was between 1 and 6?. Try again!");
        break;
    }
}
