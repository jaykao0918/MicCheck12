#include<iostream>
#include<string>
using namespace std;

class stack
{
public:
	stack(int n)// �غc�� //��l��
	{
		hp = 2;
		mp = 2;
		sp = 2;
		str = 2;
		dex = 2;
		in = 2;
		chkbodyarmour = 0;
		chkhead = 0;
		chktrousers = 0;
		chkweapons = 0;
		chkshoes = 0;
		for (int i = 0; i<15; i++)
		{
			aaa[i] = 0;
		}
	}
	void choice(int m)//�رڿ��
	{
		if (m == 1)
		{
			hp++;
		}
		if (m == 2)
		{
			mp++;
		}
		if (m == 3)
		{
			sp++;
		}
	}
	void item(int b, int ty)//�˳ƲM��
	{
		if (b == 1)
		{
			int zx;
			cout << endl;
			cout << "1:�����ԥ�\n2:�C�s�ԥ�\n3:�ȪZ�ԥ�\n\n";
			cout << " �A����ܬO: ";
			cin >> zx;
			if (chkbodyarmour == 0)
			{
				shirt(zx);
				cout << " �w�˳�\n";
			}
			if (chkbodyarmour != 0)
			{
				cout << "~���˳���w���˳�~\n";
			}
			chkbodyarmour++;
		}
		if (b == 2)
		{
			int as;
			cout << endl;
			cout << "1:���C�̿�\n2:�t���̿�\n3:�u�@�̿�\n\n";
			cout << " �A����ܬO: ";
			cin >> as;
			if (chktrousers == 0)
			{
				pant(as);
				cout << " �w�˳�\n";
			}
			if (chktrousers != 0)
			{
				cout << "~���˳���w���˳�~\n";
			}
			chktrousers++;
		}
		if (b == 3)
		{
			int qw;
			cout << endl;
			cout << "1:�i�ɹy�U\n2:�«Ҵ���\n3:�z���Y�y\n\n";
			cout << " �A����ܬO: ";
			cin >> qw;
			if (chkhead == 0)
			{
				head(qw);
				cout << " �w�˳�\n";
			}
			if (chkhead != 0)
			{
				cout << "~���˳���w���˳�~\n";
			}
			chkhead++;
		}
		if (b == 4)
		{
			int vb;
			cout << endl;
			cout << "1:���ֵu�u\n2:�����K�c\n3:���a���u\n\n";
			cout << " �A����ܬO: ";
			cin >> vb;
			if (chkshoes == 0)
			{
				shoe(vb);
				cout << " �w�˳�\n";
			}
			if (chkshoes != 0)
			{
				cout << "~���˳���w���˳�~\n";
			}
			chkshoes++;
		}
		if (b == 5)
		{
			if (chkweapons == 0)
			{
				weap(ty);
				cout << " �w�˳�\n";
			}
			if (chkweapons != 0)
			{
				cout << "~���˳���w���˳�~\n";
			}
			chkweapons++;
		}
	}
	void shoe(int sho)//�c�l���
	{
		if (sho == 1)
		{
			hp++;
			dex++;
			cout << "���ֵu�u";
			aaa[12]++;
		}
		if (sho == 2)
		{
			mp++;
			dex++;
			cout << "�����K�c";
			aaa[13]++;
		}
		if (sho == 3)
		{
			sp++;
			dex++;
			cout << "���a���u";
			aaa[14]++;
		}
	}
	void weap(int qq)//�Z�����
	{
		if (qq == 1)
		{
			str++;
			aaa[0]++;
			cout << "�L�ɤ��b";
		}
		if (qq == 2)
		{
			str++;
			aaa[1]++;
			cout << "�ﶳ���}";
		}
		if (qq == 3)
		{
			str++;
			aaa[2]++;
			cout << "�˺�����";
		}
	}
	void shirt(int xc)//��A���
	{
		if (xc == 1)//+hp+str
		{
			hp++;
			str++;
			cout << "�����ԥ�";
			aaa[3]++;
		}
		if (xc == 2)//+mp+str
		{
			mp++;
			str++;
			cout << "�C�s�ԥ�";
			aaa[4]++;
		}
		if (xc == 3)//+sp+str
		{
			sp++;
			str++;
			cout << "�ȪZ�ԥ�";
			aaa[5]++;
		}
	}
	void head(int we)//�Y�����
	{
		if (we == 1)//+hp+int
		{
			hp++;
			in++;
			cout << "�i�ɹy�U";
			aaa[6]++;
		}
		if (we == 2)//+mp+int
		{
			mp++;
			in++;
			cout << "�«Ҵ���";
			aaa[7]++;
		}
		if (we == 3)//+sp+int
		{
			sp++;
			in++;
			cout << "�z���Y�y";
			aaa[8]++;
		}
	}
	void pant(int sd)//�Ǥl���
	{
		if (sd == 1)//+hp+dex
		{
			hp++;
			dex++;
			cout << "���C�̿�";
			aaa[9]++;
		}
		if (sd == 2)//+mp+dex
		{
			mp++;
			dex++;
			cout << "�t���̿�";
			aaa[10]++;
		}
		if (sd == 3)//+sp+dex
		{
			sp++;
			dex++;
			cout << "�u�@�̿�";
			aaa[11]++;
		}
	}
	void chac()//��ܯ�O
	{
		cout << "hp:" << hp << " mp:" << mp << " sp:" << sp << " str:" << str << " dex:" << dex << " int:" << in << "\n\n";
		cout << "�ثe�˳�:\n";
		if (aaa[0] == 1)
			cout << "�L�ɤ��b\n";
		if (aaa[1] == 1)
			cout << "�ﶳ���}\n";
		if (aaa[2] == 1)
			cout << "��\n";
		if (aaa[3] == 1)
			cout << "�����ԥ�\n";
		if (aaa[4] == 1)
			cout << "�C�s�ԥ�\n";
		if (aaa[5] == 1)
			cout << "�ȪZ�ԥ�\n";
		if (aaa[6] == 1)
			cout << "�i�ɹy�U\n";
		if (aaa[7] == 1)
			cout << "�«Ҵ���\n";
		if (aaa[8] == 1)
			cout << "�z���Y�y\n";
		if (aaa[9] == 1)
			cout << "���C�̿�\n";
		if (aaa[10] == 1)
			cout << "�t���̿�\n";
		if (aaa[11] == 1)
			cout << "�u�@�̿�\n";
		if (aaa[12] == 1)
			cout << "���ֵu�u\n";
		if (aaa[13] == 1)
			cout << "�����K�c\n";
		if (aaa[14] == 1)
			cout << "���a���u\n";
		cout << "\n";
	}
	void dele(int d)//reset
	{
		hp = 2;
		mp = 2;
		sp = 2;
		str = 2;
		dex = 2;
		in = 2;
		chkbodyarmour = 0;
		chktrousers = 0;
		chkhead = 0;
		chkweapons = 0;
		chkshoes = 0;
		if (d == 1)
		{
			hp++;
		}
		if (d == 2)
		{
			mp++;
		}
		if (d == 3)
		{
			sp++;
		}
		for (int i = 0; i<15; i++)
		{
			aaa[i] = 0;
		}
	}

private:
	int hp;
	int mp;
	int sp;
	int str;
	int dex;
	int in;
	int chkbodyarmour;//���L����
	int chktrousers;//���L�Ǥl
	int chkhead;//���L�Y
	int chkshoes;//���L�c�l
	int chkweapons;//���L�Z��
	int aaa[15];//��ܸ˳�
};
int main()
{
	int z; //�ر�
	int x; //�˳�
	int c; //�ﶵ
	string name;//�W�r
	cout << "��J�W��: ";
	cin >> name;
	cout << "\n";
	cout << "��ܺر�\n1:�C�L\n2:���F\n3:�G�H\n\n �п�J�ﶵ:";
	cin >> z;
	cout << endl;
	stack s(z);
	s.choice(z);
	cout << "---------------------------------\n";
	cout << "���: \n\n0:�h�X\n1:�˳��� \n2:�������˳� \n3:�M�Ÿ˳�\n\n �п�J�ﶵ:";
	cin >> c;
	while (c)
	{
		if (c == 1)
		{
			cout << "---------------------------------\n";
			cout << "�˳���:\n\n0:�h�^���\n1:��A��\n2:�Y����\n3:�Ǥl��\n4:�c�l��\n5:�رڪZ��\n\n ��ܭn�諸�˳�:";
			cin >> x;
			while (x)
			{
				s.item(x, z);
				cout << "---------------------------------\n";
				cout << "�˳���:\n\n0:�h�^���\n1:��A��\n2:�Y����\n3:�Ǥl��\n4:�c�l��\n5:�رڪZ��\n\n ��ܭn�諸�˳�:";
				cin >> x;
			}
			cout << "---------------------------------\n";
			cout << "���: \n\n0:�h�X\n1:�˳��� \n2:�������˳� \n3:�M�Ÿ˳�\n\n �п�J�ﶵ:";
		}
		if (c == 2)
		{
			cout << "����W��:" << name << "\n";
			s.chac();
			cout << endl;
			cout << "---------------------------------\n";
			cout << "���: \n\n0:�h�X\n1:�˳��� \n2:�������˳� \n3:�M�Ÿ˳�\n\n �п�J�ﶵ:";
		}
		if (c == 3)
		{
			s.dele(z);
			cout << "---------------------------------\n";
			cout << "���: \n\n0:�h�X\n1:�˳��� \n2:�������˳� \n3:�M�Ÿ˳�\n\n �п�J�ﶵ:";
		}
		cin >> c;
	}
	system("pause");
}