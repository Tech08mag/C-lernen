#include <stdio.h>

struct Data {
    int id;
    char username[16];
    char passwort[15];
    char isAdmin;
};

int main()
{
    struct Data user[3];

    // pointer demo to FILE
    FILE* file;

    // Creates a file "demo_file"
    // with file access as write-plus mode
    file = fopen("c.bin", "rb");
    fread(&user, sizeof(*user), 3, file);

    for (int i = 0; i < 3; i++) {
        printf("User%i enthaelt  id: %i, username: %s, passwort: %s, Admin: %d\n", i + 1, user[i].id, user[i].username, user[i].passwort, user[i].isAdmin);
    }

    // adds content to the file

    // closes the file pointed by demo
    fclose(file);

    return 0;
}