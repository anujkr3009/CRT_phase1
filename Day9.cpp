// #include<iostream>
// #include<conio.h>
// using namespace std;
// class JECRC{
//     public:
//     JECRC(){              //constructor
//         cout<<"Welcome To JECRC"<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     return 0;
// }







// #include<iostream>
// #include<conio.h>
// using namespace std;
// class JECRC{
//     public:
//     JECRC(){
//         cout<<"Welcome To JECRC"<<endl;
//     }
//     void Btech(){
//         cout<<"Btech program"<<endl;
//     }
//     void BBA(){
//         cout<<"BBA program"<<endl;
//     }
//     void BCA(){
//         cout<<"BCA program"<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     Con.Btech();
//     Con.BBA();
//     Con.BCA();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class JECRC{
//     public:
//     JECRC(){
//         cout<<"Welcome To JECRC"<<endl;
//     }
//     void Btech(){
//         cout<<"Btech program"<<endl;
//     }
//     void BBA(){
//         cout<<"BBA program"<<endl;
//     }
//     void BCA(){
//         cout<<"BCA program"<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     Con.Btech();
//     Con.BBA();
//     Con.BCA();
//     return 0;
// }










// #include<iostream>
// #include<conio.h>
// using namespace std;
// class JECRC{
//     public:
//     JECRC(){              
//         cout<<"Non Parameterized Constructor"<<endl;
//     }
//     JECRC(int x){              
//         cout<<"Parameterized Constructor"<<endl;
//     }
// };
// int main(){
//     JECRC Con;
//     JECRC Con2(10);
//     return 0;
// }










// #include<iostream>
// #include<conio.h>
// using namespace std;
// class JECRC{
//     public:
//     JECRC(){              
//         cout<<"Non Parameterized Constructor"<<endl;
//     }
//     JECRC(int x){
//         cout<<"Parameterized Constructor"<<endl;
//     }
//     JECRC(int x, int y){              
//         cout<<"Dual Parameterized Constructor"<<endl;
//     }
// };
// int main(){
//     JECRC Con2(10, 20);
//     return 0;
// }







// #include<iostream>
// #include<conio.h>
// using namespace std;
// class RTU{
//     public:
//     RTU(){              
//         cout<<"RTU Constructor.....Base"<<endl;
//     }
// };
// class JECRC: public RTU{
//     public:
//     JECRC(){              
//         cout<<"JECRC Constructor.....Derived"<<endl;
// }
// };
// int main(){
//     JECRC Con;
//     return 0;
// }










// #include<iostream>
// #include<conio.h>
// using namespace std;
// class JECRC{
//     public:
//     JECRC(){ 
//         int x = 10, y = 5;
//         cout<<"Value of x : "<<x<<endl;
//         cout<<"Value of y : "<<y<<endl;
//         cout<<"------After Swapping------"<<endl;
//         int temp = x;
//         x = y;
//         y = temp;
//         cout<<"Value of x : "<<x<<endl;
//         cout<<"Value of y : "<<y<<endl;
// }
// };
// int main(){
//     JECRC Con;
//     return 0;
// }








// #include<iostream>
// #include<conio.h>
// using namespace std;
// class thisdemo{
//     public:
//     int a;
//     thisdemo(int z){
//         this->a = z;
//     }
//     void display(){
//         cout<<"Value of a: "<<a<<endl;
//     }
// };
// int main(){
//     thisdemo t(10);
//     t.display();
//     return 0;
// }









// #include<iostream>
// #include<conio.h>
// using namespace std;
// class thisdemo{
//     public:
//     int var1, var2;
//     thisdemo(int x, int y){
//         this-> var1 = x;
//         this-> var2 = y;
//     }
//     void display(){
//         if(var1 == var2){
//             cout<<"Both variables are equal"<<endl;
//         }
//         else if(var1>var2){
//             cout<<"var1 is greater than var2"<<endl;
//         }
//         else if(var1<var2){
//             cout<<"var2 is greater than var1"<<endl;
//         }
//     }
// };
// int main(){
//     thisdemo t(10,5);
//     t.display();
//     return 0;
// }








// // swapping the number by use of this 
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class thisdemo{
//     public:
//     int var1, var2;
//     thisdemo(int x, int y){
//         cout<<"Value of Var1: "<<x<<endl;
//         cout<<"value of var2: "<<y<<endl;
//         this-> var1 = x;
//         this-> var2 = y;
//     }
//     void swap(){
//         int temp = var1;
//         var1 = var2;
//         var2 = temp;
//         cout<<"--------After Swapping-------"<<endl;
//         cout<<"value of var1: "<<var1<<endl;
//         cout<<"value of var2: "<<var2<<endl;
        
//     }
// };
// int main(){
//     thisdemo t(10,5);
//     t.swap();
//     return 0;
// }











// #include<iostream>
// #include<conio.h>
// using namespace std;
// class consdes{
//     public:
//     consdes(){
//         // Constructor
//     }
//     ~consdes(){
//         // Destructor
//     } 
// };
// int main(){
//     consdes obj;
//     return 0;
// }











#include<iostream>
#include<conio.h>
using namespace std;
class consdes{
    public:
    consdes(){
        cout<<"Welcome"<<endl;;
    }
    void Btech(){
        cout<<"Btech Program"<<endl;
        Mtech();
    } 
    private:
    void Mtech(){
        cout<<"Mtech Program"<<endl;
    }
};
int main(){
    consdes obj;
    obj.Btech();
    return 0;
}