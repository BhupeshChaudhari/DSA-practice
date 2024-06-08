#include<iostream>
#include <cstring>

using namespace std;

class Hero {

    private:
    int health, level;

    public:
    char *name;
    static int timeToComplete;

    // Constructor
    Hero(){
        cout << "Constructor called" <<endl;
        name = new char[100];
    }

    //copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    Hero(int health){
        cout << "this " << this << endl;
        this -> health = health;
    }

    Hero(int health, int level){
        cout << "this " << this << endl;
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout << "[" <<this->health << ", ";
        cout << this->level << ", ";
        cout << this->name << "]" << endl;
    }
    
    //
    int getHealth(){
        return health;
    }

    void setHealth(int h){
        this -> health = h;
        //health = h
    }
    int getLevel(){
        return level;
    }

    void setLevel(int l){
        level = l;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static void random(){
        cout << timeToComplete << endl;
    }

    //Desctructor called
    ~Hero(){
        cout << "Destructor called" << endl;
    }

};

//static keyword
int Hero::timeToComplete = 90;

int main(){

    //object
    // Hero h1;

    // cout << "Size of " << sizeof(h1) << endl;

    // cout << "Health is " << h1.getHealth() << endl;

    // h1.setHealth(60);
    // cout << "Health is " << h1.getHealth();


/*

    //copy constructor
    Hero h5(30, 8);
    cout << h5.getHealth() << endl;
    cout << h5.getLevel() << endl;

    Hero h6(h5);
    // Hero h6;
// OR 
    // h6.health = h5.health;
    // h6.level = h5.level;
    cout << h6.getHealth() << endl;
    cout << h6.getLevel() << endl;

*/

    // Hero h5(30, 8); 
    // Hero h6(h5);
    // h6.print();



/*
    // Constructor
    Hero h2(10, 5);
    cout << "address of h2 " << &h2 << endl;
    cout << h2.getHealth() << endl;
    cout << h2.getLevel() << endl;

*/


/*
    // static allocation
    Hero a;

    //dynamic allocation
    Hero *b = new Hero; 
    b->setHealth(67);
    cout << (*b).getHealth() << endl;
    cout << b->getHealth();
*/

  
    // Shallow and deep copy
    // Hero hero1;
    // hero1.setHealth(100);
    // hero1.setLevel(6);
    // char name[8] = "Bhupesh";
    // hero1.setName(name);
    // hero1.print();

    // Hero hero2(hero1);
    // hero2.print();

    // cout << endl << endl;
    // hero1.name[0] = 'k';
    // hero1.print();
    // hero2.print();




    //accessing the static keyword
    // cout << Hero::timeToComplete <<endl;

    // Hero a;
    // cout << a.timeToComplete << endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout << b.timeToComplete << endl;

    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;



    //static function
    Hero::random();


}