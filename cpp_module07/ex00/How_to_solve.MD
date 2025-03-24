# EX00  Start with a few


 |Start with a few|
 |---|
 |Turn-in directory : ex00/|
 |Files to turn in : Makefile, main.cpp, whatever.{h, hpp}|
 |Forbidden functions : |


* implement the following function templates:  

>swap: Swaps the values of two given arguments. Does not return anything.  

>min: Compares the two values passed in its arguments and returns the smallest
one. If the two of them are equal, then it returns the second one.

>max: Compares the two values passed in its arguments and returns the greatest one.  
If the two of them are equal, then it returns the second one.  

>These functions can be called with any type of argument. The only requirement is that the two arguments must have the same type and must support all the comparison operators.

> Templates must be defined in the header files.

```cpp

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}

```

```sh
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```

# EX00 몇 가지로 시작하기

|몇 가지로 시작하기|
|---|
|제출 디렉토리: ex00/|
|제출할 파일: Makefile, main.cpp, whatever.{h, hpp}|
|금지된 함수: |

* 다음 함수 템플릿을 구현하세요:

>swap: 주어진 두 인자의 값을 교환합니다. 아무것도 반환하지 않습니다.

>min: 인자로 전달된 두 값을 비교하고 더 작은 값을 반환합니다. 만약 두 값이 같다면, 두 번째 값을 반환합니다.

>max: 인자로 전달된 두 값을 비교하고 더 큰 값을 반환합니다. 만약 두 값이 같다면, 두 번째 값을 반환합니다.

>이 함수들은 어떤 타입의 인자로도 호출될 수 있습니다. 유일한 요구사항은 두 인자가 동일한 타입이어야 하고 모든 비교 연산자를 지원해야 한다는 것입니다.

>템플릿은 헤더 파일에서 정의되어야 합니다.

```cpp
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
```

```sh
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```
