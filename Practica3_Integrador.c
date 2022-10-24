#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ventas = 0;
    int dni = 0;
    float monVenta = 0;
    int medioPago = 0;
    int tarjeta = 0;
    int cuotas = 0;
    float total = 0;

    printf("Ingrese la cantidad de ventas que necesita registrar: \n");
    scanf("%i", &ventas);

    for (int i = ventas; i >= 1; i--)
    {
        printf("Ingrese el DNI del cliente: \n");
        scanf("%i", &dni);

        if (dni > 1000000 && dni < 99999999) // validacion de dni//
        {
            printf("Ingrese el monto de la venta\n");
            scanf("%f", &monVenta);

            printf("Ingrese el medio de pago:\n1-Efectivo\n2-Tarjeta de cr%cdito\n", 130);
            scanf("%i", &medioPago);

            switch (medioPago)
            {
            case 1:
                printf("DNI: %i\nMedio de pago: Efectivo\nTotal: %.2f\n", dni, monVenta);
                break;
            case 2:
                printf("1-Visa\n2-American Express\n3-Mercado Pago\n4-Cabal\n");
                scanf("%i", &tarjeta);

                printf("Ingrese en cuantas cuotas desea realizar el pago: \n  En 1 cuota\n  En 3 cuotas\n  En 6 cuotas\n  En 12 cuotas\n");
                scanf("%i", &cuotas);

                if (tarjeta == 1)
                {
                    if (cuotas == 1)
                    {
                        total = monVenta;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 3)
                    {
                        total = monVenta + monVenta * 0.04;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 6)
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                }
                else if (tarjeta == 2)
                {
                    if (cuotas == 1)
                    {
                        total = monVenta;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 3)
                    {
                        total = monVenta + monVenta * 0.04;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 6)
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                }
                else if (tarjeta == 3)
                {
                    if (cuotas == 1)
                    {
                        total = monVenta;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 3)
                    {
                        total = monVenta + monVenta * 0.04;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 6)
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                }
                else
                    (tarjeta == 4);
                {
                    if (cuotas == 1)
                    {
                        total = monVenta;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 3)
                    {
                        total = monVenta + monVenta * 0.04;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else if (cuotas == 6)
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                    else
                    {
                        total = monVenta + monVenta * 0.08;
                        printf("DNI: %i\n Medio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: %iTotal: $%.2f\n", dni, cuotas, total);
                    }
                }
            default:
                printf("Opcion invalida\n");
                break;
            }
        }
    }

    system("pause");
    return 0;
}