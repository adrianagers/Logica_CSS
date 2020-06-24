#include <iostream>

using namespace std;

int main()
{
  int continuar = 2;
    do
    {
        
        int a;
        
        cout << "Introduce el primer numero \n ";
        cin >> a;
        
        cout << "¿Número es mayor de x? \n";
        cout << "X equivale a 10 \n";
       
        if( a>10 )
        {
          cout << a << " , si es mayor que X \n";
        }
        else{
          cout << a << " no es mayor que X \n";
        }
        
        
        cout << "¿Número es diferente de 20?\n";
        
        if( a != 20 )
        {
          cout << a << ", Es diferente a 20\n";
        }
        else{
          cout << a << ", Es igual a 20 \n";
        }
        
        
        
        cout << "¿El Número es menor que 80? \n";
        
        if( a<80 )
        {
            cout << "El numero si es menor que 80 \n";
            
           
        }
        else{
            
            
             if( a > 80 )
                {
                    cout << " El numero mayor que 80 \n";
                }
                else
                {
                cout << " El numero es igual  80 \n ";
                }
            
            }
       
        
        
        cout << "¿Desea continuar? SI:1 NO:2\n";
        cin >> continuar;
    }
    while(continuar != 2);  
    
    
    return 0;
}
