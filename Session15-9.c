#include <stdio.h>

int main() {
    char str[100]= "hello world, o";
	int khoangTrong;
	int j;

    printf("%s\n",str);

    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &khoangTrong); 

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == khoangTrong) { 
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1]; 
            }
            len--; 
            i--;  
        }
    }

    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}

