#include <iostream>
using namespace std;
int main ()
{

  float salario, s_retenido, s_recibido;

  cout<<"ingresa tu salario mensual";
  cin >> salario;
  if(salario>8000 && salario <=10000)
  {
    s_retenido = salario*0.03;
    s_recibido = salario- s_retenido;
  }
  else if(salario>10000 && salario<18000)
 {
    s_retenido=salario*0.08;
    s_recibido=salario-s_retenido;
 }
  else if(salario>18000 && salario<20000)
  {
     s_retenido=salario*0.10;
     s_recibido=salario-s_retenido;
  }
   else if(salario>20000)
  {
   s_retenido=salario*0.15;
   s_recibido=salario-s_retenido;
  }
 
  cout << "Salario recibido: " << s_recibido << endl;
  return 0;
} 