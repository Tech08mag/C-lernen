#include <stdint.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    char* o;
    int g;
    g = 0;
    if (argc == 1) {
        printf("Es wurde kein Wert uebergeben!");
    }
    if (argc >= 2) {
        o = argv[1];
        while (*o != 0) {
            printf("%x\n", *o);
            o++;
            g++;
        }
        printf("Der Wert des Endes des Strings liegt bei %p\n", o);
        printf("DIe Variabel hat den Wert %i.\n", g);
    }
}