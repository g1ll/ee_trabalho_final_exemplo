#include <stdio.h>
#include <stdlib.h>
#include "rlc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *img_file;
	char *img_name = ".\\plot_rlc.png";
	
	system(".\\gnuplotPortable\\gnuplotPortable.exe -c gnuplot_rlc.gnu");
	
	img_file = fopen(img_name,"r");
	if(img_file!=NULL){
			printf("\nImagem gerada com sucesso!\n\n");
			printf("\nArquivo: %s\n",img_name);
			system(img_name);
	}else{
		printf("\nErro ao plotar imagem!\n\n");
	}
	
	return 0;
}
