/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 25/01/2021
// R�le du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/JeuNombreAdeviner.h"

// Nom :InitJoueur
// R�le : Cr�e un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagn�es et de parties jou�es seront � 0.
// Param�tres d'entr�e :
// Param�tres de sortie :
// Param�tres d'entr�e/sortie :

void InitJoueur(TJoueur& joueurAcreer, string un_nom)
{
    joueurAcreer.nbPartiesJouees=0;
    joueurAcreer.nbTentatives=0;
    joueurAcreer.nbPartiesGagnees=0;
    joueurAcreer.nom = un_nom;
}


// Nom :TirerNombreMystere
// R�le : Tire al�atoirement un nombre � deviner entre 0 et 10
// Valeur de retour : nombre � deviner

int TirerNombreMystere()
{
        srand((unsigned int)time(0));
        NombreMystere=rand()%10) + 0;
        return NombreMystere;
}


// Nom :JouerPartie
// R�le : Fait jouer une partie au joueur pass� en param�tre
//        A la fin, met � jour les informations du joueur
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void JouerPartie(TJoueur& un_joueur, int nombreADeviner)
{
    int nbrealeatoire=rand()%10+0;
    int n;

    cout<<"Vous allez jouer pour deviner un nombre secret"<<endl;
    cout<<"Devine le nombre al�atoire"<<endl;
    cin>>n;

    while(n!=nbrealeatoire)
    {
        if(n<nbrealeatoire)
        {
        cout<<"C'est plus"<<endl;
        cin>>n;
        }
        if(n>nbrealeatoire)
        {
        cout<<"C'est moins"<<endl;
        cin>>n;
        }
    }
        if(n=nbrealeatoire)
        {
        cout<<"C'est gagne!"<<endl;
        }

}


// Nom : MajResultatsJoueur
// R�le : met � jour les informations du joueur pass� en param�tre
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void MajResultatsJoueur(TJoueur joueur, int nbEssais, bool gagne)
{

}



// Nom : ResultatsJoueur
// R�le : indique les r�sultats du joueur pass� en param�tre
//        le nombre de parties gagn�es, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations � l'�cran
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// R�le : retourne le nom du joueur
// Param�tres d'entr�e: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

