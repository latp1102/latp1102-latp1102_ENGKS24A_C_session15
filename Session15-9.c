#include <stdio.h>

int main() {
    char str[100]= "hello world, o";
	int khoangTrong;
	int j;

    printf("%s\n",str);

    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &khoangTrong); 

    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] == khoangTrong) { 
            for (int j = i; j < n; j++) {
                str[j] = str[j + 1]; 
            }
            n--; 
            i--;  
        }
    }

    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}

