#ifndef MATERIASOURCE__HPP
#define MATERIASOURCE__HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#define MS_NUM 4

#include <iostream>
#include <string>

// 구체클래스
class MateriaSource : public IMateriaSource {
   private:
    int msNum_;
    AMateria* msList_[MS_NUM];

   public:
    // create and delete
    MateriaSource();
    MateriaSource(MateriaSource const& other);
    ~MateriaSource();

    // get
    int getMateriaSourceNum() const;
    AMateria* getMateriaSourceList() const;

    // print
    void printMateriaSourceList() const;

    // play
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);

    // 대입연산자 오버로드
    MateriaSource& operator=(MateriaSource const& other);
};

#endif