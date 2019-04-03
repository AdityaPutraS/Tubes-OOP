TARGET = tubes_oop

CXX = g++
INCLUDE_DIRS = -I include
CXXFLAGS += -O2 -g -Wall $(INCLUDE_DIRS)
LIBS += -lncurses

OBJS = src/Product/SideProduct.o \
	src/Cell/Barn.o \
	src/Cell/Cell.o \
	src/Cell/Coop.o \
	src/Cell/Facility.o \
	src/Cell/Mixer.o \
	src/Cell/Truck.o\
	src/Cell/Well.o \
	src/Cell/Grassland.o \
	src/Cell/Land.o \
	src/frontend/frontend.o \
	src/LivingBeing/Animal.o \
	src/LivingBeing/Chicken.o \
	src/LivingBeing/Cow.o \
	src/LivingBeing/Diplodocus.o \
	src/LivingBeing/EggProducingAnimal.o \
	src/LivingBeing/Lamb.o \
	src/LivingBeing/LandSalmon.o \
	src/LivingBeing/LivingBeing.o \
	src/LivingBeing/MeatProducingAnimal.o \
	src/LivingBeing/MilkProducingAnimal.o \
	src/LivingBeing/Platypus.o \
	src/LivingBeing/Player.o \
	src/Product/BeefRolade.o \
	src/Product/BlueFeather.o \
	src/Product/CheeseSteakOmelete.o \
	src/Product/ChickenEgg.o \
	src/Product/ChickenMeat.o \
	src/Product/CowMeat.o \
	src/Product/CowMilk.o \
	src/Product/CremeBrulee.o \
	src/Product/DiplodocusEgg.o \
	src/Product/DiplodocusMeat.o \
	src/Product/FarmProduct.o \
	src/Product/LambMeat.o \
	src/Product/LambMilk.o \
	src/Product/Lasagna.o \
	src/Product/PlatypusEgg.o \
	src/Product/Product.o \
	src/Product/SalmonEgg.o \
	src/Product/SalmonMeat.o \
	src/Product/STMJ.o \
	src/Point.o \
	src/Renderable.o \
	src/World.o \
	src/mainGame.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(CXXFLAGS) $(LIBS)

clean:
	rm -f *.a *.o $(TARGET) core *~ *.so *.lo 
	find . -name "*.o" -type f 
	find . -name "*.o" -type f -delete

# useful to make a backup "make tgz"
tgz: clean
	mkdir -p backups
	tar czvf ./backups/tubes_oop_`date +"%Y_%m_%d_%H.%M.%S"`.tgz --exclude backups *
