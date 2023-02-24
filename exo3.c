#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <curses.h>
#include <time.h>

void affichePrenom(char **tab, int taille){
	
	for(int i=0;i<taille;i++){
		
		printf("\n%s",*(tab+i));
	}
}
			




void main(){

	can_change_color(COLOR_BLACK) ;


	int n,nc;
	char** tabPrenom=NULL;
	printf("Donner nbr prenoms\n");
	scanf("%d",&n);

	tabPrenom=malloc(n*sizeof(char*));

	for(int i=0;i<n;i++){
		printf("Donner nbr caracteres\n");
		scanf("%d",&nc);
		*(tabPrenom+i)=malloc((nc+1)*sizeof(char));
		printf("Donner le prenom\n");
		scanf("%s",*(tabPrenom+i));

	}

	affichePrenom(tabPrenom,n);
}
