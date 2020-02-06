#include <iostream>

using namespace std;

class Gato{
public:
    unsigned int suEdad;
    unsigned int suPeso;
    void Maullar(){
    cout<<"Miauuu"<<endl;
    }
    void Datos(){
    cout<<"La edad del gato es: "<<suEdad <<endl;
    cout<<"El peso del gatog es: "<<suPeso <<endl;
    }
};
int main(void){
Gato Bicho;
Bicho.suEdad=4;
Bicho.suPeso=5;
Bicho.Datos();
Bicho.Maullar();
}

