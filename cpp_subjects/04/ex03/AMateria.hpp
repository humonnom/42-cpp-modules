#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

// abstract class
class AMateria {
   protected:
    //- getType에서 리턴할 타입변수
    //- Ice와 Cure에서도 사용해야하므로 protected
    std::string type_;

   public:
    AMateria(std::string const& type);
    AMateria(AMateria const& other);
    virtual ~AMateria();

    std::string const& getType() const;
    virtual AMateria* clone() const = 0;  //- 순수가상함수
    virtual void use(ICharacter& target);

    // 대입연산자 오버로드
    AMateria& operator=(AMateria const& other);
};

#endif