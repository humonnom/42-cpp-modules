#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
// #include "ICharacter.hpp"

class Cure : protected AMateria {
   protected:
   public:
    Cure(std::string const& type);
    Cure(Cure const& other);
    virtual ~Cure();

    Cure* clone() const;  //- 자식부 구현 필수
    // virtual void use(ICharacter& target);  //- 이걸로 다시 만들기

    // 대입연산자 오버로드
    Cure& operator=(Cure const& other);
};

#endif