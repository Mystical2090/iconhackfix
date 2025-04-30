#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>
using namespace geode::prelude;

class $modify(GameManager) {
    bool isIconUnlocked(int _id, IconType _type) override {
        if (GameManager::isIconUnlocked(_id, _type))
            return true;
        if (_id <= 0 || _id >= GameManager::countForType(_type))
            return false;
        return Mod::get()->getSettingValue<bool>("icon-hack");
    }

    bool isColorUnlocked(int _id, UnlockType _type) override {
        if (GameManager::isColorUnlocked(_id, _type))
            return true;
        return Mod::get()->getSettingValue<bool>("icon-hack");
    }
};
