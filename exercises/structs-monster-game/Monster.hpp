#include <iostream>
#include <string>

enum class MonsterType { ogre, dragon, orc, giant_spider, slime };

struct Monster {
    const std::string name{};
    unsigned long long health{};
    const MonsterType monsterType{};
};

std::string_view getMonsterTypeName(const MonsterType monsterType)
{
    using enum MonsterType;

    switch (monsterType) {
    case ogre:         return "Ogre";
    case dragon:       return "Dragon";
    case orc:          return "Orc";
    case giant_spider: return "Gaint Spider";
    case slime:        return "Slime";
    default:           return "InvalidMonster";
    }
};

void printMonsterInfo(const Monster& monster)
{
    // This Ogre is named Torg and has 145 health.
    std::cout << "This ";
    std::cout << getMonsterTypeName(monster.monsterType);
    std::cout << " is named " << monster.name;
    std::cout << " and has " << monster.health << " health.\n";
};
