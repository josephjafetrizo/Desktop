#include "DispositivosEle.hpp"
#include <conio.h>

main(){
    Resistencia x, y; // Instanciar el objeto
    Capacitor a;
    float v;
    cout << " Ingresa el valor del voltaje: ";
    cin >> v;
    
    x.AsignarDatos(); // El objeto de resistencia envia un mensaje al metodo AsignarDatos
    x.CalculaIntensidad(v);
    getche();
    
    y.AsignarDatos();
    y.CalculaIntensidad(v);
    
    a.AsignarDatos();
    a.MuestraDatos();
    
    
}
