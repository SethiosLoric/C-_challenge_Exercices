#include <iostream.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pow(void)
{
double entier1, entier2;

for(entier2=2; entier1 <= entier2; entier1++);
}

int main()
{
      double entier1, entier2;
      char signe1[1000], exit[3];

      cout <<"Bienvenue sur Calculator version 1.vous allez pourvoir \ncalculer le sinus, cosinus, tangeante, le carre, la racine carre (attention, surle programme racine carre ce note racine) et * - + /.\n\n\n";

while(1)
{
      cout <<"Entrer le premier entier: ";
      cin >> entier1;
      cout <<"Entrer le second entier: ";
      cin >> entier2;
      cout <<"Entrer le signe de l'operation (+ - / *) ou carre etc...: ";
      cin >> signe1;

if(strcmp(signe1, "+")==0)
{
      cout <<"Le resultat est: "<<entier1 + entier2 <<"\n\n";
}
else if(strcmp(signe1, "-")==0)
{
      cout <<"Le resultat est: "<<entier1 - entier2 <<"\n\n";
}
if(strcmp(signe1, "*")==0)
{
      cout <<"Le resultat est: "<<entier1 * entier2 <<"\n\n";
}
if(strcmp(signe1, "/")==0)
{
      cout <<"Le resultat est: "<<entier1 / entier2 <<"\n\n";
}
if(strcmp(signe1, "carre")==0)
{
      cout <<"Le resultat est: "<< entier1 * entier1 <<" et "<< entier2 * entier2 <<"\n\n";
}
if(strcmp(signe1, "cosinus")==0)
{
      cout <<"Le resultat est: "<< cos(entier1)<<" et "<< cos(entier2) <<"\n\n";
}
if(strcmp(signe1, "sinus")==0)
{
      cout <<"Le resultat est: "<< sin(entier1)<<" et "<< sin(entier2) <<"\n\n";
}
if(strcmp(signe1, "tangeante")==0)
{
      cout <<"Le resultat est: "<< tan(entier1)<<" et "<< tan(entier2) <<"\n\n";
}
if(strcmp(signe1, "puissance")==0)
{
      cout <<"Le resultat est: "<< pow(entier1,entier2) <<"\n\n";
}
if(strcmp(signe1, "racine")==0)
{
      cout <<"Le resultat est: "<< sqrt(entier1) <<" et "<< sqrt(entier2) <<"\n\n";
}
}
}
