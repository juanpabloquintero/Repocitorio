#include <iostream> // biblioteca I/O
#include <math.h> //biblioteca matematatica

using namespace std; // palabra reservada

int main()
{
        int k=0, total=0, fin=0;

            while (true)
            {


                cout <<"Ingrese el n" <<'\243' <<"mero de tabla";
                cin >> k;

                for (int i=0; i<= 10; i++)
                {
                    total = i*k;
                    cout << k << "x" << i << "=" << total << endl;
                    cout << "Al cuadrado =" << pow(total,2) << endl;
                }

                cout << "ingrese 1 para cerarlo ? ";
                cout << "ingrese 0 para continua" ;
                cin >> fin ;

                if (fin==1);
                {
                    break;
                }
            }
            return 0;
        }


