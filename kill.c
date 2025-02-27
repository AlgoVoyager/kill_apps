#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_NAME "kill_list.txt"

void killApp(const char *appName) {
    char command[256];
    sprintf(command, "taskkill /F /IM %s > nul 2>&1", appName); // Construct the taskkill command
    system(command);
}

int main() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error: Could not open %s\n", FILE_NAME);
        return 1;
    }

    char appName[100];  
    printf("Killing applications from %s...\n", FILE_NAME);

    while (fgets(appName, sizeof(appName), file)) {
        char *pos;
        if ((pos = strchr(appName, '\n')) != NULL) {
            *pos = '\0';
        }

        printf("Terminating %s\n", appName);
        killApp(appName);
    }

    fclose(file);
    printf("All specified applications have been terminated.\n");
    return 0;
}
