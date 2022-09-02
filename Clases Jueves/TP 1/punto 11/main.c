#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
 
main()
{
    int PID;
    PID = fork();
 
    if (PID < 0)
    {
        printf("Error al crear proceso\n");
    }
    else if (PID == 0)
    {
        printf("Proceso creado, soy el hijo\n");
        printf("Mi PID es %d y mi padre es %d\n", getpid(), getppid());
    }
    else
    {
        printf("Proceso creado, soy el padre\n");
        printf("Mi PID es %d y mi padre es %d\n", getpid(), getppid());
    }
    return 0;
}
