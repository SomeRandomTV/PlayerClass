//
//  playerClass.hpp
//  playerClasses
//
//  Created by Retr0 on 4/20/22.
//

#ifndef playerClass_hpp
#define playerClass_hpp

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <stdio.h>


using namespace std;


class Player {
    
public:
    Player();
    void SetMoney(int money);      // sets the money
    void SetLocation();            // sets location
    bool IsJail();                 // determines if player is in jail
    void PlayerProperty();         // holds all protery for player
    void PlayerHouses();           // holds all player houses
    void PlayerHotels();           // holds all player hotels
    void PlayerDeck();
    void ChanceDeckAlgo(vector<string>& chanceDeck, vector<string>& playerChanceCards);
    void ChestDeckAlgo(vector<string>& chestDeck, vector<string>& playerChestCards);
    bool DiceDoubles();            // determines dice doubles
    void DiceRoll(int dice1, int dice2); // sets dice roll
    void PlayerBuy();              // player buying function
    void PlayerSell();             // player selling function
    void PlayerBankruptcy();       // determines bankruptcy
    
    
    // Accessors
    int GetMoney();
    int GetLocation();
    int GetDicesRolls();
    string GetChanceCards();
    string GetChestCards();
    
    
    // prints all player info
    void Print();
    
    
private:
    int playerMoney;
    int playerLocation;
    bool jail;
    bool passGo;
    vector<string> playerCards;
    vector<string> propertyOwned;
    vector<int> playerNumHouses;
    vector<int> playerNumHotels;
    int diceRoll1;
    int diceRoll2;
    string nameLocation;
    int propertyCost;
    bool owned;
    bool sold;
    bool bankruptcy;
    
};



#endif /* playerClass_hpp */
