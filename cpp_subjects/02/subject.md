## ex00

- Ad-hoc polymorphism

* polymorphism: 다른 종류의 data types의 값들을 동일한 interface로 사용할 수 있게 해주는 컴퓨터 언어의 특징.
* 그 종류로는 ad-hoc , parametric , subtype 을 포함한다.
* ad-hoc polymorphism: 가장 단순한 형태의 polymorphism, 다른종류의 argument types에 적용가능하지만 어떤 argument가 적용되느냐에 따라서 다르게 행동하는 함수
* ad-hoc: 라틴어로 for this라는 뜻, 주로 일반화되지 않은 문제에 대한 급조된 해결책등을 언급할 때 사용.
* 보통 함수명은 사람들의 가독성을 위해서 만들어지지만 컴파일 될 때에는 함수의 symbol이 ( 함수명 + 인자들 + … ) 의 여러 조건들이 더해져서 만들어지게 된다.

- operators overload

* 연산자 오버로딩: 연산자를 커스텀하여 사용가능

- orthodox canonical classes

* OCCF라고도 부름(Orthodox Canonical Class Form)
* orthodox: 전통적인, canonical: 정식으로 인정받은
* In C++98 and C++03 the OCCF had four different methods that the C++ compiler is willing to generate:
  1. Default constructor
  2. Copy constructor
  3. Destructor
  4. Copy assignment operator

- 1번문제

* 실수를 10진수에서 2진수로 바꾸는 방법
  -> 2를 곱해가며 올림수를 체크하는 방식
* 고정 소수점 표현방식
  -> 정수부분과 소수부분을 따로 처리
  -> 16자리라고 하면 절반인 8자리 bits로 정수를 표현하고 나머지 절반으로 소수부분을 처리하는 방식
  -> 표현할 수 있는 범위가 적고 정밀도가 낮아서 컴퓨터 내부에서 잘 쓰이지 않음
  -> 그러나 정수와 같은 표현이기 때문에 처리 속도가 빠르다.
  -> 제한된 길이의 수를 빠르게 처리해야하는 경우에 적합함
* 부동 소수점 표현방식
  -> 소수점 위치를 이동시켜가면서 1.???? \* 2의 n제곱 형태로 표현
  -> 1.?????: 가수
  -> 2의 n제곱: 지수
  -> 이를 정규화한다고 표현한다.
* [고정소수점과 부동소수점 설명 링크](https://jiminish.tistory.com/81)
* 정수와 부동소수점 숫자는 상반된 성격을 가지고 있다고 생각해도 무방하다.
* 하지만 오늘 네가 만들 고정소수점 숫자로 이 생각이 바뀔거야.
* 대부분의 언어 스칼라 유형에서 항상 누락되는 고정 소수점 번호는 성능, 정확도, 범위 및 정밀도 사이에서 중요한 균형을 제공하므로 그래픽, 사운드 또는 과학 프로그래밍에서 이러한 숫자가 널리 사용되는 이유를 설명할 수 있다.
* cpp에는 고정소수점 숫자가 없으니, 네가 오늘 직접 만들어라.
* 만들어야 하는 형식 지정
  - private members
    - fixed point value(int)
    - the number of fractional bits(static constant int)
      -> always 8
  - public members
    - 생성자 (fixed point value를 0으로 설정)
    - 소멸자
    - 복사생성자: 얕은 복사를 하는 생성자가 디폴트로 만들어짐. 동적할당 데이터가 있는 경우 깊은 복사처리 필요.
    - 대입연산자 오버로딩: 자신과 같은 타입의 다른 객체를 대입받을 때 사용하는 연산자. 반드시 일반 멤버함수로 만들어야함(객체 자체와 직접적인 연관이 있기 때문). 자기 자신을 리턴해야하는 이유는 `a = b = c` 와 같은 경우 때문. 불필요한 복사를 방지하기 위해 레퍼런스 타입으로 리턴. 동일객체를 복사하려고 하는 경우의 예외처리가 필요한 이유는 코드 안에서 동적할당과 해제가 일어나는 경우 때문이다.[출처](https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=ruo1022&logNo=110181078656)
    - 멤버함수(int getRawBits( void ) const)
      -> fixed point value 리턴
    - 멤버함수(void setRawBits( int const raw ))
      -> fixed point value를 세팅

## ex01

- ex00은 좋은 시작이었지만 아직 아무일을 하지 않는다. 아래 생성자와 퍼브릭 멤버함수를 클래스에 추가하라(헤더에 선언을, 소스파일에 정의를 더해라)

  - 생성자(constructor): const int type을 인자로 받아서 고정소수점으로 변환하는 생성자. 분수 비트 값은 ex00과 똑같이 초기화됩니다.
  - 생성자(constructor): const float type을 인자로 받아서 고정소수점으로 변환하는 생성자. 분수 비트 값은 ex00과 똑같이 초기화됩니다.
  - 멤버함수(float toFloat( void ) const): 고정소수점(float)을 부동소수점으로 바꾸는 함수
  - 멤버함수(int toInt( void ) const): 고정소수점(int)을 부동소수점으로 바꾸는 함수
  - << operator 오버로딩: 고정소수점의 부동소수점 표현을 출력 스트림에 삽입하는 연산자 오버로드. 좌측 피연산자인 cout이 Fixed의 객체가 아니고 cout이 속한 ostream 클래스를 프로그래머가 수정할 수 없다. -> 클래스에 속하지 않는 외부의 멤버함수로 정의해야함 -> private 멤버에 접근이 불가능해짐

- 풀이에 참고
  - 1 << 8 means:
    [00000000 00000001] = 1 -> [00000001 00000000] = 256
  - 반올림하는 이유
  - 꺼내서 프린팅할때는 값을 저장할때와 반대의 과정을 거치면 된다.

## ex02

- 아래 연산자 오버로드를 Fixed 클래스의 public 멤버로 추가하라.

  - Six comparison operators: >, <, >=, <=, == and !=.
  - Four arithmetic operators: +, -, \*, and /.
  - 전위표기법(++, --), 후위표기법(++, --)

- 아래 함수를 Fixed 클래스의 public static 멤버로 추가하라.

  - min: 오버로딩
    -version one
    take: two fixed point values
    return: reference to the smallest value
    -version two
    take: two constant fixed point values
    return: reference to the smallest constant value
  - max: 오버로딩
    -version one
    take: two fixed point values
    return: reference to the biggest value
    -version two
    take: two constant fixed point values
    return: reference to the biggest constant value

- 피연산자의 개수에 의한 구분

  - 단항연산자: 전위증감연산자(++, --), 후위증감연산자(++, --)
  - 이항연산자: 비교연산자(>, <, >=, <=, ==, !=), 산술연산자(+, -, \*, /)

- 연산자 오버로딩 구현

  - 전위표기법(++, --)
    take: 피연산자가 자기자신이므로 인자가 없다.
    return: 해당객체의 참조를 반환(변화가 반영된 객체)
  - 후위표기법(++, --)
    take: 마찬가지로 피연산자가 자기자신이므로 인자는 필요없으나, 후위표기법임을 표시하기 위한 목적으로 int를 인자로 받는다.
    return: 해당객체의 복사본을 반환(변화가 반영되기 이전의 상태)

  - 비교연산자(>, <, >=, <=, ==, !=)
    return: bool(true/false)ㅌ

  - 사칙연산(+, -, \*, /)
    take: 우측 피연산자를 인자로 받음. 자기자신이 좌측 피연산자가됨.
    return: 자기자신은 바뀌지 않고, 복사하여 값을 적용한 임시객체를 리턴.

- 참고

  - static 멤버함수의 이해

    - 클래스에 속하지만, 객체에 속하지 않는다. 클래스에 선언되어있지만, 실제로 메모리에 올라갈때는 특정 객체에 속하는 것이아니라 클래스 전체에 공유되는 메모리에 저장된다.
    - 객체를 생성하지 않고 클래스 이름만으로 호출 가능
      (클래스이름.멤버함수이름())
    - 객체를 생성하지 않으므로 this 포인터를 가지지 않는다.
    - 특정 객체와 결합하지 않으므로 정적멤버만 사용가능

  - static 멤버함수에 const를 붙일 수 없는 이유

    - const를 붙인다는 것은 메서드 내에서 멤버 변수들의 값을 바꾸지 않겠다는 의미이다. const를 붙이면 해당 인스턴스의 this 포인터의 타입이 const로 바뀐다. (예: Fixed* -> const Fixed*)
    - 그런데 static 멤버함수는 this 포인터를 가지고 있지 않다. 즉, const로 만들 this포인터가 없다. -> static에 const를 붙이는 것은 불가능하기도 하고 아무 의미 없는 짓이다.
