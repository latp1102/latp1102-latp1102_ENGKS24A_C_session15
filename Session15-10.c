#include <stdio.h>


int main(){
    char chuoi[100]="bcdac";
    int dem[200] = {0}; 
 
    printf("%s\n",chuoi);
    
    chuoi[strcspn(chuoi, "\n")] = '\0';

    for (int i = 0; chuoi[i] != '\0'; i++){
        dem[chuoi[i]]++;
    }

    for (int i = 0; i < 200; i++){
        if (dem[i] > 0) {
            printf("%c: %d\n", i, dem[i]);
        }
    }

    return 0;
}
