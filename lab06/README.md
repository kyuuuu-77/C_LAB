# 📝 C프로그래밍 실습 자료
<hr/>

## 6️⃣ 6주차 [10월 7일 ~ 10월 13일]
<hr/>

## 📖 1번 문제
- ### 두 개의 정수 x, y를 입력 받아서 아래의 모든 조건을 만족하면 True를 아니면 False를 출력하세요. [`정답`](./practice_1.c)
> ## 조건1 : x는 짝수이고 y는 홀수이다.
> ## 조건2 : x와 y의 합이 100보다 크다.
> ## 조건3 : x와 y중 하나만 50보다 크다.
>> ### 단 조건문 (if)는 사용하지 말 것!

## 📖 2번 문제
- ### char a = -126 와 unsigned char b = 130의 이진수 값은 [10000010] 으로 같습니다.<br>두 변수를 오른쪽으로 1비트 시프트 연산하고 그 결과 값을 이진수 및 십진수로 출력하세요 [`정답`](./practice_2.c)
> ## ![img.png](img.png)
>> ### 반복문을 사용한 경우 [`정답`](./practice_2_1.c)

## 📖 3번 문제
- ### 두 개의 정수 a와 b를 입력 받고 아래의 과정을 수행하여 결과를 출력하세요. [`정답`](./practice_3.c)
> ## 과정1 : a와 b의 비트를 반전시켜(~) 변수에 저장합니다.
> ## 과정2 : 2의 보수로 저장된 a와 b로 비트 연산 XOR (^)를 수행하고 변수에 저장합니다.
> ## 과정3 : 결과의 비트에서 1의 개수를 세어 출력합니다.
>> ### 조건1: 시프트 연산자(비트)를 사용해야 합니다.

## 📖 4번 문제
- ### 출발 시간과 도착 시간을 입력 받아서 소요시간을 계산하는 프로그램을 작성하세요. [`정답`](./practice_4.c)
> ## 도착 시간이 내일로 넘어가는 경우를 고려하고, 소요시간이 1시간 미만인 경우 분만 표시하게 코드를 작성하세요!
>> ### 조건1 : if문을 사용하지 말 것
>> ### 조건2 : 소요시간을 시간과 분으로 표시할 것
>> ### 조건3 : 소요시간이 1시간 미만이면 분만 표시할 것