## Solution cpp08 ex02

> ### 궁금한 점
> * 왜 Stack은 iterator를 사용 하지 못하는가?  
> * 커스텀한 Stack의 iterator를 사용을 어떻게 추구하는가? 오버라이딩?  
> * 마지막에 MutantStack을 list로 바꾸어도 실행이 되도록 만들라고 했는데 방법은 무엇인가?  


</br>

> 1. Stack은 컨테이터 어뎁터이다. 
> <details>
> <summary>접기/펼치기</summary>
> 
> ## Container adaptors
> stack, queue and priority_queue are implemented as container adaptors. Container adaptors are not full container classes, but classes that provide a specific interface relying on an object of one of the container classes (such as deque or list) to handle the elements. The underlying container is encapsulated in such a way that its elements are accessed by the members of the container adaptor independently of the underlying container class used.  
> 스택, 큐, 우선순위_큐는 컨테이너 어댑터로 구현됩니다. 컨테이너 어댑터는 전체 컨테이너 클래스가 아니라 컨테이너 클래스 중 하나(예: deque 또는 list)의 객체에 의존하여 요소를 처리하는 특정 인터페이스를 제공하는 클래스입니다. 기본 컨테이너는 사용되는 기본 컨테이너 클래스와 관계없이 컨테이너 어댑터의 멤버가 해당 요소에 액세스하는 방식으로 캡슐화됩니다.  
> </details>
> 즉 다른 컨테이너에 의존해서 사용이 되고 LIFO(Last in first out)이라는 Stack의 컨셉에 맞게 보호 되고 있어서 선회를 하지못하게 설계가 되어 있기 때문에 Iterator(반복자를 사용하지 못한다.) ~~극한의 컨셉 충!!~~  

</br>

> 2. Stack의 iterator를 만들고 싶다면 오버로딩을 통해구현 하면 될것 같다.
> 3. 템플릿 을 사용 하면 될것 같다.  


