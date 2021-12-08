#include <iostream>
using namespace std ;
class personne{ //une classe Personne qui comporte trois champs privés, nom, prénom et date dnaissance.
    protected:
        string nom ;
        string prenom;
        string date;
    public:
    personne(){}; //constructeur pour permettre d'initialiser les données.
    personne(string nom , string prenom , string date) {
        this->nom = nom ;
        this->prenom = prenom ;
        this->date = date;
    }
    void afficher(){ //la creation du fonction void afficher
        cout << "nom : " << nom << endl; 
        cout << "prenom : " << prenom << endl;
        cout << "date de naissance : " << date << endl;
    }
};
class employe: public personne{ //une classe Employé qui dérive de la classe Personne,
    protected:
     string salaire = "8000dh"; //un champ salaire accompagne de sa propriété.
    public:
    employe(string nom , string prenom , string date):personne (nom,prenom,date){}; //un construcuteur employé dérivé de la personne
    void afficher(){
        cout << "nom : " << nom << endl; //pour afficher le nom
        cout << "prenom : " << prenom << endl; //pour afficher le prenom
        cout << "date de naissance : " << date << endl; //pour afficher la dat de naisssance
        cout << "salaire : " << salaire << endl; //pour afficher le salaire
    }
}; 
class chef: public employe{ // la class chef est  dérivée de la classe employe
    protected:
        string service = "bureau de vente"; //unchamp Service accompagné de sa propriete .
    public:
    chef(string nom , string prenom , string date):employe( nom , prenom , date){};
    void afficher(){ //pour qu'on peut l'appeler dans le main 
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
    personne p1 ("jack" , "ery" , "1999"); // les informations du personne 
    p1.afficher (); //appelation du fonction void afficher
    chef c = chef("mery", "ech","2000");
    c.afficher();
    employe e=employe ("hany","MO" ,"1990");
    e.afficher();
    Directeur d = Directeur ("Mark","Ro","1960");
    d.afficher();
    return 0 ;
}