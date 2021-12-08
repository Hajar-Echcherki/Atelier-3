#include <iostream>
using namespace std ;
class personne{ //une classe Personne qui comporte trois champs priv�s, nom, pr�nom et date dnaissance.
    protected:
        string nom ;
        string prenom;
        string date;
    public:
    personne(){}; //constructeur pour permettre d'initialiser les donn�es.
    personne(string nom , string prenom , string date) {
        this->nom = nom ;
        this->prenom = prenom ;
        this->date = date;
    }
    void afficher(){
        cout << "nom : " << nom << endl;
        cout << "prenom : " << prenom << endl;
        cout << "date de naissance : " << date << endl;
    }
};
class employe: public personne{ //une classe Employ� qui d�rive de la classe Personne,
    protected:
     string salaire = "8000dh"; //un champ salaire accompagne de sa propri�t�.
    public:
    employe(string nom , string prenom , string date):personne (nom,prenom,date){};
    void afficher(){
        cout << "nom : " << nom << endl;
        cout << "prenom : " << prenom << endl;
        cout << "date de naissance : " << date << endl;
        cout << "salaire : " << salaire << endl;
    }
};
class chef: public employe{
    protected:
        string service = "bureau de vente"; //unchamp Service accompagn� de sa propriete .
    public:
    chef(string nom , string prenom , string date):employe( nom , prenom , date){};
    void afficher(){
        cout << "nom : " << nom << endl;
        cout << "prenom : " << prenom << endl;
        cout << "date de naissance : " << date << endl;
        cout << "salaire : " << salaire << endl;
        cout << "service : " << service << endl;
    }
};
class Directeur: public chef{
    protected:
        string Societe = "societe general ";
    public:
    Directeur(string nom , string prenom , string date):chef( nom , prenom , date){};
    void afficher(){
        cout << "nom : " << nom << endl;
        cout << "prenom : " << prenom << endl;
        cout << "date de naissance : " << date << endl;
        cout << "salaire : " << salaire << endl;
        cout << "service : " << service << endl;
        cout << "Societe : " << Societe << endl;
    }
};
int main () {
    personne p1 ("jack" , "ery" , "1999");
    p1.afficher ();
    chef c = chef("mery", "ech","2000");
    c.afficher();
    Directeur d = Directeur ("Mark","Ro","1960");
    d.afficher();
    return 0 ;
}
