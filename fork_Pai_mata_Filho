#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <wait.h>
#include <stdlib.h>

int main()
{
        int pid;
        int status;

        printf("Meu numero de processo eh %d. Vou criar um processo filho. \n", getpid());

        pid = fork();

        if (pid == 0)
        {
                printf("\t\t Vou ficar executando indefinidamente .\n");
                for (;;);
        }
        else
        {
                sleep(5);
                printf("Vou enviar um sinal SIGKILL para meu filho. \n");
                kill(pid,9);// 9 identificador
                wait(&status);//tenta mandar e espera pelo status
                printf("O processo filho terminou com o exit = %d \n", WEXITSTATUS(status));//imprimir status da saida do processo
        }
        exit(0);
}

