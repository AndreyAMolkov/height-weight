#include "task4.h"
float convert(int feet, int inches)
{
	float sm = 0.0;
	if(inches>0)
	sm = (feet * 12.0)*2.54 + (inches*2.54);
	else
		sm = (feet * 12.0)*2.54;



	return sm;
}
/*
������ �4

�������� ���������, ������� ��������� ���� �� ������������ ��-
����� (����, �����) � ����������� (����������). ������ ���-
����� � ���� ���� ����� �����, ��������� � ���� �������������
����� � ��������� �� 1 �����. 1 ��� = 12 ������. 1 ���� = 2.54
��.
���������

��������� ������ �������� �� ���� �������:

float convert(int feet,int inches)
main() - ����������� �������
���� ������ � ��������� �������������� � ����: ����'�����, �������� 5'11.

*/