#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// �ִ� 3���� ������ �����Ѵ�.
	int s1_no, s2_no, s3_no;		// �й�
	int s1_kor, s2_kor, s3_kor;		// ���� ����
	int s1_math, s2_math, s3_math;	// ���� ����
	int s1_eng, s2_eng, s3_eng;		// ���� ����
	float s1_ave, s2_ave, s3_ave;	// ���� ���
	float total_ave = 0;				// ��ü ���
	int number_of_student = 0;		// ������� �Էµ� �л� ��

	// ����ؼ� �޴��� �����ݴϴ�.
	while (1) {
		// �޴� �����ֱ�
		cout << "\n----- �޴� -----\n";
		cout << "1. �л� ���� �߰�\n";
		cout << "2. ��ü ���� ����\n";
		cout << "Q. ���α׷� ����\n";
		cout << "------------------\n";
		cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ";

		// �۾� �Է� �ޱ�
		char select;
		cin >> select;

		// ���õ� ���� ���� ó���ϱ�
		switch (select) {
		case '1':
			// �л� ���� �߰�
			
			// 3����� ��� �Էµ����� ����
			if (number_of_student == 3) {
				cout << "\n �� �̻� �Է��� �� �����ϴ�.";
				break;
			}

			// ����, ����, ���� ������ �Է� �޴´�.
			int kor, eng, math;

			cout << "����, ����, ���� ������ �Է��ϼ��� : ";
			cin >> kor >> eng >> math;

			// ����� ����Ѵ�.
			float ave;
			ave = float(kor + eng + math) / 3;

			// �˸��� ������ �Էµ� ���� �ִ´�.
			if (number_of_student == 0) {
				s1_no = number_of_student + 1;
				s1_kor = kor;
				s1_eng = eng;
				s1_math = math;
				s1_ave = ave;

				// ��ü ���
				total_ave = s1_ave;
			}
			else if (number_of_student == 1) {
				s2_no = number_of_student + 1;
				s2_kor = kor;
				s2_eng = eng;
				s2_math = math;
				s2_ave = ave;

				// ��ü ���
				total_ave = (s1_ave + s2_ave) / 2;
			}
			else {
				s3_no = number_of_student + 1;
				s3_kor = kor;
				s3_eng = eng;
				s3_math = math;
				s3_ave = ave;

				// ��ü ���
				total_ave = (s1_ave + s2_ave + s3_ave) / 3;
			}

			// �Է� ���� �л� ���� ������Ų��.
			number_of_student++;

			// �۾��� ������ �˸���.
			cout << "\n�л� ������ �ùٸ��� �ԷµǾ����ϴ�.\n";

			break;
		case '2':
			// ��ü ���� ����

			// �Ǽ� ��� �ÿ� �Ҽ��� ���� �� �ڸ��� ǥ���Ѵ�.
			cout.precision(2);
			cout << fixed;

			// Ÿ��Ʋ �κ��� ����Ѵ�.
			cout << "\n ��ü ���� ���� \n";
			cout << "   �й� ���� ���� ����   ���\n";

			// �Էµ� �л� �� ��ŭ �ݺ��Ѵ�.
			for (int i = 0; i < number_of_student; i++) {
				// �˸��� �л��� ������ ����Ѵ�.
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

			// ��ü ����� ����Ѵ�.
			cout << "\n��ü ��� = " << total_ave << "\n";

			cout << "\n��ü ���� ���Ⱑ ���õǾ����ϴ�.\n";
			break;
		case 'Q':
		case 'q':
			// ����
			cout << "\n���α׷��� �����մϴ�.\n";
			return 0;
		default:
			// �� ���� ����
			cout << "\n�ùٸ� ���� �Է����ּ���.\n";
			break;
		}
	}

	return 0;
}