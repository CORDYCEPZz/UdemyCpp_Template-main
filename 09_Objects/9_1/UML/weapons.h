#pragma once
#include <string>

class AttackInterface
{
public:
    AttackInterface() = default;
    ~AttackInterface() = default;

    virtual void attack() = 0; // durch diese deklaration kann man kein AttackInterface Element erzeugen
};

class weapon : public AttackInterface
{
public:
    weapon( const std::string &_name,
            const float _damage,
            const float _attackspeed,
            const bool _single_handed,
            const bool _dual_handed) : name(_name), damage(_damage), attackspeed(_attackspeed), single_handed(_single_handed), dual_handed(_dual_handed) {};


    ~weapon() = default;

    std::string get_name() const;
    float get_damage() const;
    float get_attackspeed() const;
    bool get_is_single_handed() const;
    bool get_is_dual_handed() const;

protected:
    std::string name;
    float damage;
    float attackspeed;
    bool single_handed;
    bool dual_handed;
};

class Axe : public weapon
{
public:
    Axe( const std::string &_name,
         const float _damage,
         const float _attackspeed)
        : weapon(_name, _damage, _attackspeed, true, false){};

    ~Axe() = default;

    void attack() final; //hier überschreibt man jetzt die funktion es hätte auch override geklappt man nimmt aber final weil es das ende der hierarchie ist
};

class Longbow : public weapon
{
public:
    Longbow( const std::string &_name,
             const float _damage,
             const float _attackspeed)
            : weapon(_name, _damage, _attackspeed, false, true){}; // hier hardcoden das es subgke gabded ider trze ust

    ~Longbow() = default;

    void attack() final;
};
