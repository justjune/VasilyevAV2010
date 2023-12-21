#pragma once
//����� ��� ���������� ����������� �����:
class MComp {
public:
	double Re;
	double Im;
};
//����������� ������� ��� �������� ���� ��������:
MComp operator+(MComp x, MComp y);
//����������� ������� ��� ��������� ���� ��������:
MComp operator-(MComp x, MComp y);
//����������� ������� ��� �������� ����� � �������:
MComp operator+(double x, MComp y);
//����������� ������� ��� �������� ������� � �����:
MComp operator+(MComp y, double x);
//����������� ������� ��� ��������� �� ����� �������:
MComp operator-(double x, MComp y);
//����������� ������� ��� ��������� �� ������� �����:
MComp operator-(MComp y, double x); 
//����������� ������� ��� ���������� ����� ���������� :
MComp operator++(MComp &x);
//����������� ������� ��� ����������� ����� ����������:
MComp operator++(MComp &x, int unused);
//����������� ������� ��� ���������� ����� ����������:
MComp operator--(MComp &x);
//����������� ������� ��� ����������� ����� ����������:
MComp operator--(MComp &x, int unused);
//����������� ������� ��� ���������� ����������-�����������:
MComp operator!(MComp &x);