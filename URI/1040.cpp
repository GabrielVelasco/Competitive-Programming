#include <iostream>
using namespace std;
//a == 2, b == 3, c == 4, d == 1

int main(){
	float a, b, c, d; cin >> a >> b >> c >> d;
	float media, exam, nt;
	media = ((a*2) + (b*3) + (c*4) + d) / (10);
	printf("Media: %.1f\n", media);
	if(media >= 7){
		cout << "Aluno aprovado.\n";
	}else if(media < 5){
		cout << "Aluno reprovado.\n";
	}else{
		cout << "Aluno em exame.\n";
		cin >> exam;
		printf("Nota do exame: %.1f\n", exam);
		nt = (exam + media) / 2;
		if(nt > 5){
			cout << "Aluno aprovado.\n";
			printf("Media final: %.1f\n", nt);
		}else{
			cout << "Aluno reprovado.\n";
			printf("Media final: %.1f\n", nt);
		}
	}

	return 0;
}