#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *version;
    char buffer[512];

    //1.kernal version
    version = fopen("/proc/version", "r");
    if ( version == NULL ){
        printf("Error: /proc/version not found .\n");
    }
    else{
        printf("----kernal_version----\n");
        if(fgets(buffer, sizeof(buffer), version) != NULL){
            printf("%s", buffer);
        }
        fclose(version);
    }
    printf("\n");

    //2.CPU type and model
    version = fopen("/proc/cpuinfo", "r");
    if( version==NULL ){
        printf("Error: /proc/cpuinfo not found.\n");

    }
    else{
        printf("----CPU_info----\n");
        while(fgets(buffer, sizeof(buffer), version) !=NULL){
            //searching for the line which contains cpu Vendor
            if(strstr(buffer, "vendeor_id") != NULL){
                printf("%s", buffer);
            }
            //searching for lone which contians exact cpu model
            if(strstr(buffer, "model name") != NULL){
                printf("%s", buffer);
                break;//beacause we only need the first cores information
            }
            
        }

        fclose(version);

    }
    return 0;
}