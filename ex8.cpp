#include<iostream>
using namespace std;
class media { //creation du class media
public:
	string titre; //creation du titre
	string id(string t) { //creation du id 
		titre = t;
		return titre;
	}
	virtual void imprimer() { //la creation du  fonction void imprimer
		cout << "le titre est : " << titre << endl; //pour l'affichage du message
	}

};
class livre :public media { // pour faire hériter le livre 
public:
	string auteur;
public:
	string fon_nom(string a)  {
		auteur = a;
		return a;
	}
	 void imprimer() { //creation du fonction void imprimer
		cout << "l'auteur du livre est :"<<auteur<<endl;
	}

};
class audio :public media { //audio est hérité de media
public:
	string type;
	string fonc_t(string t) {
		type= t;
		return t;
	}
	void imprimer() {
		cout << "le type d'audio est :" <<type<<endl;
	}

};
class cd :public audio {
public:
	string caractere;

	string fonc_c(string c){
		caractere = c;
			return c;

	}
	void imprimer() {
		cout << "le caractere du cd est :" << caractere<<endl;
	}

};
class cassete :public audio { //cassette est héritée d'audio
public:
	string nom;

	string func_nom(string n) {
		nom = n;
		return nom;
	}
	void imprimer() {
		cout << "le nom du cassette :" << nom<< endl;
	}

};
class disque :public audio { //disque est hérité d'audio
public:
	string disque;

	string fonc_dis(string d) {
		disque=d;
		return disque;
	}
	void imprimer() {
		cout << "disque : " << disque<<endl;
	}

};
class presse :public media {
public:
	string typ;
public:
	string fonc_pre(string ty) {
		typ = ty;
		return typ;

	}
	void imprimer() {
		cout << "le type de presse est :" << typ<<endl;
	}

};
class magazine : public presse {
public:
	string title;
public:
	string fonc_mag(string ti){
	title=ti;
	return title;
}
	void imprimer() {
		cout << "le titre de magazine est : " << title<<endl;
	}
};
class journal :public presse {
public:
	string nomjournal;
public:
	string fonc_jour(string j) {
		nomjournal = j;
		return nomjournal;
	}
	void imprimer() {
		cout << "le nom du journal est:  " << nomjournal<<endl;
	}
};
class revue :public presse {
public:
	string nomr;
public:
	string fonc_revue(string r) {
		nomr = r;
		return nomr;
	}
	void imprimer() {
		cout << "le nom du revue est:  " << nomr<<endl;
	}
};

int main() {
	media med;
	med.id("Hier soir");
	med.imprimer();
	livre li1;
	li1.fon_nom("Captin");
	li1.imprimer();
	audio au1;
	au1.fonc_t("mp3");
	au1.imprimer();
	cd c1;
	c1.fonc_c("DVD");
	c1.imprimer();
	disque di1;
	di1.fonc_dis("disque");
	di1.imprimer();
	presse pr1;
	pr1.fonc_pre("magazine");
	pr1.imprimer();
	magazine ma1;
	ma1.fonc_mag("le jour national");
	ma1.imprimer();
	revue re1;
	re1.fonc_revue("info 2M");
	re1.imprimer();
	journal jou1;
	jou1.fonc_jour("info soire");
	jou1.imprimer();
	cassete ca1;
	ca1.func_nom("cassette music");
	ca1.imprimer();
	return 0;

}