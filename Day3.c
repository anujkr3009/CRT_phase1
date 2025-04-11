// #include<stdio.h>
// int main(){
//     int ar[5];

//     ar[0] = 10;
//     ar[1] = 20;
//     ar[2] = 30;
//     ar[3] = 40;
//     ar[4] = 50;

//     printf("Array Elements------\n");
//     printf("%d", ar[3]);
//     printf("%d", ar[7]);     // garbage value 
    
    
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int ar[5];

//     ar[0] = 10;
//     ar[1] = 20;
//     ar[2] = 30;
//     ar[3] = 40;
//     ar[4] = 50;

//     printf("Array Elements------\n");
//     for(int i=0; i<5; i++){
//         printf("%d \n", ar[i]);
//         printf("%d \n", ar[4]);
//         printf("%d \n", ar[3]);
//     }
    
    
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int ar[5];

////input
//     printf("Enter elements in array\n");
//     for(int i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
////Output
//     printf("Array Elements------\n");
//     for(int i=0; i<5; i++){
//         printf("%d \n", ar[i]);
//     }
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     int ar[] = {10, 20, 30, 40, 50};

//     printf("Array Elements------\n");
//     for(int i=0; i<5; i++){
//         printf("%d \n", ar[i]);
//     }
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     //decleration
//     int ar[5], i, sum=0;
//     //input
//     printf("Enter elements in array\n");
//     for(int i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
//     //process
//     for(int i=0; i<5; i++){
//         sum = sum + ar[i];
//     }
//     //Output
//     printf("Sum of Array Elements is %d", sum);
    
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     //decleration
//     int ar[10], i;
//     //input
//     printf("Enter elements in array\n");
//     for(int i=0; i<10; i++){
//         scanf("%d", &ar[i]);
//     }
//     //process  //Output
//     for(int i=0; i<10; i++){
//         if (ar[i]%2==0){
//             printf("Even %d \n", ar[i]);
//         }else{
//             printf("Odd %d \n", ar[i]);
//         }
        
//     }
    
//     return 0;
// }






// #include<stdio.h>
// int main(){
//     //decleration
//     int ar[10], i, evencount=0, oddcount=0;
//     //input
//     printf("Enter elements in array\n");
//     for(int i=0; i<10; i++){
//         scanf("%d", &ar[i]);
//     }
//     //process  //Output
//     for(int i=0; i<10; i++){
//         if (ar[i]%2==0){
//             printf("Even %d \n", ar[i]);
//             evencount++;
//         }else{
//             printf("Odd %d \n", ar[i]);
//             oddcount++;
//         }
        
//     }
//     printf("NOS Even %d\n", evencount);
//     printf("NOS Odd %d", oddcount);
    
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     //decleration
//     int ar[10], i, evensum=0, oddsum=0;;
//     //input
//     printf("Enter elements in array\n");
//     for(int i=0; i<10; i++){
//         scanf("%d", &ar[i]);
//     }
//     //process  //Output
//     for(int i=0; i<10; i++){
//         if (ar[i]%2==0){
//             printf("Even %d \n", ar[i]);
//             evensum = evensum + ar[i];
//         }else{
//             printf("Odd %d \n", ar[i]);
//             oddsum = oddsum + ar[i];
//         }
        
//     }
//     printf("Sum of Even %d\n", evensum);
//     printf("Sum of Odd %d", oddsum);
    
//     return 0;
// }






// #include<stdio.h>
// int main(){
//     int ar[5], br[5], cr[5], i;
//     //input
//     printf("Enter elements in 1 array\n");
//     for(int i=0; i<5; i++){
//         scanf("%d", &ar[i]);
//     }
//     printf("Enter elements in 2 array\n");  
//     for(int i=0; i<5; i++){
//         scanf("%d", &br[i]);
//     }
//     //process
//     for(int i=0; i<5; i++){
//         cr[i] = ar[i] + br[i];
//     }
//     //output
//     printf("Array sum \n");
//     for(int i=0; i<5; i++){
//         printf("%d\n", cr[i]);
//     }

//     return 0;
// }






// #include<stdio.h>
// int main(){
//     int ar[3][4], r, c, sum=0;
//     //input
//     for(int r=0; r<3; r++){
//         for(int c=0; c<4; c++){
//             scanf("%d", &ar[r][c]);
//         }
//     }
//     //output
//     printf("2D Array Elements--\n");
//     for(int r=0; r<3; r++){
//         for(int c=0; c<4; c++){
//             printf("%d ", ar[r][c]);
//             sum =sum + ar[r][c];
//         }
//         printf("\n");
//     }
//     printf("Sum of 2D array is %d", sum);
//     return 0;
// }






#include<stdio.h>
int main(){
    int ar[3][4], r, c, sum=0, PositiveCount=0, NegativeCount=0;
    //input
    for(int r=0; r<3; r++){
        for(int c=0; c<4; c++){
            scanf("%d", &ar[r][c]);
        }
    }
    //output
    printf("2D Array Elements--\n");
    for(int r=0; r<3; r++){
        for(int c=0; c<4; c++){
            printf("%d ", ar[r][c]);
            sum =sum + ar[r][c];
                if(ar[r][c]>0){
                PositiveCount++;
                }else{
                NegativeCount++;
                }
            }
            printf("\n");
    }
    printf("Sum of 2D array is %d\n", sum);
    printf("Positive Count is %d\n", PositiveCount);
    printf("Negative Count is %d\n", NegativeCount);
    return 0;
}