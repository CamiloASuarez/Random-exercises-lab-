int main (){
    int upper,lower,c,result;

    printf("Write the upper limit number: \n");
    scanf("%i", &upper);

    printf("Write the lower limit number: \n");
    scanf("%i", &lower);

    printf("Write the comparative number: \n");
    scanf("%i", &c);

    if(c>lower && c<upper){
        printf("The number %i is in the range \n");
    }else if(c<lower || c>upper){
        printf("The number %i is out of range \n");
    }
}
