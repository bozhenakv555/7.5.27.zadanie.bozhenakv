#include <stdio.h>

unsigned int vyber_prave_maxima(int *in, unsigned int l, int *out) {
	if (in == NULL || l == 0){
		return 0;
	}
	int max = in[l-1];
	unsigned int count = 0;
	out[count]=max;
	count++;
	for (int i=l-2; i>=0; i--){
		if(in[i]>max){
			max=in[i];
			out[count]=max;
			count++;
		}
	}
	return count;
}

int main(){
	unsigned int l = 9;
	int in[9]={2,5,3,9,7,4,6,3,1};
	int *out=(int*)malloc(l*sizeof(int));
	unsigned int vysledok = vyber_prave_maxima(in, l, out);
	
    printf("Pocet najdenych pravych maximov: %u\n", vysledok);
    printf("Najdene prave maximy:\n");
    for (int i=0; i<vysledok; i++){
    	printf("%d", out[i]);
	}
	free(out);
	return 0;
}
	
