#include <stdio.h>
#include <string.h>

void reverse(char linha [], int n){
   int i, j = n - 1;
   char str[1001];
   for(i = 0; i < n; i++){
      str[i] = linha[j];
      j --;
   }

   str[i] = '\0';
   strcpy(linha, str);
}

int main(){
   int n,i,j,len;
   char linha[1001];
   scanf("%d", &n);

   for(i = 0; i < n; i++){
      scanf(" %[^\n]", linha);     
      len = strlen(linha);
            
      for(j = 0; j < len; j++)
         if(linha[j] >= 65 && linha[j] <= 90 ||  linha[j] >= 97 && linha[j] <= 122)
            linha[j] += 3;
            
      reverse(linha, len);
            
      for(j = len/2; j < len; j++)
         linha[j]--;
            
      printf("%s\n",linha);
      memset(linha, 0 , sizeof(linha));          
   } 

   return 0;
}