#include "Cell/Well.h"
#include "LivingBeing/Player.h"
#include "World.h"

Well::Well(Point pos) : Facility(pos, 'W'){}


void Well::interact(){
    Player::GetInstance()->SetWater(100);
    World::GetInstance()->addMsg("Penyiram tanaman berhasil dipenuhi");
}

bool Well::isWell() const{
    return true;
}
