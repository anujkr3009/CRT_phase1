#include<stdio.h>
int main(){
    // int var = 10;
    // printf("My age is %d", var);



    // int var;
    // printf("Enter your age:");
    // scanf("%d", &var);
    // printf("Your age is %d", var);



    // int var;
    // printf("Enter your age:");
    // scanf("%d", &var);

    // if(var >= 18){
    //     printf("You are valid for DL");
    // }else{
    //     printf("Sorry !! you are under 18");
    // }



    // char var;
    // printf("Enter any Character:");
    // scanf("%c", &var);
    // printf("\n");
    // printf("ASCII value of %c is %d", var, var);



    // char var;
    // printf("Enter any Key:");
    // scanf("%c", &var);
    // if((var>=65 && var<=90) || (var>=97 && var<=122)){
    //     printf("U entered Alphabatical Key %c", var);
    // }
    // if(var>=48 && var<=57){
    //     printf("U have entered Numeric key %c", var);
    // }
    // if(var==10){
    //     printf("U have entered Enter key");
    // }
    // if(var==32){
    //     printf("U have enterd Space key");
    // }




    // char var;
    // printf("Enter any Key:");
    // scanf("%c", &var);
    // if((var>=65 && var<=90) || (var>=97 && var<=122)){
    //     printf("U entered Alphabatical Key %c", var);
    // }
    // else if(var>=48 && var<=57){
    //     printf("U have entered Numeric key %c", var);
    // }
    // else if(var==10){
    //     printf("U have entered Enter key");
    // }
    // else if(var==32){
    //     printf("U have enterd Space key");
    // }




    int var1, var2, res, ch;
    printf("Enter the First number :");
    scanf("%d", &var1);
    printf("Enter the Second number :");
    scanf("%d", &var2);

    printf("Press 1 for Addition \n");
    printf("Press 2 for Subtraction \n");
    printf("Press 3 for Division \n");
    printf("Press 4 for Multiplication \n");

    printf("Enter your choice :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        res = var1 + var2;
        printf("Addition is %d", res);
        break;
    case 2:
        res = var1 - var2;
        printf("Subtraction is %d", res);
        break;
    case 3:
        res = var1 / var2;
        printf("Divion is %d", res);
        break;
    case 4:
        res = var1 * var2;
        printf("Multiplication is %d", res);
        break;
    default:
    printf("Invalid Choice");
        break;
    }
    

    return 0;
}