#include <stdio.h>

int main(){
   int son1=1;
   int son2=1;
   int son3=10;

  while(son1<=10){
   while(son2){
     printf("*");
     son2--;
   }
   printf("\n*");
   son1++;
   son2=son1;
  }
}
