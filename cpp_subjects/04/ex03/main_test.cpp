#include <iostream>
#include <string>

class AMateria {
   protected:
    //- getType에서 리턴할 타입변수
    //- Ice와 Cure에서도 사용해야하므로 protected
    std::string type_;

   public:
    AMateria(std::string const& type) {
        std::cout << "[ AMateria class ] constructor"
                  << ": type is " << type << std::endl;
    };
    AMateria(AMateria const& other) {
        std::cout << "[ AMateria class ] copy constructor" << std::endl;
        *this = other;
    };
    virtual ~AMateria() {
        std::cout << "[ AMateria class ] destructor" << std::endl;
    };

    std::string const& getType() const {
        std::cout << "[ AMateria class ] get type" << std::endl;
        return type_;
    };
    virtual AMateria* clone() const = 0;  //- 순수가상함수
    // virtual void use(ICharacter& target);  //- 이걸로 다시 만들기
    // virtual void use(std::string const& name);  //- 테스트용 임시 함수

    // 대입연산자 오버로드
    AMateria& operator=(AMateria const& other) {
        std::cout << "[ AMateria class ] copy assignment overload" << std::endl;
        if (this != &other) type_ = other.getType();
        return *this;
    };
};

class Cure : protected AMateria {
   public:
    Cure(std::string const& type);
    Cure(Cure const& other);
    virtual ~Cure();

    Cure* clone() const;  //- 자식부 구현 필수
    // virtual void use(ICharacter& target);  //- 이걸로 다시 만들기
    // void use(std::string const& name);  //- 테스트용 임시 함수

    // 대입연산자 오버로드
    Cure& operator=(Cure const& other);
};

int main() {
    // AMateria* basePtr = new Cure("cure");

    // std::cout << "---------- destroy -----------" << std::endl;
    // delete metPtr;
    // delete metPtr2;

    // AMateria* basePtr;  // - pointer는 생성 가능 -> 어떤때 사용하는지? 궁금함

    return 0;
}