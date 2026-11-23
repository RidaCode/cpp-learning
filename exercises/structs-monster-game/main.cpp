#include "Monster.hpp"

std::string_view getMonsterTypeName(MonsterType monsterType);
void printMonsterInfo(const Monster& monster);

int main()
{
    Monster ogre{.name{"Torg"}, .health{100}, .monsterType{MonsterType::ogre}};
    Monster slime{
        .name{"Blurp"}, .health{132}, .monsterType{MonsterType::slime}
    };
    Monster orc{.name{"Orc Cat"}, .health{172}, .monsterType{MonsterType::orc}};
    Monster dragon{
        .name{"Onyx"}, .health{125}, .monsterType{MonsterType::dragon}
    };
    Monster gaintSpider{
        .name{"Shadow Gaint Spider Boss"},
        .health{145},
        .monsterType{MonsterType::giant_spider}
    };

    printMonsterInfo(ogre);
    printMonsterInfo(slime);
    printMonsterInfo(orc);
    printMonsterInfo(dragon);
    printMonsterInfo(gaintSpider);

    return 0;
}
