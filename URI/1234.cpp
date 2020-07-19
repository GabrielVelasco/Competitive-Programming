#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
   string sentence;
   while(getline(cin, sentence)){
      int len = sentence.size(), cont = 0;
      
      for(int i = 0; i < len; i++){
         if( (cont%2 == 0 && sentence[i] != 32)){
            sentence[i] = toupper(sentence[i]);
            cont ++;
         }else if( (cont%2 == 1 && sentence[i] != 32)){
            sentence[i] = tolower(sentence[i]);
            cont ++;
         }

         cout << sentence[i];
      }
      printf("\n");
   }
   
   return 0;
}