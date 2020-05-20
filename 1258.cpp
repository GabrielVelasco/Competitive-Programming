#include <iostream>             
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

struct dados{
   string name, cor_tam;
   bool operator() (dados i,dados j) {
       return (i.name < j.name);
   }
} nomes;

int main(){
   int n, ch = 0;
   vector<struct dados> ppl;

   while(1){
      cin >> n;
      if(n == 0)
         break;
      ppl.clear();
      cin.ignore();
      for(int i = 0; i < n; i++){
         ppl.push_back( dados() );
         getline(cin, ppl[i].name);
         getline(cin, ppl[i].cor_tam);
      }
      sort( ppl.begin(), ppl.end(), nomes);
      if(ch == 1)
         cout << endl;
      for(int k = 0; k < 6; k++){
         for(int i = 0; i < n; i++){
            if(k == 0){ //branco P
               if(ppl[i].cor_tam == "branco P"){
                  cout << ppl[i].cor_tam << " " << ppl[i].name << endl;
               }
            }

            if(k == 1){ //branco M
               if(ppl[i].cor_tam == "branco M"){
                  cout << ppl[i].cor_tam << " " << ppl[i].name << endl;
               }
            }

            if(k == 2){ //branco G
               if(ppl[i].cor_tam == "branco G"){
                  cout << ppl[i].cor_tam << " " << ppl[i].name << endl;
               }
            }

            if(k == 3){ //vermelho P
               if(ppl[i].cor_tam == "vermelho P"){
                  cout << ppl[i].cor_tam << " " << ppl[i].name << endl;
               }
            }

            if(k == 4){ //vermelho M
               if(ppl[i].cor_tam == "vermelho M"){
                  cout << ppl[i].cor_tam << " " << ppl[i].name << endl;
               }
            }

            if(k == 5){ //vermelho G
               if(ppl[i].cor_tam == "vermelho G"){
                  cout << ppl[i].cor_tam << " " << ppl[i].name << endl;
               }
            }

         }
      }
      ch = 1;
   }

   return 0;
}
