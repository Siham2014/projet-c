#include<stdio.h>
#include<stdlib.h>



void AjouterMedicament (int code,char *nomProduit,float prix,Date date,FILE*Medicament){
	Medicament=fopen("FichierMedicament.txt","a+");
	if(Medicament==NULL){
		printf("ERREUR D'OUVERTURE DE FICHIER MEDICAMENT POUR AJOUT");
		exit(1);
	}
	
	fseek(Medicament,0,SEEK_END);
   fprintf(Medicament, "%d %s %.2f %d %d %d\n", code, nomProduit, prix, date.j, date.m, date.a);
    printf("Medicament ajoute avec succes.\n");
    fclose(Medicament);
	 

}



