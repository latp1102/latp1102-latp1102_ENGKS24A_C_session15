#include <stdio.h>

int main() {
    char str[100]= "hello world, o";
	int khoangTrong;
	int j;

    printf("%s\n",str);

    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &khoangTrong); // D�ng kho?ng tr?ng d? b? qua c�c kho?ng tr?ng d?u d�ng

    int len = strlen(str);
    for (int i = j = 0; i < len; i++) {
        if (str[i] != khoangTrong) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}

