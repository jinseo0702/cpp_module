# 과제 02: Bitcoin Exchange

 |Bitcoin Exchange|
 |---|
 |제출 디렉토리 : ex00/|
 |제출할 파일 : Makefile, main.cpp, BitcoinExchange.{cpp, hpp}|
 |금지된 함수 : 없음|


>You have to create a program which outputs the value of a certain amount of bitcoin on a certain date.  
> 어떤 날짜에 비트코인의 값을 출력하는 프로그램을 만들어 보세요

> This program must use a database in csv format which will **represent** bitcoin price **over time**. This database is provided with this subject.  
> 프로그램은 csv file(비트코인의 시간별 가격을 제공합니다.) 포맷을 사용합니다. database는 서브젝트에서 제공합니다.  

> The program will take as input a second database, **storing** the different prices/dates to evaluate.  
> 프로그램이 두번째 database를 받으면, 평가한 다른 가격/시간 을 저장합니다.  

> Your program must respect these rules:  
> * The program name is btc.  
> * 프로그램의 이름 은 btc  
> * Your program must take a file as argument.    
> * 인자값으로 file을 받아야한다.  
> * Each line in this file must use the following format: "date | value".  
> * 파일 형식은 "date | value"  을따라야 한다.  
> * A valid date will always be in the following format: Year-Month-Day.    
> * 파일의 date 형식은 Year-Month-Day 이다.  
> * A valid value must be either a float or a positive integer, between 0 and 1000  
> * 파일의 값은 소수점 또는 양수 인데 0 ~ 1000 사이의 범위를 가진다.  

> You must use at least one container in your code to validate this exercise. You should handle possible errors with an appropriate error message.  
> 한가지의 컨테이너만 사용하고 에러가 발생한다면 에러메세지를 출력하세요.  

> Here is an example of an input.txt file:  

```
$> head input.txt
date | value
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
2011-01-09 | 1
2012-01-11 | -1
2001-42-42
2012-01-11 | 1
2012-01-11 | 2147483648
$>
```

> Your program will use the value in your input file.  
> 파일안의 값을 사용하세요

> Your program should display on the standard output the result of the value multiplied by the exchange rate according to the date indicated in your database.  
> 날짜에 맞는 데이터의 값을 곱해서 표준출력으로 출력하세요  

> If the date used in the input does not exist in your DB then you must use the closest date contained in your DB. Be careful to use the lower date and not the upper one.  
> 만약 사용 할 수 있는 날짜가 DB안에 없다면 가까운 DB안의 날짜를 사용해라. 앞선날짜를 사용하지 않게 주의 해라.  

```
$> ./btc
Error: could not open file.
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
$>
```

> Warning: The container(s) you use to validate this exercise will no longer be usable for the rest of this module.  
> 한번쓴 컨테이너는 사용다음에 사용못하니까 조심하세요


전체적으로 번역을 잘 하셨습니다만, 몇 가지 부분에서 좀 더 정확한 직독직해 번역이 필요해 보입니다. 각 부분을 검토해 드리겠습니다:

1. 첫 번째 문장:
   - 원문: "You have to create a program which outputs the value of a certain amount of bitcoin on a certain date."
   - 현재 번역: "어떤 날짜에 비트코인의 값을 출력하는 프로그램을 만들어 보세요"
   - 수정 제안: "특정 날짜의 특정 양의 비트코인 가치를 출력하는 프로그램을 만들어야 합니다."
   - 이유: "certain amount"(특정 양)이 번역에서 빠졌습니다.

2. 두 번째 문장:
   - 원문: "This program must use a database in csv format which will **represent** bitcoin price **over time**."
   - 현재 번역: "프로그램은 csv file(비트코인의 시간별 가격을 제공합니다.) 포맷을 사용합니다."
   - 수정 제안: "이 프로그램은 시간에 따른 비트코인 가격을 나타내는 csv 형식의 데이터베이스를 사용해야 합니다."
   - 이유: "represent"는 "나타내는"의 의미이고, "over time"은 "시간에 따른"으로 번역하는 것이 더 정확합니다.

3. 세 번째 문장:
   - 원문: "The program will take as input a second database, **storing** the different prices/dates to evaluate."
   - 현재 번역: "프로그램이 두번째 database를 받으면, 평가한 다른 가격/시간 을 저장합니다."
   - 수정 제안: "프로그램은 평가할 다양한 가격/날짜를 저장하는 두 번째 데이터베이스를 입력으로 받습니다."
   - 이유: "storing"은 두 번째 데이터베이스의 속성을 설명하는 것이고, "평가할" 내용을 저장하는 것입니다.

4. 컨테이너 관련:
   - 원문: "You must use at least one container in your code to validate this exercise."
   - 현재 번역: "한가지의 컨테이너만 사용하고 에러가 발생한다면 에러메세지를 출력하세요."
   - 수정 제안: "이 과제를 성공적으로 수행하기 위해서는 코드에서 최소 하나의 컨테이너를 사용해야 합니다."
   - 이유: "at least one"은 "최소 하나"이며, 컨테이너 사용과 에러 메시지 출력은 별개의 요구사항입니다.

5. 가까운 날짜 사용 관련:
   - 원문: "If the date used in the input does not exist in your DB then you must use the closest date contained in your DB. Be careful to use the lower date and not the upper one."
   - 현재 번역: "만약 사용 할 수 있는 날짜가 DB안에 없다면 가까운 DB안의 날짜를 사용해라. 앞선날짜를 사용하지 않게 주의 해라."
   - 수정 제안: "입력에 사용된 날짜가 DB에 존재하지 않는다면, DB에 포함된 가장 가까운 날짜를 사용해야 합니다. 더 나중 날짜가 아닌 더 이전 날짜를 사용하도록 주의하세요."
   - 이유: "lower date"는 "더 이전 날짜"를, "upper one"은 "더 나중 날짜"를 의미합니다.

6. 컨테이너 재사용 경고:
   - 원문: "Warning: The container(s) you use to validate this exercise will no longer be usable for the rest of this module."
   - 현재 번역: "한번쓴 컨테이너는 사용다음에 사용못하니까 조심하세요"
   - 수정 제안: "경고: 이 과제를 수행하기 위해 사용한 컨테이너(들)은 이 모듈의 나머지 부분에서 더 이상 사용할 수 없습니다."
   - 이유: 원문의 의미를 더 정확하게, 그리고 공식적인 문서 형식에 맞게 번역했습니다.

전체적으로, 번역은 기본적인 내용을 전달하고 있지만, 직독직해 요구사항을 충족하기 위해서는 위와 같은 수정이 필요합니다.