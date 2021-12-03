#include <sys/utsname.h>
#include <stdio.h>

int main(void)
{
 struct utsname uname_pointer;

 uname(&uname_pointer);
 printf("___        ____ __\n");
 printf(" |  |\\  | |___ /  \\\n");
 printf(" |  | \\ | |    |   |\n");
 printf("_|_ |  \\| |    \\__/\n");
 printf("____ ___ ___  __ |    |\n");
 printf("|___ |    |  /   |____|\n");
 printf("|    |__  |  |   |    |\n");
 printf("|    |__  |  \\__ |    |\n");
 printf("InfoFetch V1 \n");
 printf("This uses the MIT licence. Please read the LICENCE file to see the licence.");
 printf("System name - %s \n", uname_pointer.sysname);
 printf("Release     - %s \n", uname_pointer.release);
 printf("Version     - %s \n", uname_pointer.version);
 printf("Machine     - %s \n", uname_pointer.machine);
}

