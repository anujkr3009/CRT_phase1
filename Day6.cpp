// #include<iostream>
// #include<conio.h>
// using namespace std;

// class language{
//     public:
//     void func1(){
//         cout<<"C lng"<<endl;
//     }
//     void func2(){
//         cout<<"C++ lng"<<endl;
//     }
//     void func3(){
//         cout<<"Java lng"<<endl;
//     }
//     void func4(){
//         cout<<"Python lng"<<endl;
//     }
// };
// int main(){
//     language obj;
//     obj.func1();
//     obj.func2();
//     obj.func3();
//     obj.func4();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;

// class JECRC{
//     public:
//     void Btech(){
//         cout<<"Btech Program"<<endl;
//     }
//     void Mtech(){
//         cout<<"Mtech Program"<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     Con.Btech();
//     Con.Mtech();
    
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;

// class JECRC{
//     public:
//     void Btech(){
//         cout<<"Btech in CSE"<<endl;
//     }
//     void Btech(int Account){
//         cout<<"Btech in ECE "<<Account<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     Con.Btech(150000);
//     Con.Btech();
    
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;

// class JECRC{
//     public:
//     void Btech(){
//         cout<<"Btech in CSE"<<endl;
//     }
//     void Btech(int Account){
//         cout<<"Btech in ECE "<<endl;
//     }
//     void Btech(int x, float y){
//         cout<<"Btech in ME "<<endl;
//     }
//     void Btech(float a, int b){
//         cout<<"Btech in CE "<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     Con.Btech(150000);
//     Con.Btech();
//     Con.Btech(10, 20.2);
//     Con.Btech(20.2, 10);
    
//     return 0;
// }
















// #include<iostream>
// #include<conio.h>
// using namespace std;

// class JECRC{
//     public:
//     void Btech(){
//         cout<<"Btech in CSE"<<endl;
//     }
//     void Btech(int Account){
//         cout<<"Btech in ECE "<<endl;
//     }
//     void Btech(int x, float y){
//         cout<<"Btech in ME "<<endl;
//     }
//     void Btech(float a, int b){
//         cout<<"Btech in CE "<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     Con.Btech(150000);
//     Con.Btech();
//     Con.Btech(10, 20.2);
//     Con.Btech(20.2, 10);
    
//     return 0;
// }












#include<iostream>
#include<conio.h>
using namespace std;

class PolyExample{
    public:
    void area(int x){
        cout<<"Area of square: "<<x*x<<endl;
    }
    void area(int x, int y){
        cout<<"Area of rectangle: "<<x*y<<endl;
    }
    
};
int main(){
    PolyExample Obj;
    Obj.area(10);
    Obj.area(10, 20);    
    return 0;
}