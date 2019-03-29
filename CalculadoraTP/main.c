#include <stdio.h>
#include <stdlib.h>

int pedidrOpcionMenu(char[]);

int main()
{
    int opcion;
    int resultado;
    char seguir = 's';

    do
    {
        printf("\n");
        printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
        printf("\n         บ               :: C A L C U L A D O R A EN C ::            บ");
        printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน \n");
        printf("\n");
        opcion = pedirOpcionMenu(" 1. Ingresar 1er operando\n 2. Ingresar 2do operando \n 3. Calcular todas las operaciones\n 4. Informar resultados\n 5. Salir\n" );
        switch(opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
             printf("\na) Calcular la suma (A+B) \n b) Calcular la resta (A-B) \n c) Calcular la division (A/B) \n d) Calcular la multiplicacion (A*B)\n e) Calcular el factorial (A!) \n");

            break;
        case 5:
            seguir = 'n';
            break;

        default:
            printf("Opcion incorrecta\n");
            break;
        }



        system("pause");
        system("cls");

    }
    while(seguir == 's');


    return 0;
}

int pedirOpcionMenu(char texto[])
{
    int opcion;

    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;

}
