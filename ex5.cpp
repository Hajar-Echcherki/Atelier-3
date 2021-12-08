#include <iostream>
using namespace std ;
class animal { //une classe mère Animal.
    protected : // creation des variables nom et age
    string nom ;
    int age;
    public: 
     void setvalue(int age ,string nom){ //création du fonction set_value().
         this->age = age ;
         this->nom = nom;
    }
};
class Zebra: public animal { //la classe héritée (zebra)
    private:
    string  info = "Le zebre des montagnes (Equus zebra), d Afrique du Sud-Ouest, tend a avoir une toison lisse. " ; //quelques informations sur la race
    public :
    void show(){
        cout << "le zebre a " << age << " ans " << " il s'appelle " << nom << "." << info << endl; //pour afficher les infos sur cette race (age , nom)
    }
};
class Dolphin: public animal{
    private :
    string info = "Les dauphins sont des animaux tres sociaux." ;
    public:
    void show(){
        cout << "le dauphin a " << age << " ans" <<","<< "il s'appelle " << nom <<"."<< info << endl;
    }
};
int main () {
    Zebra r1; 
    Dolphin l2;
    r1.setvalue(9 , "zack"); // appeler la fonction set value
    l2.setvalue(23, "jermy");// appeler la fonction set value
    r1.show();
    l2.show();

    return 0 ;
}