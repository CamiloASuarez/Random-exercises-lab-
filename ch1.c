int main(){
  int a,b;

  printf("Write a number");
  scanf("%i", &a);

  printf("Write the second number");
  scanf("%i", &b);

  if(a>b){
    printf("The major number is %i", a);
  }else if(a < b){
    printf("the major number is %i", b);
  }else if(a==b){
    printf("Both numbers are equal", a,b);
  }else {
    printf("write real numbers, Invalid numbers, TRY AGAIN!!");
  }
}
