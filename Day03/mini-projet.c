#include <stdio.h>
#include <string.h>
char name[50];
 int i = 0,taille =0;
 typedef struct {
    char nom[50];
    char numero_de_tele[13];
    char adresse_e_mail[40];
}contact;
contact contact_list[100];
 
void ajouter();
void supprimer();
void rechercher();
void afficher();
void modifier();
int main(){

        printf(" saisir votre taille :");
    scanf("%d",&taille);
   
        ajouter();
        
        //modification 

        modifier();
        // Supprission d'un contact

        supprimer();
    // la recherche d'un contact 

    
        rechercher();
     // Affichage des contacts
        afficher();
}




void ajouter()
{
    
    do{
        printf("entrez le nom du contact %d: ", i+1);
        scanf("%s", contact_list[i].nom);
        printf("entrez numero de telephone du contact %d: ", i+1);
        scanf("%s", contact_list[i].numero_de_tele);
        printf("entrez ladresse email du contact %d: ",i+1);
        scanf("%s", contact_list[i].adresse_e_mail);
        printf("--------------------- \n");
        i++;
        
     }while( i < taille);
     return;
}

void supprimer(){
    printf(" Entrez le nom du contact à supprimer : \n");
    scanf("%s", name);
    printf("le nom est : %s", name);

    for (int i = 0; i < taille; i++) {
        printf("\n le nom du contact dans la boucle est : %s et l'autre c'est : %s \n", contact_list[i].nom, name);
        if (strcmp(contact_list[i].nom, name) == 0) {
            for (int j = i; j < taille; j++) {
                contact_list[j] = contact_list[j + 1];
            }
            
            printf("Contact supprimé avec succès.\n");
        break0;
        }
        

    printf("Contact non trouvé.\n");
        
    }
    taille--;

    return;
}
 void modifier(){
     
     printf("\n Entrez le nom du contact à modifier : ");
        scanf("%s", name);
         for (int i = 0; i < taille; i++) {
            if (strcmp(contact_list[i].nom, name) == 0) {
                printf("Entrez le nouveau numero de telephone : ");
                scanf("%s", contact_list[i].numero_de_tele);
                printf("Entrez la nouvelle adresse email : ");
                scanf("%s", contact_list[i].adresse_e_mail);
                printf("Contact modifié avec succès.\n");
                break;
            }

            printf("Contact est different du contact %d.\n", i+1);
        }
        return;
 }
 void rechercher(){
     printf(" Entrez le nom du contact à rechercher : \n");
    scanf("%s", name);
    for (int i = 0; i < taille; i++) {
        
        if (strcmp(contact_list[i].nom, name) == 0) {
            printf("Contact %d:\n", i + 1);
            printf("Nom: %s\n", contact_list[i].nom);
            printf("Numéro de téléphone: %s\n", contact_list[i].numero_de_tele);
            printf("Adresse email: %s\n", contact_list[i].adresse_e_mail);

        }
    }
    return;
 }
 
void afficher(){
    printf("\n l'affichage des contacts \n");
        for (int i = 0; i < taille; i++) {
            printf("Contact %d:\n", i + 1);
            printf("Nom: %s\n", contact_list[i].nom);
            printf("Numéro de téléphone: %s\n", contact_list[i].numero_de_tele);
            printf("Adresse email: %s\n", contact_list[i].adresse_e_mail);
        }

    return;
}


