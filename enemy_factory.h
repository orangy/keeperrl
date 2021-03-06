#pragma once

#include "util.h"
#include "villain_type.h"

struct EnemyInfo;

RICH_ENUM(EnemyId,
  KNIGHTS,
  WARRIORS,
  DWARVES,
  ELVES,
  ELEMENTALIST,
  ELEMENTALIST_ENTRY,
  LIZARDMEN,
  RED_DRAGON,
  GREEN_DRAGON,
  MINOTAUR,

  VILLAGE,
  BANDITS,
  NO_AGGRO_BANDITS,
  ENTS,
  DRIADS,
  CYCLOPS,
  SHELOB,
  HYDRA,
  KRAKEN,
  ANTS_OPEN,
  ANTS_CLOSED,
  CEMETERY,
  CEMETERY_ENTRY,

  DARK_ELVES,
  DARK_ELVES_ENTRY,
  GNOMES,
  GNOMES_ENTRY,
  OGRE_CAVE,
  HARPY_CAVE,
  DEMON_DEN_ABOVE,
  DEMON_DEN,
  ORC_VILLAGE,
  SOKOBAN,
  SOKOBAN_ENTRY,
  WITCH,
  DWARF_CAVE,
  KOBOLD_CAVE,
  HUMAN_COTTAGE,
  UNICORN_HERD,
  ELVEN_COTTAGE,

  TUTORIAL_VILLAGE
);


struct EnemyEvent;

class EnemyFactory {
  public:
  EnemyFactory(RandomGen&);
  EnemyInfo get(EnemyId);
  vector<EnemyEvent> getExternalEnemies();
  vector<EnemyInfo> getVaults();

  private:
  EnemyInfo getById(EnemyId);
  RandomGen& random;
};
