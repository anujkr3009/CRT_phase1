//// single inheritance------------------------
// #include <iostream>
// #include <conio.h>
// using namespace std;

// // parent  // base class // super class
// class sunMicrosystem{
//     public:
//         void java(){
//             cout<<"Java Program"<<endl;
//         }
// };
// // child // derived class // sub class
// class Oracle: public sunMicrosystem{
//     public:
//         void DBMS(){
//             cout<<"SQL"<<endl;
//         }
// };
// int main(){
//     Oracle O;
//     O.DBMS();
//     O.java();

//     return 0;5
// }







//// Multiple Inheritance------------------------
// #include <iostream>
// #include <conio.h>
// using namespace std;

// class sunMicrosystem{
//     public:
//         void java(){
//             cout<<"Java Program"<<endl;
//         }
// };
// class Google{
//     public:
//         void Andriod(){
//             cout<<"Android App Development"<<endl;
//         }
// };
// class Oracle: public sunMicrosystem, public Google{
//     public:
//         void DBMS(){
//             cout<<"SQL"<<endl;
//         }
// };
// int main(){
//     Oracle O;
//     O.DBMS();
//     O.java();
//     O.Andriod();

//     return 0;
// }













//// Multilevel Inheritance-----------------------
// #include <iostream>
// #include <conio.h>
// using namespace std;

// class sunMicrosystem{
//     public:
//         void java(){
//             cout<<"Java Program"<<endl;
//         }
//         //overridden
//         void CLang(){
//             cout<<"C Language by SunMicro Base class"<<endl;
//         }
// };
// class Oracle: public sunMicrosystem{
//     public:
//         //override
//         void CLang(){
//             cout<<"C Language by Oracle Derived class"<<endl;
//         }
//         void DBMS(){
//             cout<<"SQL"<<endl;
//         }
        
// };
// int main(){
//     Oracle O;
//     O.CLang();

//     return 0;
// }












// #include <iostream>
// #include <conio.h>
// using namespace std;

// class RTUniversity{
//     public:
//         void Btech(){
//             cout<<"Btech Program by RTU"<<endl;
//         }
//         virtual void Manager() = 0;    //decleartion  //overriden   
// };
// class JECRCCollsge: public RTUniversity{
//     public:
//         void Diploma(){    //defination   //override
//             cout<<"Self Course"<<endl;
//         }
//         void Manager(){
//             cout<<"RTU Manager"<<endl;
//         }
// };
// int main(){
//     JECRCCollsge J;
//     J.Btech();
//     J.Manager();

//     return 0;
// }













// #include <iostream>
// #include <conio.h>
// using namespace std;

// class RTUniversity{
//     public:
//         void Btech(){
//             cout<<"Btech Program by RTU"<<endl;
//         }
//         virtual void Manager() = 0;    //decleartion  //overriden   
//         virtual void Manager2() = 0;    
// };
// class JECRCCollsge: public RTUniversity{
//     public:
//         void Diploma(){    //defination   //override
//             cout<<"Self Course"<<endl;
//         }
//         void Manager(){
//             cout<<"RTU Manager"<<endl;
//         }
//         void Manager2(){
//             cout<<"RTU Manager2"<<endl;
//         }
// };
// int main(){
//     JECRCCollsge J;
//     J.Btech();
//     J.Manager();
//     J.Manager2();

//     return 0;
// }









#include <iostream>
#include <conio.h>
using namespace std;

class stexample{
    public:
    static void func(){
        cout<<"Function Working"<<endl;
    }
};
int main(){
    stexample::func();   // call from the class_name

    stexample s;         // call from the object_name
    s.func();

    return 0;
}







