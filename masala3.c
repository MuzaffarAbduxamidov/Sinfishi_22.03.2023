#include <stdio.h>

int main(){

   int son;
   printf("Son kiritng:");
   scanf("%d", &son);

   if(son>0){
     while(son>=0){
       while(0<=son){
          printf("%d", son);
          son++;
       }
       printf("%d", son);
       son--;
     }
   }
}
