#include <stdio.h>

int main()
{
    int x;
    printf("                                             Aleman Ruiz Luis Daniel \n");
    printf("                                                Sistema de nomina \n");
    printf("Eliga una opcion\n");
    printf("1.- Factueas \n");
	printf("2.- Control de inventario \n");
	printf("3.- Cuentas por cobrar \n");
	printf("4.- Cuentas por pagar \n");
	printf("5.- cotizaciones \n");
	printf("6.- Nomina de pago \n");
	printf("7.- Recursos hunamos \n");
	printf("8.- control de Acceso \n");
	printf("9.- Ordenes de compras \n");
	printf("10.- Control de pedidos \n");
	printf("11.- Salir \n ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("Fracturas \n");

            break;
        case 2:
            printf("Control de inventario \n");

            break;
        case 3:
            printf("Cuentas por cobrar\n");

            break;
        case 4:
            printf("Cuentas por pagar \n");

            break;
        case 5:
            printf("Cotizaciones \n");

            break;
        case 6:
            printf("nomina de pago\n");
            
            break;
        case 7:
            printf("Recursos humanos\n");
 
            break;
        case 8:
            printf("Control de acceso \n");
         
            break;
        case 9:
            printf("Ordenes de compras\n");
            
            break;
        case 10:
            printf("Control de pedidos \n");
            
            break;
        case 11:
            printf("Salir \n");
            
            break;
            
            default:
            	
            printf("Error \n");
    }
    return 0;
}
