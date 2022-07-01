# So--C
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void meualarme(int sig)
{
        printf("Sinal recebido %d. Terminando o programa. \n", sig);
        exit(0);
}

int main()
{

        char c;
        printf("Enviarei um alarme daqui a 5 segundos. \n");
        signal(SIGALRM,meualarme);
        alarm(5);
        printf("Deseja sair [S/N] ?");
        scanf("%c", &c);
        for(;;);
}

