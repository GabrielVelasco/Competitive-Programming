#include <bits/stdc++.h>
using namespace std;

struct dados{
	int numb, pts_acumulado, cesta_acum_pro, cesta_acum_contra;
	float cesta_avg;

};

bool campare(dados a, dados b){
	if( (a.pts_acumulado == b.pts_acumulado) ){
		if( a.cesta_avg != b.cesta_avg )
			return a.cesta_avg > b.cesta_avg;
		else if( (a.cesta_acum_pro != b.cesta_acum_pro) )
			return a.cesta_acum_pro > b.cesta_acum_pro;
		else
			return a.numb > b.numb;
	}
	
	return a.pts_acumulado > b.pts_acumulado;
}

void print_class(dados mymap[], int n, int h){
	if(h > 1)
		printf("\n");
	cout << "Instancia " << h << endl;
	for(int k = 1; k <= n; k++){
		if(k == n)
			cout << mymap[k].numb << endl;
		else
			cout << mymap[k].numb << " ";
		
		//printou e resetou para proxima instancia
		mymap[k].cesta_acum_contra = 0; 
		mymap[k].cesta_acum_pro = 0;
		mymap[k].pts_acumulado = 0;
	}
}

dados mymap[50];

int main(){
	int x, y, z, w, n, h = 1;

	while(cin >> n){
		if(n == 0)
			break;
		for(int i = 1; i <= (n*(n-1)/2); i++){
			cin >> x >> y >> z >> w;
			mymap[x].numb = x;
			mymap[z].numb = z;

			if(y > w){ //x ganhou

				mymap[x].pts_acumulado = mymap[x].pts_acumulado + 2;
				mymap[x].cesta_acum_pro = mymap[x].cesta_acum_pro + y;
				mymap[x].cesta_acum_contra = mymap[x].cesta_acum_contra + w;

				mymap[z].pts_acumulado = mymap[z].pts_acumulado + 1;
				mymap[z].cesta_acum_pro = mymap[z].cesta_acum_pro + w;
				mymap[z].cesta_acum_contra = mymap[z].cesta_acum_contra + y;

				if(mymap[x].cesta_acum_contra == 0)
					mymap[x].cesta_avg = mymap[x].cesta_acum_pro;
				else
					mymap[x].cesta_avg = (float)mymap[x].cesta_acum_pro / mymap[x].cesta_acum_contra;
				
				mymap[z].cesta_avg = (float)mymap[z].cesta_acum_pro / mymap[z].cesta_acum_contra;

			}else if(y < w){ //z ganhou
				mymap[z].pts_acumulado = mymap[z].pts_acumulado + 2;
				mymap[z].cesta_acum_pro = mymap[z].cesta_acum_pro + w;
				mymap[z].cesta_acum_contra = mymap[z].cesta_acum_contra + y;

				mymap[x].pts_acumulado = mymap[x].pts_acumulado + 1;
				mymap[x].cesta_acum_pro = mymap[x].cesta_acum_pro + y;
				mymap[x].cesta_acum_contra = mymap[x].cesta_acum_contra + w;

				if(mymap[z].cesta_acum_contra == 0)
					mymap[z].cesta_avg = mymap[z].cesta_acum_pro;
				else
					mymap[z].cesta_avg = (float)mymap[z].cesta_acum_pro / mymap[z].cesta_acum_contra;

				mymap[x].cesta_avg = (float)mymap[x].cesta_acum_pro / mymap[x].cesta_acum_contra;

			}else
				i --;
		}

		sort(mymap+1, mymap+(n+1), campare);		
		print_class(mymap, n, h);

		h ++;
	}

	return 0;
}