#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define B 3.1415926
class CircleNum {
private:
	double banJing;
public:
	CircleNum(double inputBanjing) {
		banJing = inputBanjing;
	};
	double  CircleMianji() {//����һ��������������������
		double realMianji = 0.0;
		realMianji = (banJing + 3) * (banJing + 3) * B - banJing * banJing * B;
		return  20.0 * realMianji;
	}
	double zhalanPrice() {
		double realZhouchang = 0.0;
		realZhouchang = (2 * B * (banJing + 3) * 35.0);
		return realZhouchang;
	}


};
class student
{
public:
	int Teamscore;
	void setPermitnum(string permitnum)
	{
		Permitnum = permitnum;
	}
	string getPermitnum()
	{
		return Permitnum;
	}

	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}

	void setScore(int score)
	{
		Score = score;
	}
	int getScore()
	{
		return Score;
	}

private:
	string Permitnum;
	string Name;
	int Score;

};
int main() {
	cout << "���������İ뾶" << endl;
	double input = 0.0;
	cin >> input;
	CircleNum c1(input);
	cout << "�����۸�Ϊ:" << c1.CircleMianji() << endl;
	cout << "դ���ļ۸�Ϊ:" << c1.zhalanPrice() << endl;


	student stu[5];
	string name;
	string permitnum;
	int score;
	int teamscore = 90;
	for (int i = 0; i < 3; i++)
	{
		cin >> permitnum >> name >> score;
		stu[i].setPermitnum(permitnum);
		stu[i].setName(name);
		stu[i].setScore(score);
	}
	for (int i = 0; i < 3; i++)
		cout << "׼��֤�ţ�" << stu[i].getPermitnum() << "  ������" << stu[i].getName() << "  �ɼ���" << stu[i].getScore() << "  �Ŷӳɼ���" << teamscore << endl;
}