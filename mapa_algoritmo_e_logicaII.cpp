#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main(){	
    setlocale(LC_ALL,"PORTUGUESE");
    int dividendo, divisor, quociente, resto;
    printf("Digite o dividendo: \n");
    scanf("%d", &dividendo);
    printf("Digite o divisor: \n");
    scanf("%d", &divisor);
    
    quociente = dividendo / divisor;
    resto = dividendo % divisor;
    
    printf("O valor da divis�o (quociente) �: %d\n", quociente);
    printf("O valor do resto �: %d\n", resto);

    return(0);
}

