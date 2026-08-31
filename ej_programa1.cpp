#include <iostream>

using namespace std;

int main ()
{
    float salario, s_retenido = 0, s_recibido = 0;

    cout << "Ingresa tu salario mensual: ";
    cin >> salario;

    if (salario >= 8000 && salario <= 10000)
    {
        s_retenido = salario * 0.03;
        s_recibido = salario - s_retenido;
    }
    else if (salario > 10000 && salario < 18000)
    {
        s_retenido = salario * 0.08;
        s_recibido = salario - s_retenido;
    }
    else if (salario >= 18000 && salario <= 30000)
    {
        s_retenido = salario * 0.12;
        s_recibido = salario - s_retenido;
    }
    else
    {
        s_retenido = 0;
        s_recibido = salario;
    }

    // Mostrar los resultados en consola
    cout << "\nRetencion calculada: $" << s_retenido << endl;
    cout << "Salario final a recibir: $" << s_recibido << endl;

    return 0;
}