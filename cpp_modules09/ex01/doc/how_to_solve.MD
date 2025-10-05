# 과제 01: Reverse Polish Notation

 |Reverse Polish Notation|
 |---|
 |제출 디렉토리 : ex01/|
 |제출할 파일 : Makefile, main.cpp, RPN.{cpp, hpp}|
 |금지된 함수 : 없음|


* You must create a program with these **constraints**:  
   - The program name is RPN.  
   - Your program must take an **inverted** Polish mathematical expression as an argument.  
   - The numbers used in this operation and passed as arguments will always be less than 10. The calculation itself but also the result do not take into account this rule.  
   - Your program must process this expression and output the correct result on the standard output.  
   - If an error occurs during the execution of the program an error message should be displayed on the standard error.  
   - Your program must be able to handle operations with these tokens: "+ - / *".  

* 이기능들을 포함한 프로그램을 만들어라:  
   - 프로그램의 이름은 RPN.  
   - 프로그램은 폴란드 계산 방식의 스타일을 인자로 받아야합니다.  
   - 숫자는 10보더 작은 정수이다. 정답은 그렇지 않다.  
   - 형식에 맞다면 프로그램은 표준출력을 해라  
   - 만약 에러가 발생 했다면 표준에러로 출력해라  
   - 프로그램은 + , - , *, / 의기호만 토큰으로 가질 수 있다.  


> You must use at least one container in your code to validate this exercise.  
> You don’t need to manage the brackets or decimal numbers.  

> 하나의 컨테이너만 사용가능하다.  
> 너는   brackets or decimal numbers 은 핸들링 할 필요가 없다.  


```
$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
0
$> ./RPN "(1 + 1)"
Error
$>
```


>Warning: The container(s) you used in the previous exercise are forbidden here. The container(s) you used to validate this exercise will not be usable for the rest of this module.  

> 주의 : 전에 쓴 컨테이너는 못씀.      



안녕하세요! 해석을 검토해 드리겠습니다.

전반적으로 잘 해석하셨지만, 몇 가지 부분에서 의미가 조금 달라진 곳이 있습니다. 수정이 필요한 부분을 알려드리겠습니다:

### 원문과 번역 비교

1. "The program must take an **inverted** Polish mathematical expression as an argument."
   - 원래 번역: "프로그램은 폴란드 계산 방식의 스타일을 인자로 받아야합니다."
   - 수정 제안: "프로그램은 역 폴란드 표기법(RPN)의 수학 표현식을 인자로 받아야 합니다."

2. "The numbers used in this operation and passed as arguments will always be less than 10. The calculation itself but also the result do not take into account this rule."
   - 원래 번역: "숫자는 10보더 작은 정수이다. 정답은 그렇지 않다."
   - 수정 제안: "이 연산에 사용되고 인자로 전달되는 숫자는 항상 10보다 작을 것입니다. 계산 자체와 결과는 이 규칙을 고려하지 않습니다."

3. "If an error occurs during the execution of the program an error message should be displayed on the standard error."
   - 원래 번역: "만약 에러가 발생 했다면 표준에러로 출력해라"
   - 수정 제안: "프로그램 실행 중 오류가 발생하면 표준 오류(stderr)에 오류 메시지를 출력해야 합니다."

4. "You must use at least one container in your code to validate this exercise."
   - 원래 번역: "하나의 컨테이너만 사용가능하다."
   - 수정 제안: "이 과제를 완료하기 위해 코드에 최소한 하나의 컨테이너를 사용해야 합니다."

5. "You don't need to manage the brackets or decimal numbers."
   - 원래 번역: "너는 brackets or decimal numbers 은 핸들링 할 필요가 없다."
   - 수정 제안: "괄호나 소수점이 있는 숫자는 처리할 필요가 없습니다."

6. "Warning: The container(s) you used in the previous exercise are forbidden here. The container(s) you used to validate this exercise will not be usable for the rest of this module."
   - 원래 번역: "주의 : 전에 쓴 컨테이너는 못씀."
   - 수정 제안: "경고: 이전 연습에서 사용한 컨테이너는 여기서 금지됩니다. 이 과제를 완료하기 위해 사용한 컨테이너는 이 모듈의 나머지 부분에서 사용할 수 없습니다."

이렇게 수정하면 원문의 의미를 더 정확하게 전달할 수 있을 것입니다.


[폴란드 계산식이랑 위키피디아](https://ko.wikipedia.org/wiki/%EC%97%AD%ED%8F%B4%EB%9E%80%EB%93%9C_%ED%91%9C%EA%B8%B0%EB%B2%95)

> (3 + 5) * (4 + 2)를 역폴란드 표기법으로 쓰면 다음과 같다.  
> 3 5 + 4 2 + *  
> Stack을 이용하여 문제를 푼다.  
> 3이 먼저 스택으로 들어간다.  
> 5가 Stack으로 들어간다.  
> 기호를만나면 두수를 꺼내서 더한 후 Stack에 삽입  
> 4가 Stak에 들어간다.  
> 2가 Stak에 들어간다.  
> 기호를만나면 두수를 꺼내서 더한 후 Stack에 삽입  
> 기호를만나면 두수를 꺼내서 곱한다.  


> 절대적인 규칙은 연산자는 피연산자 - 1의 갯 수 만큼만 있어야 합니다.  
> RPN 의 검증은 음수는 처리하지 않겠습니다. 경우가 많아 집니다.  
> 1. 기호과 숫자는 붙어 있지않는다. 계산이 어렵기 때문에 막겠습니다.V  
> 2. 음수는 막는다. 계산이 어렵기 때문에 막겠습니다.V  
> 3. 사칙연산이 아니면 막는다.V  
> 4. 정수가 아니면 막는다.V  
> 5. N /0 은 막는다.  V
> 6. stack의 숫자가 한개인데 기호가 들어오면 막는다. 표현 방법의 fail을 뜻함.  V
> 7. 처음이 기호 라면 막는다.V  
> 8. 결과값은 long으로 처리하고 오버플로우는 long의 범위안에서만 한다.   
> 9. 연산자는 피연산자 보다 1 작아야한다.V   