#include<iostream>
#include<string>
using namespace std;

class stack
{
public:
	stack(int n)// 建構式 //初始值
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
	void choice(int m)//種族選擇
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
	void item(int b, int ty)//裝備清單
	{
		if (b == 1)
		{
			int zx;
			cout << endl;
			cout << "1:朱雀戰甲\n2:青龍戰甲\n3:玄武戰甲\n\n";
			cout << " 你的選擇是: ";
			cin >> zx;
			if (chkbodyarmour == 0)
			{
				shirt(zx);
				cout << " 已裝備\n";
			}
			if (chkbodyarmour != 0)
			{
				cout << "~此裝備欄已有裝備~\n";
			}
			chkbodyarmour++;
		}
		if (b == 2)
		{
			int as;
			cout << endl;
			cout << "1:漫遊者褲\n2:暗殺者褲\n3:守護者褲\n\n";
			cout << " 你的選擇是: ";
			cin >> as;
			if (chktrousers == 0)
			{
				pant(as);
				cout << " 已裝備\n";
			}
			if (chktrousers != 0)
			{
				cout << "~此裝備欄已有裝備~\n";
			}
			chktrousers++;
		}
		if (b == 3)
		{
			int qw;
			cout << endl;
			cout << "1:波賽頓帽\n2:黑帝斯盔\n3:宙斯頭巾\n\n";
			cout << " 你的選擇是: ";
			cin >> qw;
			if (chkhead == 0)
			{
				head(qw);
				cout << " 已裝備\n";
			}
			if (chkhead != 0)
			{
				cout << "~此裝備欄已有裝備~\n";
			}
			chkhead++;
		}
		if (b == 4)
		{
			int vb;
			cout << endl;
			cout << "1:鹿皮短靴\n2:絲綢便鞋\n3:環帶長靴\n\n";
			cout << " 你的選擇是: ";
			cin >> vb;
			if (chkshoes == 0)
			{
				shoe(vb);
				cout << " 已裝備\n";
			}
			if (chkshoes != 0)
			{
				cout << "~此裝備欄已有裝備~\n";
			}
			chkshoes++;
		}
		if (b == 5)
		{
			if (chkweapons == 0)
			{
				weap(ty);
				cout << " 已裝備\n";
			}
			if (chkweapons != 0)
			{
				cout << "~此裝備欄已有裝備~\n";
			}
			chkweapons++;
		}
	}
	void shoe(int sho)//鞋子顯示
	{
		if (sho == 1)
		{
			hp++;
			dex++;
			cout << "鹿皮短靴";
			aaa[12]++;
		}
		if (sho == 2)
		{
			mp++;
			dex++;
			cout << "絲綢便鞋";
			aaa[13]++;
		}
		if (sho == 3)
		{
			sp++;
			dex++;
			cout << "環帶長靴";
			aaa[14]++;
		}
	}
	void weap(int qq)//武器顯示
	{
		if (qq == 1)
		{
			str++;
			aaa[0]++;
			cout << "無盡之刃";
		}
		if (qq == 2)
		{
			str++;
			aaa[1]++;
			cout << "穿雲神弓";
		}
		if (qq == 3)
		{
			str++;
			aaa[2]++;
			cout << "瓦爾巨斧";
		}
	}
	void shirt(int xc)//衣服顯示
	{
		if (xc == 1)//+hp+str
		{
			hp++;
			str++;
			cout << "朱雀戰甲";
			aaa[3]++;
		}
		if (xc == 2)//+mp+str
		{
			mp++;
			str++;
			cout << "青龍戰甲";
			aaa[4]++;
		}
		if (xc == 3)//+sp+str
		{
			sp++;
			str++;
			cout << "玄武戰甲";
			aaa[5]++;
		}
	}
	void head(int we)//頭盔顯示
	{
		if (we == 1)//+hp+int
		{
			hp++;
			in++;
			cout << "波賽頓帽";
			aaa[6]++;
		}
		if (we == 2)//+mp+int
		{
			mp++;
			in++;
			cout << "黑帝斯盔";
			aaa[7]++;
		}
		if (we == 3)//+sp+int
		{
			sp++;
			in++;
			cout << "宙斯頭巾";
			aaa[8]++;
		}
	}
	void pant(int sd)//褲子顯示
	{
		if (sd == 1)//+hp+dex
		{
			hp++;
			dex++;
			cout << "漫遊者褲";
			aaa[9]++;
		}
		if (sd == 2)//+mp+dex
		{
			mp++;
			dex++;
			cout << "暗殺者褲";
			aaa[10]++;
		}
		if (sd == 3)//+sp+dex
		{
			sp++;
			dex++;
			cout << "守護者褲";
			aaa[11]++;
		}
	}
	void chac()//顯示能力
	{
		cout << "hp:" << hp << " mp:" << mp << " sp:" << sp << " str:" << str << " dex:" << dex << " int:" << in << "\n\n";
		cout << "目前裝備:\n";
		if (aaa[0] == 1)
			cout << "無盡之刃\n";
		if (aaa[1] == 1)
			cout << "穿雲神弓\n";
		if (aaa[2] == 1)
			cout << "斧\n";
		if (aaa[3] == 1)
			cout << "朱雀戰甲\n";
		if (aaa[4] == 1)
			cout << "青龍戰甲\n";
		if (aaa[5] == 1)
			cout << "玄武戰甲\n";
		if (aaa[6] == 1)
			cout << "波賽頓帽\n";
		if (aaa[7] == 1)
			cout << "黑帝斯盔\n";
		if (aaa[8] == 1)
			cout << "宙斯頭巾\n";
		if (aaa[9] == 1)
			cout << "漫遊者褲\n";
		if (aaa[10] == 1)
			cout << "暗殺者褲\n";
		if (aaa[11] == 1)
			cout << "守護者褲\n";
		if (aaa[12] == 1)
			cout << "鹿皮短靴\n";
		if (aaa[13] == 1)
			cout << "絲綢便鞋\n";
		if (aaa[14] == 1)
			cout << "環帶長靴\n";
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
	int chkbodyarmour;//有無身體
	int chktrousers;//有無褲子
	int chkhead;//有無頭
	int chkshoes;//有無鞋子
	int chkweapons;//有無武器
	int aaa[15];//顯示裝備
};
int main()
{
	int z; //種族
	int x; //裝備
	int c; //選項
	string name;//名字
	cout << "輸入名稱: ";
	cin >> name;
	cout << "\n";
	cout << "選擇種族\n1:遊俠\n2:精靈\n3:矮人\n\n 請輸入選項:";
	cin >> z;
	cout << endl;
	stack s(z);
	s.choice(z);
	cout << "---------------------------------\n";
	cout << "選單: \n\n0:退出\n1:裝備欄 \n2:角色素質裝備 \n3:清空裝備\n\n 請輸入選項:";
	cin >> c;
	while (c)
	{
		if (c == 1)
		{
			cout << "---------------------------------\n";
			cout << "裝備欄:\n\n0:退回選單\n1:衣服類\n2:頭盔類\n3:褲子類\n4:鞋子類\n5:種族武器\n\n 選擇要穿的裝備:";
			cin >> x;
			while (x)
			{
				s.item(x, z);
				cout << "---------------------------------\n";
				cout << "裝備欄:\n\n0:退回選單\n1:衣服類\n2:頭盔類\n3:褲子類\n4:鞋子類\n5:種族武器\n\n 選擇要穿的裝備:";
				cin >> x;
			}
			cout << "---------------------------------\n";
			cout << "選單: \n\n0:退出\n1:裝備欄 \n2:角色素質裝備 \n3:清空裝備\n\n 請輸入選項:";
		}
		if (c == 2)
		{
			cout << "角色名稱:" << name << "\n";
			s.chac();
			cout << endl;
			cout << "---------------------------------\n";
			cout << "選單: \n\n0:退出\n1:裝備欄 \n2:角色素質裝備 \n3:清空裝備\n\n 請輸入選項:";
		}
		if (c == 3)
		{
			s.dele(z);
			cout << "---------------------------------\n";
			cout << "選單: \n\n0:退出\n1:裝備欄 \n2:角色素質裝備 \n3:清空裝備\n\n 請輸入選項:";
		}
		cin >> c;
	}
	system("pause");
}