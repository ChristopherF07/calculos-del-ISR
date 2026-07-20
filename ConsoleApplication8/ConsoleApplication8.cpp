

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double sueldoMensual, sueldoAnual;
    double isrAnual = 0.0, isrMensual = 0.0;

    cout << "======================================" << endl;
    cout << " CALCULO DEL ISR - REPUBLICA DOMINICANA 2026" << endl;
    cout << "======================================" << endl;

    cout << "Ingrese el sueldo mensual: RD$ ";
    cin >> sueldoMensual;

    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00)
    {
        isrAnual = 0;
    }
    else if (sueldoAnual <= 624329.00)
    {
        isrAnual = (sueldoAnual - 416220.00) * 0.15;
    }
    else if (sueldoAnual <= 867123.00)
    {
        isrAnual = 31216 + ((sueldoAnual - 624329.00) * 0.20);
    }
    else
    {
        isrAnual = 79776 + ((sueldoAnual - 867123.00) * 0.25);
    }

    isrMensual = isrAnual / 12;

    cout << fixed << setprecision(2);

    cout << "\n========== RESULTADOS ==========" << endl;
    cout << "Sueldo mensual : RD$ " << sueldoMensual << endl;
    cout << "Sueldo anual   : RD$ " << sueldoAnual << endl;

    if (isrAnual == 0)
    {
        cout << "ISR anual      : RD$ 0.00" << endl;
        cout << "Descuento ISR  : N/A" << endl;
    }
    else
    {
        cout << "ISR anual      : RD$ " << isrAnual << endl;
        cout << "Descuento mensual ISR : RD$ " << isrMensual << endl;
    }

   
}


