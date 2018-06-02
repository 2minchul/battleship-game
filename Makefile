CC = g++
TARGET = battleship
SOURCES = src/main.cpp \
          src/BattleShipApp.cpp \
          src/BattleShipApp.h \
          src/pane/BattleShipMap.cpp \
          src/pane/BattleShipMap.h \
          src/pane/Pane.cpp \
          src/pane/Pane.h \
          src/pane/StatPane.cpp \
          src/pane/StatPane.h \
          src/GameManager.cpp \
          src/GameManager.h \
          src/ship/Ship.cpp \
          src/ship/Ship.h \
          src/ship/Aircraft.cpp \
          src/ship/Aircraft.h \
          src/ship/BattleShip.cpp \
          src/ship/BattleShip.h \
          src/ship/Cruiser.cpp \
          src/ship/Cruiser.h \
          src/ship/Destroyer.cpp \
          src/ship/Destroyer.h \
          src/Player.cpp \
          src/Player.h \
          src/types.h \
          src/types.cpp

LDFLAGS = -lncurses -std=c++11

all:
	@git pull -q
	$(CC) -o $(TARGET) $(SOURCES) $(LDFLAGS)

clean:
	rm -rf *.o $(TARGET)
