#include<stdio.h>
  main(){
  		float a, b, c;
	  printf("nhap lan luot diem toan,van,anh:");
  	scanf("%f,%f,%f",&a,&b,&c);
  	float  tong = a+b+c;
  	float diem_tb=tong/3;
  	printf("%.2f\n%.2f",tong,diem_tb);
  }