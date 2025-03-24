# Exercise 02: Array

 |Start with a few|
 |---|
 |Turn-in directory : ex00/|
 |Files to turn in : Makefile, main.cpp, Array.{h, hpp} and optional file: Array.tpp|
 |Forbidden functions : None|

>Develop a class template Array that contains elements of type T and that implements the following behavior and functions:  

> •Construction with no parameter: Creates an empty array.  

> •Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.  
>Tip: Try to compile int * a = new int(); then display *a.  

> •Construction by copy and assignment operator. In both cases, modifying either the original array or its copy after copying musn’t affect the other array.  

> •You MUST use the operator new[] to allocate memory. Preventive allocation (al- locating memory in advance) is forbidden. Your program must never access non- allocated memory.  

> Elements can be accessed through the subscript operator: [ ].  

> •When accessing an element with the [ ] operator, if its index is out of bounds, an std::exception is thrown.  

> •A member function size() that returns the number of elements in the array. This member function takes no parameter and musn’t modify the current instance.  

> As usual, ensure everything works as expected and turn in a main.cpp file that con- tains your tests  


# Exercise 02: Array

 |시작은 몇 가지|
 |---|
 |제출 디렉토리 : ex00/|
 |제출할 파일 : Makefile, main.cpp, Array.{h, hpp} 및 선택적 파일: Array.tpp|
 |금지된 함수 : 없음|

> T 타입의 요소를 포함하는 Array 클래스 템플릿을 개발하고, 다음 동작과 기능을 구현하세요:

> • 매개변수 없는 생성자: 빈 배열을 생성합니다.

> • unsigned int n을 매개변수로 받는 생성자: 기본값으로 초기화된 n개의 요소를 가진 배열을 생성합니다.  
>팁: int * a = new int(); 그런 다음 *a를 출력해보세요.

> • 복사 생성자와 대입 연산자. 이 경우, 원본 배열이나 복사본 배열을 수정한 후에는 다른 배열에 영향을 미치지 않도록 해야 합니다.

> • 메모리 할당 시 반드시 operator new[]를 사용하여 메모리를 할당해야 합니다. 예방적 할당(미리 메모리를 할당하는 것)은 금지됩니다. 프로그램은 할당되지 않은 메모리에 접근해서는 안 됩니다.

> 배열의 요소는 [ ] 연산자를 통해 접근할 수 있습니다.

> • [ ] 연산자로 요소에 접근할 때, 인덱스가 범위를 벗어나면 std::exception이 발생해야 합니다.

> • 현재 인스턴스를 수정하지 않고 배열의 요소 수를 반환하는 size()라는 멤버 함수를 구현합니다.

> 일반적인 방식대로 모든 것이 예상대로 작동하도록 확인하고, 테스트가 포함된 main.cpp 파일을 제출하세요.