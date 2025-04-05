#include <stdio.h>

unsigned int vyber_prave_maxima(int *in, unsigned int l, int *out) {
	int max = in[l-1];
	unsigned int count = 0;
	out[count]=max;
	count++;
	for (int i=l-2; i>=0; i--){
		if(in[i]>max){
			max=in[i];
			out[count]=max
			count++;
		}
	}
}

int main(){
	
}