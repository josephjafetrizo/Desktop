#include <iostream>

using namespace std;

class Resistencia {
      private:
          float Valor;
          char Tipo[10];
      public:
          void CalculaIntensidad( float);
          void AsignarDatos();     
};
class Capacitor {
      private:
          float Valor;
          char Tipo[10];
      public:
          void AsignarDatos();  
          void MuestraDatos();
};
void Resistencia::CalculaIntensidad(float voltaje){
     float i;                    
     i = voltaje/Valor;
     cout << "El valor de la intencidad es: " << i << endl;
}
void Resistencia::AsignarDatos(){
    cout<<"Ingresar el valor de la resistencia: "<< endl;
    cin >> Valor;
    cout << "Ingresa el tipo de resistencia: " << endl;
    cin >> Tipo;
}
void Capacitor::AsignarDatos(){
    cout<<"Ingresar el valor del capacitor: "<< endl;
    cin >> Valor;
    cout << "Ingresa el tipo del capacitor: " << endl;
    cin >> Tipo;
}
void Capacitor::MuestraDatos(){
     cout << "Valor del capacitor: " << Valor << endl;
     cout << "Tipo del capacitor: " << Tipo << endl;      
}
