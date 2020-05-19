int main(){
    int a,b;

    printf("Please write a number: \n");
    scanf("%i", &a);
    printf("Please write a number: \n");
    scanf("%i", &b);

    if(b<a){
        printf("The number %i is in the range, THANKS!!", b);
    }else if(b>a){
         printf("The number %i exceeds the ALLOWED LIMIT!!", b);
    }
}
