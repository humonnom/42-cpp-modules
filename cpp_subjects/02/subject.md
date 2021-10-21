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
