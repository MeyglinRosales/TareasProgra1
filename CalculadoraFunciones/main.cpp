#include <iostream>

using namespace std;

void Calculadora()
{
    cout<<"Calculadora con Funciones"<<endl;

}

void Suma(int num1, int num2)
{
    cout<<"Primer Numero:"<<num1<<endl;
    cout<<"Segundo Numero:"<<num2<<endl;
    if (num1>=0 && num2 >=0)
        cout<<"La suma es: " << num1 + num2 << endl;
    else
        cout<<"Ingrese numeros positivos"<<endl;

}
void Resta (int num1res, int num2res)
{
    cout<<"primer Numero:"<<num1res<<endl;
    cout<<"Segundo Numero:"<<num2res<<endl;
    if (num1res>=0 && num2res>=0)
        cout<<"La resta es:" << num1res - num2res << endl;
    else
        cout<<"Ingrese numeros positivos"<<endl;
}
void Multiplicacion(int num1mult, int num2mult)
{
    cout<<"Primer Numero:"<<num1mult<<endl;
    cout<<"Segundo Numero:"<<num2mult<<endl;
    if (num1mult>=0 && num2mult>=0)
        cout<<"La Multiplicacion es:" <<num1mult * num2mult << endl;
    else
        cout<<"Ingrese numeros positivos"<<endl;
}
void Division (int num1div, int num2div)
{
    cout<<"Primer Numero:"<<num1div<<endl;
    cout<<"Segundo Numero:"<<num2div<<endl;
    if (num1div>=0 && num2div>=0)
        cout<<"La division es:" <<num1div / num2div << endl;
    else
        cout<<"Ingrese numeros positivos"<<endl;
}


int main()
{
    int x,y;
    Calculadora();
    cout<<"Introduzca primer numero para la suma:";
    cin>>x;
    cout<<"Introduzca segundo numero para la suma:";
    cin>>y;
    Suma(x,y);
    cout<<"Introduzca primer numero para la resta:";
    cin>>x;
    cout<<"Introduzca segundo numero para la resta:";
    cin>>y;
    Resta(x,y);
    cout<<"Introduzca primer numero para la multiplicacion:";
    cin>>x;
    cout<<"Introduzca segundo numero para la multiplicacion:";
    cin>>y;
    Multiplicacion(x,y);
    cout<<"Introduzca primer numero para la division:";
    cin>>x;
    cout<<"Introduzca segundo numero para la division:";
    cin>>y;
    Division(x,y);


    return 0;
}


