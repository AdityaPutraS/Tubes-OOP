#include "LivingBeing/Player.h"
#include "LivingBeing/Animal.h"
#include "World.h"

Player *Player::player_instance = new Player(9, 2, 100, 0);

/**
 * \brief Constructor Player dengan predefined location, water, and money, dan tas ukuran default
 */
Player::Player()
{
    tas = new LinkedList<Product*>();
    x = 0;
    y = 0;
    water = 100;
    money = 0;
}
/**
 * \brief Constructor Player dengan parametered location, water, money, dan tas ukuran default
 * \param _x posisi X Player
 * \param _y posisi Y Player
 * \param _water jumlah water yang dibawa player
 * \param _money jumlah uang yang dibawa player, default =0
 */
Player::Player(int _x, int _y, int _water, int _money) :  LivingBeing(_x, _y, 'P')
{
    tas = new LinkedList<Product*>();
    x = _x;
    y = _y;
    water = _water;
    money = _money;
}

//GETTER
int Player::GetWater()
{
    return water;
} ///Getter water
int Player::GetMoney()
{
    return money;
} ///Getter money
Point Player::GetPos()
{
    return Point(x, y);
}
//SETTER
void Player::SetWater(int _water)
{
    water = _water;
} ///setter water
void Player::SetMoney(int _money)
{
    money = _money;
} ///setter money
void Player::SetPos(Point pos)
{
    this->SetX(pos.getAbsis());
    this->SetY(pos.getOrdinat());
}

//METHOD
/**
 * \brief Player menyembelih Animal, lalu mendapatFarmProduct berupa Meat dari Animal yang disembelih
 * dan dimasukkan ke list inventori
 * \note Hanya dapat digunakan ke MeatProducingAnimal
 */
void Player::Kill(Animal *animalia)
{
    World::GetInstance()->hapusAnimal(animalia);
    animalia->Die(false);
}

void Player::AddInventory(Product *_p)
{
    tas->addNext(_p);
}

Product *Player::GetInventory(int i)
{
    return tas->get(i);
}

int Player::SearchInventory(string productName)
{
    for(int i = 0; i < tas->getNeff(); i++)
    {
        string temp = tas->get(i)->getName();
        for (int j = 0; j < temp.size(); j++)
        {
            temp[j] = tolower(temp[j]);
        }
        if(temp == productName)
        {
            return i;
        }
    }
    return -1;
}

void Player::DelInventory(int i)
{
    delete tas->getLinkedList(i).getIsi();
    tas->getLinkedList(i).removeThis();
}
LinkedList<Product *>* Player::getTas()
{
    return tas;
}

void Player::MakeTas(){
    tas = new LinkedList<Product*>();
}
void Player::RemoveTas(){
    delete tas;
}