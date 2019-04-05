#include "LivingBeing/Player.h"
#include "LivingBeing/Animal.h"

Player *Player::player_instance = new Player(3, 3, 100, 0);

/**
 * \brief Constructor Player dengan predefined location, water, and money, dan tas ukuran default
 */
Player::Player() : tas()
{
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
Player::Player(int _x, int _y, int _water, int _money) : tas(), LivingBeing(_x, _y, 'P')
{
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
 * \brief dipanggil saat command Talk Player dengan Animal, membunyikan suara animal
 */
void Player::TalkWith(Animal &animalia)
{
}
/**
 * \brief Interaksi Player dengan Animal, mengambil Milk atau Egg
 * \note Hanya dapat digunakan ke MilkProducingAnimal atau EggProducingAnimal
 */
void Player::InteractWith(Animal &animalia)
{
}
/**
 * \brief Interaksi Player dengan Facility, jika valid:
 * Well: Mengisi air yang dibawa player (int water)
 * Truck: Menjual semua Product yang ada pada inventori player
 * Mixer: Mengolah FarmProduct menjadi SideProduct, sesuai dengan resepnya
 * \note terdapat implementasi validasi posisi Player
 */
void Player::InteractWith(Facility &facilitia)
{
    facilitia.interact();
}
/**
 * \brief Player menyembelih Animal, lalu mendapatFarmProduct berupa Meat dari Animal yang disembelih
 * dan dimasukkan ke list inventori
 * \note Hanya dapat digunakan ke MeatProducingAnimal
 */
void Player::Kill(Animal &animalia)
{
    animalia.Die(true);
}
/**
 * \brief Interaksi Player dengan Cell, menumbuhkan rumput sebagai makanan dari Animal, mengurangi water sebanyak 1
 * \note terdapat implementasi validasi sudah ada rumput atau tidak
 */
void Player::Grow(Land &l)
{
    if (l.isGrassland() && water > 0 && !l.hasGrass())
    {
        l.setGrass(true);
        water--;
    }
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