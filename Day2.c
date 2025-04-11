#include<stdio.h>
int main(){
    // int i;
    // for(i=1; i<=5; i++){
    //     printf("Hello \n");
    // }
    // printf("\n--------\n");
    // printf("Value of i is %d", i);



    // int i;
    // for(i=1; i<=5; i++);
    // {
    //     printf("Hello  %d", i);
    // }




    // int i;
    // for(i=5; i>=1; i--){
    //     printf("Hello %d\n", i);
    // }
    // printf("\n--------\n");
    // printf("Value of i is %d", i);



    // int i, last;
    // printf("Enter the last number:");
    // scanf("%d", &last);
    // for(i=1; i<=last; i++){
    //     printf("Hello %d\n", i);
    // }



    // int i, start, last;
    // printf("Enter the start number:");
    // scanf("%d", &start);
    // printf("Enter the last number:");
    // scanf("%d", &last);
    
    // for(i=start; i<=last; i++){
    //     printf("Hello %d\n", i);
    // }




    // int var;
    // printf("Enter the number:");
    // scanf("%d", &var);
    // for(int i=1; i<=var; i++){
    //     printf("%d",var);
    // }



    // int i;
    // for(i=1; i<=10; i++){
    //     if (i>5){
    //         break;
    //     }else{
    //         printf("%d \n", i);
    //     }
    // }



    // int i;
    // for(i=1; i<=10; i++){
    //     if (i==5){
    //         continue;
    //     }else{
    //         printf("%d \n", i);
    //     }
    // }




    // int i;
    // for(i=1; i<=10; i++){
    //     if (i%2==0){
    //         printf("%d \n", i);
    //     }
    // }



    // int i;
    // for(i=1; i<=10; i++){
    //     if (i%2==0){
    //         printf("Even %d \n", i);
    //     }else if((i%2)!=0 || i%2==1){
    //         printf("Odd %d \n", i);
    //     }
    // }



    // int i, sum;
    // for (i=1; i<=5; i++){
    //     sum = sum + i;
    //     printf("%d ", i);
    // }
    // printf("\n");
    // printf("Sum is %d", sum);



    // int i,j;
    // for (i=1; i<=5; i++){
    //     for(j=1; j<=5; j++){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }




    // int i,j;
    // for (i=1; i<=5; i++){
    //     for(j=1; j<=9; j=j+2){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }





    // int i,j;
    // for (i=9; i>=1; i=i-2){
    //     for(j=1; j<=5; j++){
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }




    // int i=1;
    // while (i<=5){
    //     printf("Hello \n");
    //     i++;
    // }
    



    // int i=1, sum =0;
    // while (i<=5){
    //     printf("Hello %d\n", i);
    //     sum = sum + i;
    //     i++;
    // }



    // // how many character 
    // int a=3475, count= 0;
    // while(a>0){
    //     count++;
    //     a=a/10;
    // }
    // printf("Number of digits are %d", count);



    //sum of digit 
    int a=347, count= 0;
    while(a>0){
        a=a%10;
        count = count + a;
    }
    printf("Sum of digits are %d", count);

    return 0;
}