// #include<stdio.h>
// #include<conio.h>
// int main(){
//     char str[20];
//     printf("Enter any value:");
//     //scanf("%s", str);
//     //  or
//     gets(str);

//     //printf("You have entered %s", str);
//     //  or
//     puts(str);

//     return 0;
// }







// #include<stdio.h>
// #include<conio.h>
// int main(){
//     char str[20];
//     printf("Enter any value:");
//     gets(str);
//     printf("\n");
//     puts(str);
//     printf("----------\n");

//     strupr(str);
//     strlwr(str);
//     puts(str);
//     return 0;
// }









// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main(){
//     char str1[20], str2[20];
//     printf("Enter 1nd String: ");
//     gets(str1);
//     printf("Enter 2nd String: ");
//     gets(str2);
//     printf("\n");

//     puts(str1);
//     puts(str2);
//     printf("----------\n");
//     strcat(str1, str2);
//     puts(str1);

//     return 0;
// }









// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main(){
//     char str1[20], str2[20], res;
//     printf("Enter 1nd String: ");
//     gets(str1);
//     printf("Enter 2nd String: ");
//     gets(str2);
//     printf("\n");

//     puts(str1);
//     puts(str2);
//     printf("----------\n");
//     res = strcmp(str1, str2);
//     if(res==0){
//         printf("Match \n");
//     }else{
//         printf("No Match \n");
//     }

//     return 0;
// }










// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// //argument with return value
// int sum(int a, int b);  //declarition
// int main(){
//     int x=10, y=24, z;
//     z=sum(x,y);           // calling
//     printf("Total : %d",z);
// }
// int sum(int a, int b){  //definition
//     int res=a+b;
//     return res;
// }









// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// //argument with NO return value
// void sum(int a, int b);  //declarition
// int main(){
//     int x=10, y=24, z;
//     sum(x,y);           // calling
// }
// void sum(int a, int b){  //definition
//     int res=a+b;
//     printf("Total : %d", res);
// }








// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// // NO argument with return value
// int sum();  //declarition
// int main(){
//     int z;
//     z=sum();           // calling
//     printf("Total : %d",z);
// }
// int sum(){  //definition
//     int a=23, b=56, res=a+b;
//     return res;
// }








// #include<stdio.h>
// #include<conio.h>
// #include<string.h>

// // NO argument with NO return value
// void sum();  //declarition
// int main(){
//     int z;
//     sum();           // calling
// }
// void sum(){  //definition
//     int a=23, b=56, res=a+b;
//     printf("Total : %d",res);
// }










// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// // argument with return value
// int DigitCount(long a);
// int main()
// {
//     long x = 23457;
//     int res;
//     printf("%d", x);
//     res = DigitCount(x);
//     printf("\nTotal digits : %d", res);
// }
// int DigitCount(long a)
// {
//     int count = 0;
//     while (a > 0)
//     {
//         count++;
//         a = a / 10;
//     }
//     return count;
// }






// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// // argument with  NO return value
// void DigitCount(long a);
// int main(){
//     long x = 23457;
//     printf("Enter value : ");
//     scanf("%ld", &x);
//     DigitCount(x);
// }
// void DigitCount(long a){
//     int count = 0;
//     while (a > 0){
//         count++;
//         a = a / 10;
//     }
//     printf("\nTotal digits : %d", count);
// }






#include <stdio.h>
#include <conio.h>
#include <string.h>

// NO argument with return value
int DigitCount();
int main(){
    long x = 23457;
    printf("Enter value : ");
    scanf("%ld", &x);
    DigitCount(x);
}
int DigitCount(){
    int count = 0;
    while (a > 0){
        count++;
        a = a / 10;
    }
    printf("\nTotal digits : %d", count);
}