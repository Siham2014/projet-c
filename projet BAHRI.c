#include <stdlib.h>
#include<stdio.h>

typedef struct {
	char nom [30];
	char prenom[30];
	char gmail [100];
	char passeword[50];
}User;
   
typedef struct{
	int j;
	int m;
	int a;
}Date;   
   
typedef struct {
	int code;
	char nomProduit[30];
	float prix;
	Date date;
	
}Medicament;

typedef struct{
	char nom[30];
	char prenom[30];
	char ville[30];
	int telephone;
	
}Fournisseur;

typedef struct{
	int numero;
	Date dateFacture;
}facture;

typedef struct {
    char nom[50];         
    int quantité;          
    float prix;            
    Date dateReception;    
    Date dateExpiration;   
    Date derniereMiseAJour; 
} Stock;

typedef struct {
	char nom[30];
	char prenom[30];
	char cin[30];
	int téléphone;
}ClientSpecifique;

