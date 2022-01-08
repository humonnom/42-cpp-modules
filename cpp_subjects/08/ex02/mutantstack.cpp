#include "mutantstack.hpp"

/*
**   Where is code?
**
**    +-----------+
**	  | All codes |
**    +-----------+
**          ▽
**    mutantstack.hpp 
**
** 템플릿은 사용하는 시점에 코드가 인스턴스화 되기 때문에
** 컴파일러가 선언뿐  아니라 그 내용인 정의도 알아야한다.
** 따라서 선언과 정의가 하나의 파일안에 존재해야 한다.
** 정의를 cpp파일로 따로 빼고 싶다면,
** 해당 템플릿을 사용하는 파일에서 hpp(선언)과 cpp(정의)를
** 모두 include해야한다. [참고링크](https://vaert.tistory.com/4)
**
*/