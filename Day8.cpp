// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int last, start;
//             cout<<"Enter the starting position: "<<endl;
//             cin>>start;
//             cout<<"Enter the last position: "<<endl;
//             cin>>last;
//             for(int i=start; i<=last; i++){
//                 cout<<i<<endl;
//             }
//         }
// };
// int main(){

//     loop l;
//     l.func();

//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int i=1;
//             do{
//                 cout<<i<<endl;
//                 i++;
//             } while (i<=5); 
//         }
// };
// int main(){

//     loop l;
//     l.func();

//     return 0;
// }








// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int i=1;
//             do{
//                 cout<<i<<endl;
//                 i++;
//             } while (i>=5); 
//         }
// };
// int main(){

//     loop l;
//     l.func();

//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int pri;
//             float rate;
//             int time;
//             double SI;
//             char ch;
//             do{
//                 cout<<"Enter Principle Amount:"<<endl;
//                 cin>>pri;
//                 cout<<"Enter Rate of Interest:"<<endl;
//                 cin>>rate;
//                 cout<<"Enter Time:"<<endl;
//                 cin>>time;

//                 SI = (pri*rate*time)/100;
//                 cout<<"Simple Interest is: "<<SI<<endl;

//                 cout<<"Do you want to continue? (Y/N)"<<endl;
//                 cin>>ch;
//             } while (ch=='Y' || ch=='y');
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }










// // using array in for loop
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[]={10, 20, 30, 40, 50};
//             for(int i=0; i<5; i++){
//                 cout<<ar[i]<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[5];
//             int i;
//             cout<<"Enter elements in the array: "<<endl;
//             for(int i=0; i<5; i++){
//                 cin>>ar[i];
//             }
//             cout<<"---- Array Element ----"<<endl;
//             for(int i=0; i<5; i++){
//                 cout<<ar[i]<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }











// // Replacing elemnet in array
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[10];
//             int i;
//             cout<<"Enter elements in the array: "<<endl;
//             for(int i=0; i<10; i++){
//                 cin>>ar[i];
//             }
//             cout<<"---- Array Element ----"<<endl;
//             for(int i=0; i<10; i++){
//                 if(ar[i]==50){
//                     ar[i]=75;
//                 }
//                 cout<<ar[i]<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }












// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[10];
//             int i, OldValue, NewValue;
//             cout<<"Enter elements in the array: "<<endl;
//             for(i=0; i<10; i++){
//                 cin>>ar[i];
//             }
//             cout<<"Enter old element: "<<endl;
//             cin>>OldValue;
//             cout<<"Enter new element: "<<endl;
//             cin>>NewValue;

//             cout<<"---- Array Element ----"<<endl;
//             for(i=0; i<10; i++){
//                 if(ar[i]==OldValue){
//                     ar[i]=NewValue;
//                 }
//                 cout<<ar[i]<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }














// // 2d array using for loop
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[3][4];
//             int i, j;
//             cout<<"Enter elements in the array: "<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<4; j++){
//                     cin>>ar[i][j];
//                 }
//             }
//             cout<<"---- 2D Array ----"<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<4; j++){
//                     cout<<ar[i][j]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[3][3];
//             int i, j;
//             cout<<"Enter elements in the array: "<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     cin>>ar[i][j];
//                 }
//             }
//             cout<<"------After reverse---------"<<endl;
//             for(i=0; i<3; i++){
//                 for(j=2; j>=0; j--){
//                     cout<<ar[i][j]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }











// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[3][3];
//             int i, j;
//             cout<<"Enter elements in the array: "<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     cin>>ar[i][j];
//                 }
//             }
//             cout<<"------After reverse---------"<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     if((i+j)%2 == 1 || i==1 && j==1){
//                         cout<<ar[i][j]<<" ";
//                     }else{
//                         cout<<"  ";
//                     }
//                 }
//                 cout<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[3][3];
//             int i, j;
//             cout<<"Enter elements in the array: "<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     cin>>ar[i][j];
//                 }
//             }
//             cout<<"------After reverse---------"<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     if((i+j)%2 == 0 || i==1 && j==1){
//                         cout<<ar[i][j]<<" ";
//                     }else{
//                         cout<<"  ";
//                     }
//                 }
//                 cout<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class loop{
//     public:
//         void func(){
//             int ar[3][3];
//             int i, j;
//             cout<<"Enter elements in the array: "<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     cin>>ar[i][j];
//                 }
//             }
//             cout<<"------After Transpose---------"<<endl;
//             for(i=0; i<3; i++){
//                 for(j=0; j<3; j++){
//                     cout<<ar[j][i]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
// };
// int main(){
//     loop l;
//     l.func();
//     return 0;
// }








// maege of array
#include<iostream>
#include<conio.h>
using namespace std;
class loop{
    public:
        void func(){
            int ar[3][3], br[3][3], cr[3][3];
            int i, j;

            cout<<"Enter elements in 1st array: "<<endl;
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    cin>>ar[i][j];
                }
            }
            cout<<"Enter elements in 2nd array: "<<endl;
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    cin>>br[i][j];
                }
            }
            cout<<"------After Addition---------"<<endl;
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    cr[i][j] = ar[i][j] + br[i][j];
                    cout<<cr[i][j]<<" ";
                }
            cout<<endl;
        }
    }
};
int main(){
    loop l;
    l.func();
    return 0;
}