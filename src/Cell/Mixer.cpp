#include "Cell/Mixer.h"
#include "Product/AllProduct.h"
#include "LivingBeing/Player.h"
#include "World.h"
#include <string>

using namespace std;

vector<SideProduct *> Mixer::catalog = vector<SideProduct *>();

Mixer::Mixer(Point pos) : Facility(pos, 'M')
{
}

SideProduct *Mixer::mix(vector<Product> bahan)
{
    for (SideProduct *sp : catalog)
    {
        if (sp->canMake(bahan))
        {
            return sp;
        }
    }
    return nullptr;
}

void Mixer::initCatalog()
{
    catalog.push_back(new BeefRolade());
    catalog.push_back(new BlueFeather());
    catalog.push_back(new CheeseSteakOmelette());
    catalog.push_back(new CremeBrulee());
    catalog.push_back(new Lasagna());
    catalog.push_back(new STMJ());
}

bool Mixer::isMixer() const
{
    return true;
}

void Mixer::interact()
{
    World::GetInstance()->addMsg("Masukkan banyak product yang");
    World::GetInstance()->addMsg("mau di Mix");
    Tampilan::GetInstance()->clearLayar();
    World::GetInstance()->renderAll();
    string inputUser;
    inputUser = Tampilan::GetInstance()->readStringTable(0, 23, 11, 1, 1, 0);
    for (int i = 0; i < inputUser.size(); i++)
    {
        inputUser[i] = tolower(inputUser[i]);
    }
    int n = stoi(inputUser);
    World::GetInstance()->addMsg("Silahkan masukan input");
    World::GetInstance()->addMsg("nama bahan yang mau di mix");
    vector<Product> bahanInput;
    vector<int> noBahanDiInven;
    for (int i = 0; i < n; i++)
    {
        Tampilan::GetInstance()->clearLayar();
        World::GetInstance()->renderAll();
        inputUser = "";
        inputUser = Tampilan::GetInstance()->readStringTable(0, 23, 11, 1, 1, 0);
        for (int j = 0; j < inputUser.size(); j++)
        {
            inputUser[j] = tolower(inputUser[j]);
        }
        int letakBahan = Player::GetInstance()->SearchInventory(inputUser);
        if (letakBahan != -1)
        {
            bahanInput.push_back(*Player::GetInstance()->GetInventory(letakBahan));
            noBahanDiInven.push_back(letakBahan);
        }
    }
    if (bahanInput.size() != n)
    {
        World::GetInstance()->addMsg("Kamu tidak punya salah satu bahan");
        World::GetInstance()->addMsg("yang kamu masukan sebagai input");
    }
    else
    {
        //Sukses, cek apakah ada bahan yang bisa dibuat
        SideProduct *ptrSP = Mixer::mix(bahanInput);
        if (ptrSP == nullptr)
        {
            World::GetInstance()->addMsg("Tidak ada side product yang");
            World::GetInstance()->addMsg("bisa dibuat dengan input mu");
        }
        else
        {
            Player::GetInstance()->AddInventory(ptrSP);
            World::GetInstance()->addMsg("Sukses mix");
            //Hapus dari inventory
            int k = 0;
            for (int i : noBahanDiInven)
            {
                Player::GetInstance()->DelInventory(i-k);
                k++;
            }
        }
    }
}