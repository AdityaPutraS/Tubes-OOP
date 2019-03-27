TARGET = tubes_oop

CXX = g++
INCLUDE_DIRS = -I Cell -I frontend -I Generik -I LivingBeing \
			-I Product -I include
CXXFLAGS += -O2 -g -Wall $(INCLUDE_DIRS)
LIBS += -lncurses

OBJS = Cell/Barn.o \
	Cell/Cell.o \
	Cell/Coop.o \
	Cell/Facility.o
	Cell/Grassland.o \
	Cell/Land.o \
	frontend/frontend.o \
	LivingBeing/Animal.o \
	LivingBeing/Chicken.o \
	LivingBeing/Cow.o \
	LivingBeing/Diplodocus.o \
	LivingBeing/EggProducingAnimal.o \
	LivingBeing/Lamb.o \
	LivingBeing/LandSalmon.o \
	LivingBeing/LivingBeing.o \
	LivingBeing/MeatProducingAnimal.o \
	LivingBeing/MilkProducingAnimal.o \
	LivingBeing/Platypus.o \
	LivingBeing/Player.o \
	Product/BeefRolade.o \
	Product/BlueFeather.o \
	Product/CheeseSteakOmelete.o \
	Product/ChickenEgg.o \
	Product/ChickenMeat.o \
	Product/CowMeat.o \
	Product/CowMilk.o \
	Product/CremeBrulee.o \
	Product/DiplodocusEgg.o \
	Product/DiplodocusMeat.o \
	Product/FarmProduct.o \
	Product/LambMeat.o \
	Product/LambMilk.o \
	Product/Lasagna.o \
	Product/PlatypusEgg.o \
	Product/Product.o \
	Product/SalmonEgg.o \
	Product/SalmonMeat.o \
	Product/SideProduct.o \
	Product/STMJ.o \
	src/Point.o \
	src/Renderable.o \
	src/World.o \
	src/mainGame.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(CXXFLAGS) $(LIBS)

clean:
	rm -f *.a *.o $(TARGET) core *~ *.so *.lo

# useful to make a backup "make tgz"
tgz: clean
	mkdir -p backups
	tar czvf ./backups/tubes_oop_`date +"%Y_%m_%d_%H.%M.%S"`.tgz --exclude backups *
