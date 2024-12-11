#include<stdio.h>
	long tiendien(long sodien){
		long tien=0;
		if(0<=sodien&& sodien<50){
			tien=sodien*10000;
		}else if(50<=sodien&& sodien<100){
			tien=49*10000+(sodien-50)*15000;
		}else if(100<=sodien&& sodien<150){
			tien=49*10000+50*15000+(sodien-99)*20000;
		}else if(150<=sodien&& sodien<200){
			tien=49*10000+50*15000+50*20000+(sodien-149)*25000;
		}else{
			tien=49*10000+50*15000+50*20000+50*25000+(sodien-199)*30000;
		}
		return tien;
	}
	int main(){
		long sodien;
	printf("moi ban nhap so dien: ");
	scanf("%ld",&sodien);
	if(sodien<0){
		printf("moi ban nhap lai so dien.");
	}else{
          long tien=tiendien(sodien);
		printf("so tien ban phai tra la: %ld dong",tiendien(sodien));
	}
	return 0;
}
