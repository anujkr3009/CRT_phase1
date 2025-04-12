// #include<iostream>
// using namespace std;

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n, flag = 0;

//     cout << "Enter the element to search: ";
//     cin >> n;
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] == n) {
//             cout << "Element found at index " << i << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0) {
//         cout << "Element not found in the array" << endl;
//     }
//     return 0;
// }










// #include<iostream>
// using namespace std;
// class loop{
//     public:
//     void func(){
//     int ar[] = {34,54,56,98,34};
//     int max = 0;
//     for(int i=0;i<5;i++){
//         if(max < ar[i]){
//             max = ar[i];
//         }
//     }
//     cout<<"Greater value is "<<max;
// }
// };
// int main(){
//     loop l;
//     l.func();
// }













// #include<iostream>
// #include<conio.h>
// using namespace std;
// class College{
//     private:
//         int notes;
//     public:
//         College(){
//             notes = 10;
//     }
//     friend int dost(College id);
// };
// int dost(College id){
//     return id.notes;
// }
// int main(){
//     College id;
//     cout<<dost(id)<<endl;
//     return 0;
// }













// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int a[5], b[5], c[5];
//         int i;
//         cout<<"Enter element in 1st array: "<<endl;
//         i=0;
//         while(i<5){
//             cin>>a[i];
//             i++;
//         }
//         cout<<"Enter element in 2nd array: "<<endl;
//         i=0;
//         while(i<5){
//             cin>>b[i];
//             i++;
//         }
//         // merge two array
//         for(i=0;i<10;i++){
//             if(i<5){
//                 c[i] = a[i];
//             }else{
//                 c[i] = b[i-5];
//             }
//         }
//         cout<<"Merged array is: "<<endl;
//         for(i=0;i<10;i++){
//             cout<<c[i]<<" ";
//         }
//         cout<<endl;
//     } 
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int a[5], b[5], c[5];
//         int i;
//         cout<<"Enter element in 1st array: "<<endl;
//         i=0;
//         while(i<5){
//             cin>>a[i];
//             i++;
//         }
//         cout<<"Enter element in 2nd array: "<<endl;
//         i=0;
//         while(i<5){
//             cin>>b[i];
//             i++;
//         }
//         // merge two array
//         int z = 0;
//         for(i=0;i<10;i++){
//             if(i<5){
//                 c[i] = a[i];
//             }else{
//                 c[i] = b[z];
//                 z++;
//             }
//         }
//         cout<<"Merged array is: "<<endl;
//         for(i=0;i<10;i++){
//             cout<<c[i]<<" ";
//         }
//         cout<<endl;
//     } 
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }










// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------Array Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(i>=j){
//                     cout<<ar[i][j]<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }











// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------Array Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(i<=j){
//                     cout<<ar[i][j]<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }











// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------Array Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(i<=j){
//                     cout<<ar[i][j]<<" ";
//                 }else{
//                     cout<<"  ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }











// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------Array Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(i<=j){
//                     cout<<ar[i][j]<<" ";
//                 }else{
//                     cout<<"  ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }














// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------Array Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(ar[i][j] % 2 == 0){
//                     cout<<ar[i][j]<<" ";
//                 }else{
//                     cout<<"  ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------Array Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(ar[i][j] % 2 == 1){
//                     cout<<ar[i][j]<<" ";
//                 }else{
//                     cout<<"  ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }











// #include<iostream>
// #include<conio.h>
// using namespace std;
// class ArrayDemos{
//     public:
//     void func(){
//         int ar[3][3];
//         int i, j;
//         int count = 0;
//         cout<<"Enter element in array: "<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         cout<<"------After Format-------"<<endl;
//         for(i=0;i<3;i++){
//             for(j=0;j<3;j++){
//                 if(ar[i][j] % 10 == 0){
//                     cout<<ar[i][j]<<" ";
//                     count++;
//                 }else{
//                     cout<<"  ";
//                 }
//             }
//             cout<<endl;
//         }
//         cout<<"Total number of elements divisible by 10: "<<count<<endl;
//     }
// };
// int main(){
//     ArrayDemos ad;
//     ad.func();
//     return 0;
// }














#include<iostream>
#include<conio.h>
using namespace std;
class ArrayDemos{
    public:
    void func(){
        int ar[3][3];
        int i, j;
        cout<<"Enter element in array: "<<endl;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin>>ar[i][j];
            }
        }
        cout<<"------After Format-------"<<endl;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(){
                    cout<<ar[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }
};
int main(){
    ArrayDemos ad;
    ad.func();
    return 0;
}