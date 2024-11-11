/*fonction saisie de medicament*/ 
void SaisieMedicament(FILE *Medicament){

	Medicament medicament;
	printf("entrer le code de medicament");
	scanf("%d",&medicament.code);
	printf("enter le nom de medicament");
	scanf("%s",medicament.nomProduit);
	printf("entrer le prix de medicament");
	scanf("%f",&medicament.prix);
	printf("entrer la date de medicament (j/m/a)");
	scanf("%d %d %d",&medicament.date.j,&medicament.date.m,&medicament.date.a);
	
	// enregistrer les infos dans le fichier 
	fprintf(Medicament,"%d %s %f %d %d %d\n",medicament.code,medicament.nomProduit,medicament.prix,medicament.date.j,medicament.date.m,medicament.date.a);
	printf("bien ajouter\n");
   
	
}


/*fonction de creation de fichier de medicament*/ 
void CreationFichierMedicament(){
	FILE*Medicament=fopen("FichierMedicament.txt","w");
	if(Medicament=NULL){
		printf("ERREUR D'OUVERTURE DE FICHIER MEDICAMENT");
		exit(1);
	}
	
	
	
	int continue=1;
	
	while(continue){
		SaisieMedicament(Medicament);
		printf("choisie 1=continue \n 0=arreter");
		scanf("%d",&continue);
	}
	
	fclose(Medicament);
	
}
	

