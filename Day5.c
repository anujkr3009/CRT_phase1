// #include<stdio.h>
// #include<conio.h>
// struct Student{
//     int s_id;
//     char name[20];
//     float fees;
// };
// int main(){
//     struct Student S;
//     printf("Enter student id : ");
//     scanf("%d",&S.s_id);
//     printf("Enter student name : ");
//     fflush(stdin);
//     gets(S.name);
//     printf("Enter course fees : ");
//     scanf("%f",&S.fees);

//     printf("\n----------Student Details-----------\n");
//     printf("Student ID : %d\n",S.s_id);
//     printf("Student Name : %s\n",S.name);
//     printf("Course Fees : %f\n",S.fees);
//     return 0;
// }






// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a=10;
//     int *p;
//     printf("Value of variable a : %d\n",a);
//     printf("Address of variable a : %d\n",&a);

//     printf("-------------------\n");
//     p = &a;
//     printf("Value of variable a by pointer : %d\n",p);
//     printf("Address of variable a by pointer : %d\n",*p);
//     return 0;
// }







// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int ar[5];
//     int i;

//     printf("Enter elements in array : ");
//     for(i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
//     printf("---------Array---------");
//     for(i=0; i<5; i++){
//         printf("\nValue of %d", ar[i]);
//         printf("\t Address %d", &ar[i]);
//     }
//     return 0;
// }







// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int ar[5];
//     int i, *ptr;

//     printf("Enter elements in array : ");
//     for(i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
//     printf("---------Array---------");
//     for(i=0; i<5; i++){
//         printf("\nValue of %d", ar[i]);
//         printf("\t Address %d", &ar[i]);
//     }
//     printf("\n---------Pointer---------");
//     for(i=0; i<5; i++){
//         ptr = &ar[i];
//         printf("\nValue of %d", *ptr);
//         printf("\t Address %d", ptr);
//     }
//     return 0;
// }










// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int ar[5];
//     int i, *ptr, sum=0;

//     printf("Enter elements in array : ");
//     for(i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
//     printf("---------Array---------");
//     for(i=0; i<5; i++){
//         printf("\nValue of %d", ar[i]);
//         printf("\t Address %d", &ar[i]);
//     }
//     printf("\n---------Pointer---------");
//     for(i=0; i<5; i++){
//         ptr = &ar[i];
//         printf("\nValue of %d", *ptr);
//         printf("\t Address %d", ptr);
//         sum=sum+*ptr;
//     }
//     printf("\nSum of array elements : %d", sum);
//     return 0;
// }







// // Merge of array
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int ar[5], br[5], cr[5];
//     int i, *ptr1, *ptr2, sum=0, *crptr;

//     printf("Enter elements in 1st array : ");
//     for(i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
//     printf("Enter elements in 2nd array : ");
//     for(i=0; i<5; i++){
//         scanf("%d", &br[i]);
//     }
//     printf("---------1st Array---------");
//     for(i=0; i<5; i++){
//         printf("\nValue of %d", ar[i]);
//         printf("\t Address %d", &ar[i]);
//     }
//     printf("\n---------2st Array---------");
//     for(i=0; i<5; i++){
//         printf("\nValue of %d", br[i]);
//         printf("\t Address %d", &br[i]);
//     }
//     printf("\n---------Pointer---------");
//     for(i=0; i<5; i++){
//         ptr1 = &ar[i];
//         ptr2 = &br[i];

//         cr[i]=*ptr1+*ptr2;
//         crptr = &cr[i];
//         printf("\nValue of %d", *crptr);
//         printf("\t Address %d", crptr);
//     }

//     return 0;
// }









// 1d array using pointer
#include<stdio.h>
int main(){
    int ar[5], *ptr;
    printf("Enter elements in array\n");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }
    printf("Array Elements------\n");
    for(int i=0; i<5; i++){
        printf("%d \n", ptr[i]);
    }
    return 0;
}