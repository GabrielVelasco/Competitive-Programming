#include <stdio.h>
#include <string.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

char str0[55], str1[55];
int count, len0, len1;

int compr(int i, int j, int ans){

	if(str1[j] == '\0')
		return ans;
	else if(str0[i] == '\0')
		return compr(0, j+1, ans);

	if(str0[i] != str1[j]){
		i = i - count;
		j = j - count;
		count = 0;
		return compr(i+1, j, ans);
	}else{
		count ++;
		ans = max(ans, count);
		return compr(i+1, j+1, ans);
	}
}

int main(){
	// maior substring em sequencia
	// usando recursao
	while(scanf("%[^\n] %[^\n]", str0, str1) != EOF){
		getchar();
		count = 0;
		len0 = strlen(str0);
		len1 = strlen(str1);
		printf("%d\n", compr(0, 0, 0));
	}

    return 0;
}