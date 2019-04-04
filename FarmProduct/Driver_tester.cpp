#include "ChickenEgg.h"
#include <iostream>
using namespace std;

int main(){
    FarmProduct c("tes", 100);
    cout<<c.getType()<<"    "<<c.getPrice();
}