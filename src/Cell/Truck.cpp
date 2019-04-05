#include "Cell/Truck.h"
#include "LivingBeing/Player.h"
#include "World.h"

Truck::Truck(Point pos):Facility(pos, 'T'){}

void Truck::interact(){
    int money=0;
    LinkedList<Product*>* tasAlias = Player::GetInstance()->getTas();
    while(tasAlias != nullptr){
        money+= tasAlias->getIsi()->getPrice();
        tasAlias = tasAlias->getNext();
    }
    Player::GetInstance()->SetMoney(Player::GetInstance()->GetMoney()+money);
    Player::GetInstance()->RemoveTas();
    Player::GetInstance()->MakeTas();
}

bool Truck::isTruck() const {
    return true;
}