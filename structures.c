#include <stdlib.h>
#include<stdio.h>

typedef struct {
	char nom [30];
	char prenom[30];
	char gmail [100];
	char passeword[50];
}Personne;


typedef struct{
	int h;
	int min;
	int s;
}Heure;   
   
   
typedef struct{
	int j;
	int m;
	int a;
	Heure heure;
}Date;   
   
typedef struct {
	int id;
	char nomProduit[30];
	float prix;
	Date date;
    int quantite;
	
}Medicament;

typedef struct{
	char nom[30];
	char prenom[30];
	char ville[30];
	int telephone[15];
	
}Fournisseur;

typedef struct{
	int numero;
	Date dateFacture;
	int idVente;
	char nomEmloye;
}facture;

typedef struct {
	int quantite;     
    char nom[50];         
    float prix;            
    Date dateReception;    
    Date dateExpiration;   
    Date derniereMiseAJour; 
} Stock;

typedef struct {
	char nom[30];
	char prenom[30];
	char cin[30];
	int telephone;
}ClientSpecifique;

