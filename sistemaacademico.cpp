#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{  
    string nom, apel;
    int opc;
    double num1,num2,num3,suma;
    do{

           cout<<"SISTEMA EDUCATIVO"<<endl;
           cout<<"Opciones"<<endl;
           cout<<"1.-Ingresar Docente"<<endl;
           cout<<"2.-Ingesar notas"<<endl;
           cout<<"Ingrese la opcion"<<endl;
           cin>>opc;
           switch(opc){
                        case 1:
                             cout<<"Ingrese su nombre"<<endl;
                             cin>>nom;
                             cout<<"Ingrese su apellido"<<endl;
                             cin>>apel;
                             break;
                        case 2:
                             cout<<"Ingrese la nota 1"<<endl;
                             cin>>num1;
                             cout<<"Ingrese la nota 2"<<endl;
                             cin>>num2;
                             cout<<"Ingrese la nota 3"<<endl;
                             cin>>num3;
                             suma=num1+num2+num3;
                             cout<<"La nota final es: ",suma<<endl;
                             if(suma<=42){
                                          cout<<"Usted ha reprobado"<<endl;
                                          }
                             else if(suma>42){
                                  cout<<"Usted ha aprobado"<<endl;
                                  }
                             break;
                             default:
                             }
    }while(repetir);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
