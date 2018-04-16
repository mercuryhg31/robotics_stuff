#ifndef WIZARD_DUEL
#define WIZARD_DUEL

#include <iostream>
using namespace std;
#include <string>
#define print(x) cout << x << endl;
#define printnl(x) cout << x;

enum spells {
    EXPELLIARMUS,
    AVADA_KEDAVRA,
    INCENDIO,
    STUPEFY,
    CRUCIO,
    IMPEDIMENTA,
    BOMBARDA,
    LUMOS,
    PETRIFICUS_TOTALUS,
    OBLIVIATE,
    DIFFINDO,
    LEVICORPUS,
    LEGILIMENS,
    SECTUMSEMPRA,
    CONFUNDO
};

string spellString(spells spell) {
    switch (spell){
        case EXPELLIARMUS:
            return "Expelliarmus!";
        case AVADA_KEDAVRA:
            return "Avada kedavra!";
        case INCENDIO:
            return "Incendio!";
        case STUPEFY:
            return "Stupefy!";
        case CRUCIO:
            return "Crucio!";
        case IMPEDIMENTA:
            return "Impedimenta!";
        case BOMBARDA:
            return "Bombarda!";
        case LUMOS:
            return "Lumos!";
        case PETRIFICUS_TOTALUS:
            return "Petrificus totalus!";
        case OBLIVIATE:
            return "Obliviate!";
        case DIFFINDO:
            return "Diffindo!";
        case LEVICORPUS:
            return "Levicorpus!";
        case LEGILIMENS:
            return "Legilimens!";
        case SECTUMSEMPRA:
            return "Sectumsempra!";
        case CONFUNDO:
            return "Confundo!";
        default:
            return "Invalid / Not yet integrated";
    }
}

class duel {
    private:
        spells s_spell;
        float s_damage;
        int s_health = 100;
    public:
        duel(spells chosenSpell){
            s_spell = chosenSpell;
            switch (chosenSpell){
                case EXPELLIARMUS:
                    s_damage = 1000;
                    break;
                case AVADA_KEDAVRA:
                    s_damage = 10;
                    break;
                case INCENDIO:
                    s_damage = 5;
                    break;
                case STUPEFY:
                    s_damage = 5;
                    break;
                case CRUCIO:
                    s_damage = 20;
                    break;
                case IMPEDIMENTA:
                    s_damage = 3;
                    break;
                case BOMBARDA:
                    s_damage = 5;
                    break;
                case LUMOS:
                    s_damage = 0.5;
                    break;
                case PETRIFICUS_TOTALUS:
                    s_damage = 10;
                    break;
                case OBLIVIATE:
                    s_damage = 11;
                    break;
                case DIFFINDO:
                    s_damage = 10;
                    break;
                case LEVICORPUS:
                    s_damage = 9;
                    break;
                case LEGILIMENS:
                    s_damage = 15;
                    break;
                case SECTUMSEMPRA:
                    s_damage = 15;
                    break;
                case CONFUNDO:
                    s_damage = 7;
                    break;
                default:
                    s_damage = 5;
            }
        }
        void printChosenDuel(){
            print("You have chosen to duel with " << spellString(s_spell));
        }
        void printStatus() {
            print("Your health is " << s_health << ".");
        }
        void battle(duel opponent){
            while (opponent.s_health > 0 && s_health > 0){
                s_health -= opponent.s_damage;
                print("Your opponent dealt you " << opponent.s_damage << " damage!");
                printStatus();
                
                opponent.s_health -= s_damage;
                print("You've dealt " << s_damage << " damage!");
                print("Your opponent's health is " << opponent.s_health << ".");
            }
            if (s_health <= 0){
                print("\nYou've lost this battle.");
            } else if (opponent.s_health <= 0){
                print("\nYou've won!");
            }
        }
};

#endif