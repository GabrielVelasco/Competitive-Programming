#include <stdio.h>
#include <string.h>

char *paises[24] = { "brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos",
			"inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile",
			"mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria",
			"marrocos", "japao" };
char *saudacoes[24] = { "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
				"Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
				"Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
				"Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!",
				"Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!" };

struct salute{
	char name[100], salu[100];
} countries[24];

int id;

int findCountry(char entry[]){
	int i;
	for(i = 0; i < 24; i++){
		if(strcmp(entry, countries[i].name) == 0){
			id = i;
			return 1;
		}
	}
	return 0;
}

int main(){
	int i;
	for(i = 0; i < 24; i++){
		strcpy(countries[i].name ,paises[i]);
		strcpy(countries[i].salu ,saudacoes[i]);
	}
	char entry[100];
	while(scanf("%s", entry) != EOF){
		if(findCountry(entry)){
			printf("%s\n", countries[ id ].salu);
		}else{
			printf("--- NOT FOUND ---\n");
		}
	}

	return 0;
}