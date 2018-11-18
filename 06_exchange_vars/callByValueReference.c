#include<stdio.h>  
 
void changeByReference(int *num) {    
  printf("Before adding value inside function num=%d \n",*num);    
  
  *num += 100;    
  
  printf("After adding value inside function num=%d \n", *num);    
}

void changeByValue(int num) {
   printf("Before adding value inside function num=%d \n",num);
   
   num += 100;  
  
   printf("After adding value inside function num=%d \n", num);
} 
     
int main() {    
  int x = 100;    
  
  printf("Before function call x=%d \n", x);    
  changeByReference(&x);//passing reference in function    
  printf("After function call x=%d \n", x);    
  
  int y = 125;
  printf("Before function call y=%d \n", y);
  changeByValue(y);//passing reference in function    
  printf("After function call x=%d \n", y);


  return 0;  
}    
