#include <iostream>
using namespace std;

int main()
{
    float vector1[10];
    float suma=0;
    float media=0;
    float mayor=0;
    int ix;
	cout << "1) Orden inverso, 2) Media 3) Mayor\n";
	cout << "Elige la opcion"<< endl;
	char opcion;
	cin >> opcion;
    switch(opcion)	

    case'1':
    cout << "Introduce 10 numeros: \n";
        for (ix = 1; ix < 11; ix++)
        {
            cout << ix << " valor: \n";
            cin >> vector1[ix];
        }
       
        cout << "Los 10 numeros fueron: \n";
        for (ix = 10; ix > 0; ix--)
        {
            cout << vector1[ix]<<endl;
        }
        break;
        
	case'2':
    cout << "Introduce 10 numeros\n";
        for (ix = 1; ix < 11; ix++)
        {
            cout << ix << " valor: \n";
            cin >> vector1[ix];
        }
        
        for (ix = 1; ix < 11; ix++)
        {
            suma=suma+vector1[ix];
        }
        media=suma/10;

        cout << "Los numero adelantes de la media: \n";
        for (ix = 1; ix < 11; ix++)
        {
        	if (vector1[ix]>media)
        	    {
        	    cout << vector1[ix]<<endl;
    			}
        }
		break;
	case'3':
    cout << "Introduce 10 numeros\n";
        for (ix = 1; ix < 11; ix++)
        {
            cout << ix << " valor: \n";
            cin >> vector1[ix];
            if (vector1[ix]>mayor)
            {
                mayor=vector1[ix];
            }
        }
        cout<<"El número mayor es "<<mayor<<endl;
		break;
		
	default:
		cout<<"Introduce un numero correcto"<<endl;
    return 0;
}
