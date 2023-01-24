#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_HEIGHT 2048
#define MAX_CODE_LENGTH 512
#define LINE_LENGTH 64

typedef struct {
    int op; /* opcode */
    int m; /* M */
} instruction;

//extern void machine(const char *filename);

int main (int argc, char *argv[])
{
    printf("%s", argv[0]);

    return 0;
}
/*
extern void machine(const char *filename) {

    FILE *textfile;
    char line[LINE_LENGTH];
    double numbytes;

    file = fopen(filename, "r");
    if(textfile == NULL)
        return 1;

    while(fgets(line, LINE_LENGTH, file)) {
        printf(line);
    }

}
*/
