#include <stdio.h>

int main() {
  int i;  
  printf("For Loop\n");
    for(i=0;i<=3;i++){
        printf("%d",i);
    }   
    printf("\nWhile Loop\n");
    int a=0;
    while(a<=3){
        printf("%d",a);
        a++;
    }
    printf("\n Do while Loop\n");
    int b=0;
    do{
        printf("%d",b);
        b++;
    }while(b<=3);


    return 0;
}
