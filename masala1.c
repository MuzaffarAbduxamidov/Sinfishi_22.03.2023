#include <stdio.h>

int main(){
   int son1=10;
   int son2=10;

   while(son1){
     while(son2){
      printf("*");
      son2--;
     }
     son2=10;
     son1--;
     printf("\n*");
   }
}
