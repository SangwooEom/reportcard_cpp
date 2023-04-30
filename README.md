이 소스코드는 「뇌를 자극하는 C++ 프로그래밍」(저자 이현창, 한빛미디어)에서 나오는 성적표 프로그램을 구현한 것을 저장하였습니다.

# 기능 설명
먼저 성적표 프로그램은 아래와 같은 기능을 구현하려고 합니다.
1. 성적을 추가하는 기능
2. 성적을 출력하는 기능
    1. 성적을 터미널에 출력하는 기능
    2. 성적을 txt 파일에 출력하는 기능
    3. 성적을 HTML 파일에 출력하는 기능

# 데이터 설명
성적표 프로그램에 들어갈 데이터의 형식은 아래와 같습니다.

<table style="border: 1px solid #333333; border-collapse: collapse;">
    <tr style="border: 1px solid #333333;">
        <td style="border: 1px solid #333333; background-color: #333333; color: #ffffff">사용자로부터 입력 받은 정보</td>
        <td style="border: 1px solid #333333;">국어 점수(int), 영어 점수(int), 수학 점수(int)</td>
    </tr>
    <tr style="border: 1px solid #333333;">
        <td style="border: 1px solid #333333; background-color: #333333; color: #ffffff">프로그램에서 계산하거나 지정해주는 정보</td>
        <td style="border: 1px solid #333333;">학번(int), 개인 평균(float)</td>
    </tr>
</table>

# 성적표 프로그램 Ver 1.0
먼저 성적표 프로그램 Ver 1.0은 단순히 성적표 프로그램의 메뉴 구성만 간단히 구현한 프로그램입니다. 그렇지만 이를 통해서 어떤 방식으로 프로그램을 개발할지에 대한 가이드 역할을 할 수 있다고 생각합니다.

# 성적표 프로그램 Ver 1.1
성적표 프로그램에 성적을 추가하고 성적표를 출력하는 기능을 추가하였습니다.