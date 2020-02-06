#include <iostream>

using namespace std;

class Gato{
private:
    int suEdad;
    float suPeso;
public:
    void Edad(int edad);
    int Edad();
    void Peso(float peso);
    float Peso();
    void Maullar();
};
void Gato::Edad(int edad){
suEdad = edad;
}
int Gato::Edad(){
return suEdad;
}
void Gato::Peso(float peso){
suPeso=peso;
}
float Gato::Peso(){
return suPeso;
}
    void Gato::Maullar(){
    cout<<"Miauuuuuuuuuuuu"<<endl;
    }
int main(void){
Gato Bicho;
Bicho.Edad(4);
Bicho.Peso(5);
cout<<"El peso de Bicho es: "<<Bicho.Edad()<<endl;
cout<<"La edad de Bicho es: "<<Bicho.Peso()<<endl;
Bicho.Maullar();
}
