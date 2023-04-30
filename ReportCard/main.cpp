#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// 최대 3명의 성적을 보관한다.
	int s1_no, s2_no, s3_no;		// 학번
	int s1_kor, s2_kor, s3_kor;		// 국어 점수
	int s1_math, s2_math, s3_math;	// 수학 점수
	int s1_eng, s2_eng, s3_eng;		// 영어 점수
	float s1_ave, s2_ave, s3_ave;	// 개인 평균
	float total_ave = 0;				// 전체 평균
	int number_of_student = 0;		// 현재까지 입력된 학생 수

	// 계속해서 메뉴를 보여줍니다.
	while (1) {
		// 메뉴 보여주기
		cout << "\n----- 메뉴 -----\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "Q. 프로그램 종료\n";
		cout << "------------------\n";
		cout << "원하는 작업의 번호를 입력하세요 : ";

		// 작업 입력 받기
		char select;
		cin >> select;

		// 선택된 값에 따라서 처리하기
		switch (select) {
		case '1':
			// 학생 성적 추가
			
			// 3명까지 모두 입력됐으면 무시
			if (number_of_student == 3) {
				cout << "\n 더 이상 입력할 수 없습니다.";
				break;
			}

			// 국어, 영어, 수학 점수를 입력 받는다.
			int kor, eng, math;

			cout << "국어, 영어, 수학 점수를 입력하세요 : ";
			cin >> kor >> eng >> math;

			// 평균을 계산한다.
			float ave;
			ave = float(kor + eng + math) / 3;

			// 알맞은 변수에 입력된 값을 넣는다.
			if (number_of_student == 0) {
				s1_no = number_of_student + 1;
				s1_kor = kor;
				s1_eng = eng;
				s1_math = math;
				s1_ave = ave;

				// 전체 평균
				total_ave = s1_ave;
			}
			else if (number_of_student == 1) {
				s2_no = number_of_student + 1;
				s2_kor = kor;
				s2_eng = eng;
				s2_math = math;
				s2_ave = ave;

				// 전체 평균
				total_ave = (s1_ave + s2_ave) / 2;
			}
			else {
				s3_no = number_of_student + 1;
				s3_kor = kor;
				s3_eng = eng;
				s3_math = math;
				s3_ave = ave;

				// 전체 평균
				total_ave = (s1_ave + s2_ave + s3_ave) / 3;
			}

			// 입력 받은 학생 수를 증가시킨다.
			number_of_student++;

			// 작업의 성공을 알린다.
			cout << "\n학생 성적이 올바르게 입력되었습니다.\n";

			break;
		case '2':
			// 전체 성적 보기

			// 실수 출력 시에 소수점 이하 두 자리만 표시한다.
			cout.precision(2);
			cout << fixed;

			// 타이틀 부분을 출력한다.
			cout << "\n 전체 성적 보기 \n";
			cout << "   학번 국어 영어 수학   평균\n";

			// 입력된 학생 수 만큼 반복한다.
			for (int i = 0; i < number_of_student; i++) {
				// 알맞은 학생의 정보를 출력한다.
				if (i == 0) {
					cout << setw(7) << s1_no << setw(5) << s1_kor  << setw(5) << s1_eng << setw(5) << s1_math << setw(7) << s1_ave << "\n";
				}
				else if (i == 1) {
					cout << setw(7) << s2_no << setw(5) << s2_kor << setw(5) << s2_eng << setw(5) << s2_math << setw(7) << s2_ave << "\n";
				}
				else {
					cout << setw(7) << s3_no << setw(5) << s3_kor << setw(5) << s3_eng << setw(5) << s3_math << setw(7) << s3_ave << "\n";
				}
			}

			// 전체 평균을 출력한다.
			cout << "\n전체 평균 = " << total_ave << "\n";

			cout << "\n전체 성적 보기가 선택되었습니다.\n";
			break;
		case 'Q':
		case 'q':
			// 종료
			cout << "\n프로그램을 종료합니다.\n";
			return 0;
		default:
			// 그 외의 선택
			cout << "\n올바른 값을 입력해주세요.\n";
			break;
		}
	}

	return 0;
}