#include <stdio.h>

unsigned int vyber_prave_maxima(int *in, unsigned int l, int *out) {
	if (in == NULL){
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
	int in[l]={2,5,3,9,7,4,6,3,1};
	int out[];
	unsigned int vysledok = vyber_prave_maxima(in, l, out);
	
