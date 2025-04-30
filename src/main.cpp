#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>
using namespace geode::prelude;

class $modify(GameManager) {
    bool isIconUnlocked(int _id, IconType _type) {
        if (GameManager::isIconUnlocked(_id, _type)) return true;
        if (_id <= 0) return false;
        //if (_id >= GameManager::countForType(_type)) return false;
        return Hacks::isHackEnabled("Icon Bypass");
    }
    bool isColorUnlocked(int _id, UnlockType _type) {
        if (GameManager::isColorUnlocked(_id, _type)) return true;
        return Hacks::isHackEnabled("Icon Bypass");
    }
};
