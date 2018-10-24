
#include <iostream>
#include<conio.h>
using namespace std;

   struct alumno{
      char nombre[20];
      int edad;
      float promedio;
} alumnos[3];

int main(){
for(int i=0; i<3; i++){
cout<<"nombres; ";
cin.getline(alumnos[i].nombre,20,'\n');
cout<<"edad :"<<endl;
cin>>alumnos[i].edad;
cout<<"promedio";
}
return 0;
}
