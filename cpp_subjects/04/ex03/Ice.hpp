#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
// #include "ICharacter.hpp"

class Ice : public AMateria {
   protected:
   public:
    Ice(std::string const& type);
    Ice(Ice const& other);
    virtual ~Ice();

    Ice* clone() const;  //- 자식부 구현 필수
    // virtual void use(ICharacter& target);  //- 이걸로 다시 만들기
    void use(std::string const& name);  //- 테스트용 임시 함수

    // 대입연산자 오버로드
    Ice& operator=(Ice const& other);
};

#endif