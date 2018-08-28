#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ceros=0;
    int pares=0;
    int positivos=0;
    int negativos=0;
    char respuesta;
    int numero;
    int numeromaximo=0;
    int numerominimo=0;
    int contador=1;
    int sumapost;
    int sumaneg;



    do
    {
    printf("ingresar numero");
    scanf("%d",&numero );

    if(numeromaximo==0)
    {
        numeromaximo=numero;
    }
    if(numerominimo==0)
    {
        numerominimo=numero;
    }
    if (numero>numeromaximo)
    {
        numeromaximo=numero;
    }
    if (numero>numerominimo)
    {
        numerominimo=numero;
    }

    if(numero>0)
    {
        sumapost=sumapost+numero;
        positivos++;
    }
    if(numero<0)
    {
        sumaneg=sumaneg+numero;
        negativos++;
    }
    if(numero==0)
    {
        ceros++;
    }
    if (numero%2==0)
    {
        pares++;
    }
    contador++;
    printf("si queres ingresar un nomero digita s, sino dijita n:\n");
    setbuf(stdin,NULL);
    scanf("%c",&respuesta);

    }while(respuesta!="n");
    printf("la suma de los negativos es: %d",sumaneg);
    printf("la suma de los positivos es: %d",sumapost);


    return 0;
}
