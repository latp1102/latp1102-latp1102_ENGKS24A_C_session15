#include <stdio.h>

int main(){
	char str[]= "Xin chao, gmail cua toi la test123@gmail.com";
	int demSoKyTu = 0;
	int demSoChuCai = 0;
	int demSoKyTuDacBiet = 0;
	printf("%s\n",str);
	int n = strlen(str);
	for(int i = 0;i < n;i++){
		if(str[i] >= 'a' && str[i] <= 'z' || str[i]>= 'A' && str[i]<='Z'){
			demSoKyTu++;
		}else if(str[i] >= '0' && str[i]< '9'){
			demSoChuCai++;
		}else{
			demSoKyTuDacBiet++;
		}
	}
	printf("so ky tu trong chuoi la chu cai trong chuoi: %d\n",demSoKyTu);
	printf("so luong ky tu trong chuoi la chu so co trong chuoi: %d\n",demSoChuCai);
	printf("so luong ky tu trong chuoi la chu cai dac biet co trong chuoi: %d\n",demSoKyTuDacBiet);
	
	return 0;
}
