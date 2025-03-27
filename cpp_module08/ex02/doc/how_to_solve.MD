# Exercise 02: Mutated abomination

 |Mutated abomination|
 |---|
 |Turn-in directory : ex02/|
 |Files to turn in : Makefile, main.cpp, MutantStack.{h, hpp}
and optional file: MutantStack.tpp|
 |Forbidden functions : None|

> Now, time to move on more serious things. Let’s develop something weird.  

>The std::stack container is very nice. Unfortunately, it is one of the only STL Containers that is NOT **iterable**. That’s too bad.  

> But why would we accept this? **Especially** if we can take the liberty of butchering the original stack to create missing features.  

> To repair this injustice, you have to make the std::stack container iterable.  

> Write a MutantStack class. It will be implemented in terms of a std::stack.  
>It will offer all its member functions, plus an additional feature: iterators.  

> Of course, you will write and turn in your own tests to ensure everything works as expected.  

> Find a test example below.

```cpp
int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
```

> If you run it a first time with your MutantStack, and a second time replacing the MutantStack with, for example, a std::list, the two outputs should be the same. Of course, when testing another container, update the code below with the corresponding member functions (push() can become push_back()).  



안녕하세요! 주어진 과제를 번역해 드리겠습니다.

# 과제 02: 돌연변이 괴물

 |돌연변이 괴물|
 |---|
 |제출 디렉토리 : ex02/|
 |제출할 파일 : Makefile, main.cpp, MutantStack.{h, hpp}
및 선택적 파일: MutantStack.tpp|
 |금지된 함수 : 없음|

> 이제, 더 진지한 것들로 넘어갈 시간입니다. 뭔가 이상한 것을 개발해 봅시다.

> std::stack 컨테이너는 매우 좋습니다. 불행히도, 이것은 **순회 가능하지 않은** 유일한 STL 컨테이너 중 하나입니다. 그것은 너무 아쉽습니다.

> 하지만 왜 우리가 이것을 받아들여야 할까요? **특히** 우리가 누락된 기능을 만들기 위해 원래 스택을 훼손할 자유를 가질 수 있다면요.

> 이 부당함을 바로잡기 위해, 여러분은 std::stack 컨테이너를 순회 가능하게 만들어야 합니다.

> MutantStack 클래스를 작성하세요. 이것은 std::stack을 기반으로 구현될 것입니다.
> 이것은 기존의 모든 멤버 함수와 추가 기능: 반복자(iterators)를 제공할 것입니다.

> 물론, 모든 것이 예상대로 작동하는지 확인하기 위해 자신만의 테스트를 작성하고 제출할 것입니다.

> 아래에서 테스트 예제를 찾아보세요.

```cpp
int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
```

> 만약 여러분이 처음에 MutantStack으로 실행하고, 두 번째에는 MutantStack을 예를 들어 std::list로 바꿔서 실행한다면, 두 출력은 동일해야 합니다. 물론, 다른 컨테이너를 테스트할 때는 아래 코드를 해당하는 멤버 함수(push()가 push_back()이 될 수 있음)로 업데이트하세요.