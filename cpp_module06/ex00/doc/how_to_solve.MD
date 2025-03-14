# Exercise 00: Conversion of scalar types

>Write a class ScalarConverter that will contain only one static method "convert"
>that will takes as parameter a string representation of a C++ literal in its most common
>form and output its value in the following serie of scalar types :

>문자열 매개변수를 받아 가장 일반적인 형태의 C++ 리터럴로 해석하고 다음 스칼라 타입 시리즈로 그 값을 출력하는 하나의 정적 메서드 "convert"만 포함하는 ScalarConverter 클래스를 작성하세요:

* char
* int
* float
* double

>As this class doesn’t need to store anything at all, this class must not be instanciable by users

>이 클래스는 어떤 것도 저장할 필요가 없으므로, 사용자가 인스턴스화할 수 없어야 합니다.
>
> - char 매개변수를 제외하고는 십진 표기법만 사용됩니다.
> - Examples of char literals: ’c’, ’a’, ...

>To make things simple, please note that non displayable characters shouldn’t be used as inputs. If a conversion to char is not displayable, prints an informative message.

>간단하게 하기 위해, 표시할 수 없는 문자는 입력으로 사용해서는 안 됩니다. char로의 변환이 표시할 수 없는 경우, 정보 메시지를 출력합니다.
> - Examples if int literals: 0, 42 , -42....
> - Examples if float literals: 0.0f, -4.2f, 4.2f...

>You have to handle these pseudo literals as well (you know, for science): -inff, +inff and nanf

> - Examples of double literals: 0.0, -4.2, 4.2...

>다음과 같은 의사 리터럴(과학을 위해)도 처리해야 합니다: -inff, +inff 및 nanf.

>You have to handle these pseudo literals as well (you know, for fun): -inf, +inf and nan.

>다음과 같은 의사 리터럴(재미를 위해)도 처리해야 합니다: -inf, +inf 및 nan.

>Write a program to test that your class works as expected.  

> 클래스가 예상대로 작동하는지 테스트하는 프로그램을 작성하세요.

>You have to first detect the type of the literal passed as parameter, convert it from string to its actual type, then convert it explicitly to the three other data types. Lastly, display the results as shown below.  

> 매개변수로 전달된 리터럴의 타입을 먼저 감지하고, 문자열에서 실제 타입으로 변환한 다음, 명시적으로 다른 세 가지 데이터 타입으로 변환해야 합니다. 마지막으로, 아래와 같이 결과를 표시합니다.  

>If a conversion does not make any sense or overflows, display a message to inform the user that the type conversion is impossible. Include any header you need in order to handle numeric limits and special values  

> 변환이 의미가 없거나 오버플로우되는 경우, 타입 변환이 불가능하다는 메시지를 표시합니다. 숫자 제한과 특수 값을 처리하기 위해 필요한 헤더를 포함하세요.


[**link_pdf_cpp06**](../cpp06.pdf)

```
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
```
