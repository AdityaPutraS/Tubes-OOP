//hantu
#include <iostream>
#include "Product/SideProduct.h"
#include "World.h"
#include "Cell/AllLand.h"
#include "Cell/AllFacil.h"
#include "Frontend/frontend.h"
#include "LivingBeing/Player.h"
#include "LivingBeing/LivingBeing.h"

using namespace std;

int main()
{
    Mixer::initCatalog();
    //Peta kaya di spek
    for (int y = 0; y < 11; y++)
    {
        for (int x = 0; x < 11; x++)
        {
            World::GetInstance()->setLand(new Grassland(false), x, y);
        }
    }
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            World::GetInstance()->setLand(new Coop(false), x, y);
        }
    }
    for (int y = 0; y < 6; y++)
    {
        for (int x = 4; x < 8; x++)
        {
            World::GetInstance()->setLand(new Barn(false), x, y);
        }
    }
    World::GetInstance()->addFacil(new Truck(Point(10, 0)), 10, 0);
    World::GetInstance()->addFacil(new Mixer(Point(10, 1)), 10, 1);
    World::GetInstance()->addFacil(new Well(Point(10, 3)), 10, 3);

    //World::GetInstance()->addLB(new LandSalmon(...));
    bool gamePlay = true;
    string inputUser;
    while (gamePlay)
    {
        Tampilan::GetInstance()->clearLayar();
        World::GetInstance()->renderAll();
        World::GetInstance()->updateAll();
        //Get input user
        inputUser = Tampilan::GetInstance()->readStringTable(0, 23,11,1, 1, 0);
        for(int i = 0; i < inputUser.size(); i++)
        {
            inputUser[i] = tolower(inputUser[i]);
        }
        if(inputUser == "exit")
        {
            gamePlay = false;
        }else if(inputUser == "up")
        {
            Player::GetInstance()->Move(LivingBeing::direction::up);
        }else if(inputUser == "down")
        {
            Player::GetInstance()->Move(LivingBeing::direction::down);
        }else if(inputUser == "left")
        {
            Player::GetInstance()->Move(LivingBeing::direction::left);
        }else if(inputUser == "right")
        {
            Player::GetInstance()->Move(LivingBeing::direction::right);
        }else if(inputUser == "talk")
        {
            
        }else if(inputUser == "interact")
        {
            
        }else if(inputUser == "kill")
        {
            
        }else if(inputUser == "grow")
        {
            
        }
    }
    endwin();
}