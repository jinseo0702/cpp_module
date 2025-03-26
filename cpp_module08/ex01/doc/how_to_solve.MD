# Exercise 01: Span

 | Span |
 |---|
 |Turn-in directory : ex01/|
 |Files to turn in : Makefile, main.cpp, Span.{h, hpp}, Span.cpp|
 |Forbidden functions : None|

> Develop a Span class that can store a maximum of N integers. N is an unsigned int variable and will be the only parameter passed to the constructor.  

> This class will have a member function called addNumber() to add a single numberto the Span. It will be used in order to fill it. Any attempt to add a new element if there are already N elements stored should throw an exception.  

> Next, implement two member functions: shortestSpan() and longestSpan()  

> They will respectively find out the shortest span or the longest span (or distance, if you prefer) between all the numbers stored, and return it. If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.  

> Of course, you will write your own tests and they will be way more thorough than the ones below. Test your Span at least with a minimum of 10 000 numbers. More would be even better.  

> Running this code:

```cpp
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;

```

```
$> ./ex01
2
14
$>
```

> Last but not least, it would be wonderful to fill your Span using a range of iterators. Making thousands calls to addNumber() is so annoying. Implement a member function to add many numbers to your Span in one call.  

> If you don’t have a clue, study the Containers. Some member functions take a range of iterators in order to add a sequence of elements to the container.  



# 연습 01: Span

| Span |
|---|
|제출 디렉토리: ex01/|
|제출할 파일: Makefile, main.cpp, Span.{h, hpp}, Span.cpp|
|금지된 함수: 없음|

> 최대 N개의 정수를 저장할 수 있는 Span 클래스를 개발하세요. N은 unsigned int 변수이며 생성자에 전달되는 유일한 매개변수입니다.

> 이 클래스는 Span에 단일 숫자를 추가하기 위한 addNumber()라는 멤버 함수를 가질 것입니다. 이 함수는 Span을 채우는 데 사용됩니다. 이미 N개의 요소가 저장되어 있는 상태에서 새 요소를 추가하려는 시도는 예외를 던져야 합니다.

> 다음으로, 두 개의 멤버 함수를 구현하세요: shortestSpan()과 longestSpan()

> 이 함수들은 각각 저장된 모든 숫자 사이에서 가장 짧은 간격 또는 가장 긴 간격(또는 거리, 원하신다면)을 찾아 반환합니다. 저장된 숫자가 없거나 하나만 있는 경우, 간격을 찾을 수 없습니다. 따라서, 예외를 던지세요.

> 물론, 여러분은 자신만의 테스트를 작성할 것이며 이는 아래 제시된 것보다 훨씬 더 철저해야 합니다. Span을 최소 10,000개의 숫자로 테스트하세요. 더 많은 숫자로 테스트하는 것이 더 좋을 것입니다.

> 다음 코드를 실행하면:

```cpp
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
```

```
$> ./ex01
2
14
$>
```

> 마지막으로, 이터레이터 범위를 사용하여 Span을 채울 수 있다면 훌륭할 것입니다. addNumber()를 수천 번 호출하는 것은 너무 귀찮습니다. 한 번의 호출로 많은 숫자를 Span에 추가할 수 있는 멤버 함수를 구현하세요.

> 아이디어가 없다면, 컨테이너에 대해 공부해보세요. 일부 멤버 함수는 컨테이너에 요소 시퀀스를 추가하기 위해 이터레이터의 범위를 사용합니다.