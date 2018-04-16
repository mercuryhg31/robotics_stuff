#include "duel.h"

int main() {
    // All of this commented out code is that with which I tried to make the
    // game user interactive.
    
    string chosenSpell;
    print("What spell would you like to duel with?");
    print("01: Expelliarmus\n02: Avada_kedavra\n03: Incendio\n04: Stupefy\n05: Crucio\n06: Impedimenta\n07: Bombarda\n08: Lumos\n09: Petrificus_totalus\n10: Obliviate\n11: Diffindo\n12: Levicorpus\n13: Legilimens\n14: Sectumsempra\n15: Confundo\n");
    cin >> chosenSpell;
    
    // switch (chosenSpell){
    //     case 1:
    //     {
    //         duel playerOne(EXPELLIARMUS);
    //         break;
    //     }
    //     case 2:
    //     {
    //         duel playerOne(AVADA_KEDAVRA);
    //         break;
    //     }
    //     case 3:
    //     {
    //         duel playerOne(INCENDIO);
    //         break;
    //     }
    //     case 4:
    //     {
    //         duel playerOne(STUPEFY);
    //         break;
    //     }
    //     case 5:
    //     {
    //         duel playerOne(CRUCIO);
    //         break;
    //     }
    //     default:
    //         print("No, stop, that wasn't an option, restart everything!");
    //         break;
    // } // Cases do not work with strings
    
    spells inputSpell;
    if (chosenSpell == "Expelliarmus" || chosenSpell == "1" || chosenSpell == "01"){
        inputSpell = EXPELLIARMUS;
    } else if (chosenSpell == "Avada_kedavra" || chosenSpell == "2" || chosenSpell == "02"){
        inputSpell = AVADA_KEDAVRA;
    } else if (chosenSpell == "Incendio" || chosenSpell == "3" || chosenSpell == "03"){
        inputSpell = INCENDIO;
    } else if (chosenSpell == "Stupefy" || chosenSpell == "4" || chosenSpell == "04"){
        inputSpell = STUPEFY;
    } else if (chosenSpell == "Crucio" || chosenSpell == "5" || chosenSpell == "05"){
        inputSpell = CRUCIO;
    } else if (chosenSpell == "Impedimenta" || chosenSpell == "6" || chosenSpell == "06"){
        inputSpell = IMPEDIMENTA;
    } else if (chosenSpell == "Bombarda" || chosenSpell == "7" || chosenSpell == "07"){
        inputSpell = BOMBARDA;
    } else if (chosenSpell == "Lumos" || chosenSpell == "8" || chosenSpell == "08"){
        inputSpell = LUMOS;
    } else if (chosenSpell == "Petrificus_totalus" || chosenSpell == "9" || chosenSpell == "09"){
        inputSpell = PETRIFICUS_TOTALUS;
    } else if (chosenSpell == "Obliviate" || chosenSpell == "10"){
        inputSpell = OBLIVIATE;
    } else if (chosenSpell == "Diffindo" || chosenSpell == "11"){
        inputSpell = DIFFINDO;
    } else if (chosenSpell == "Levicorpus" || chosenSpell == "12"){
        inputSpell = LEVICORPUS;
    } else if (chosenSpell == "Legilimens" || chosenSpell == "13"){
        inputSpell = LEGILIMENS;
    } else if (chosenSpell == "Sectumsempra" || chosenSpell == "14"){
        inputSpell = SECTUMSEMPRA;
    } else if (chosenSpell == "Confundo" || chosenSpell == "15"){
        inputSpell = CONFUNDO;
    } else {
        print("\nInvalid / Not yet integrated\n\nYou've lost.");
        return 0;
    }
    duel playerOne(inputSpell);
    duel playerTwo(AVADA_KEDAVRA);
    print("");
    playerOne.printChosenDuel();
    playerOne.printStatus();
    playerOne.battle(playerTwo);
    
    return 0;
}