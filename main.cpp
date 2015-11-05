#include <stdio.h>
#include <windows.h>

int main()
{

    int opc,dec,bin,i,j,a[100];
    i=0;

        system("cls");
        system("color f6");
        printf("Conversor \n\n");
        printf("Decimal a binario \n\n");
        printf("Introduce tu numero decimal \n\n");
        scanf("%d",&dec);

        if(dec>0){

            while(dec>0)
            {
                 a[i]= dec%2;
                 dec = dec/2;
                  i++;
            }

            printf("Tu binario es: \n");

            for(j=i-1;j>=0;j--)
            {
                printf("%d ",a[j]);
            }

            }
            else
                {
                    printf("Introduce un numero mayor a 0");
                }

    return 0;
}
