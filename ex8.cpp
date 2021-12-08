#include <iostream>
using namespace std;

class Media{ //declaration du classe media
    protected:
    char *titre = new char; //declaration d'un pointeur .
    public:
    virtual void imprimer(){ //une fonction virtuelle void imprimer
        cout << "le titre de ce media est " << titre << endl;
    }
    virtual char *id(){ //une fonction virtuelle char *id 
        char *Medium = new char;
        Medium = "Media";
        return Medium ;
    }
};
class Audio : public Media{
    protected:
    string duree;
    public:
    virtual void imprimer(){
        cout << "cet audio de titre : " << titre << " de duree " << duree << endl;
    }
    virtual char *id(){
        cout << "titre :";
        cin >> titre;
        return titre ;
    }
};
class CD : public Audio{
    private:
    string medium = "CD";
    public:
    void imprimer(){
        cout << "ce" << medium <<"contient  est  appele " << titre << " de longueur de : " << duree << endl;
    }
    char *id(){
         return 0;
    }
};
class Cassette: public Audio{
    protected:
    string medium = "Cassette";
    public:
    void imprimer(){
        cout << "cette "<< medium << " contient un audio appele " << titre << " de longueur de : " << duree << endl;
    }
    char *id(){
         return 0;
    }
};
class Disque : public Audio{
    protected:
    string medium = "Disque";
    public:
    void imprimer(){
        cout << "ce "<< medium << "contient un audio appele" << titre << " de longueur de : "<< duree << endl;
    }
    char *id(){
         return 0;
    }

};
class Livre : public Media{
    protected:
    string auteur;
    string editeur;
    public:
    void imprimer(){
        cout << "le Titre du livre est " << titre << " ecrit par " << auteur << " et editer par " << endl;
    }
    char *id(){
         return 0;
    }
};
class Presse : public Media{
    public:
        string maison_edition;
    virtual void imprimer(){
        cout << "ce media est titre : " << titre << " editer par " << maison_edition << endl;
    }
    virtual char *id(){
         return 0;
    }
};
class Magazine : public Presse {
    private:
        string num_serie;
    public:
    void imprimer(){

    }
    char *id(){
         return 0;
    }
};
class Journal : public Presse {
       public:
    void imprimer(){

    }
    char *id(){
         return 0;
    }
};
class Revue :public Presse {
       public:
    void imprimer(){

    }
    char *id(){
        return 0;
    }
};

int main () {
    Media m1;
    return 0;
}
