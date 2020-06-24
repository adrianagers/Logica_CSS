#include <iostream>

using namespace std;

int main()
{
  int continuar = 2;
    do
    {
        
        cout << "Digite una vocal \n";
        char vocal;
        cin >> vocal;
        
        switch(vocal) 
            {
                case 'a': cout << "Es una vocal \n";
                break;
                case 'e': cout << "Es una vocal \n";
                break;
                case 'i': cout << "Es una vocal\n";
                break;
                case 'o': cout << "Es una vocal\n";
                break;
                case 'u': cout << "Es una vocal \n";
                break;
    
                default:  cout << "ERROR 404, lo que digito no es una vocal\n";
            }
            cout << "¿Desea continuar? SI:1 NO:2\n";
       
        cin >> continuar;
    }
    while(continuar != 2);
    
    
    return 0;
}
