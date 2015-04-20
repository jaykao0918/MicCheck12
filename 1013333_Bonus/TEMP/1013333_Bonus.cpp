#include<iostream>
#include<string>
using namespace std;

class stack
{
public:
	stack(int n)//Initializing everything
	{
		hp = 2;
		mp = 2;
		agility = 2;
		damge = 2;
		shield = 2;
		in = 2;
		chkbodyarmour = 0;
		chkhelmet = 0;
		chktrousers = 0;
		chkweapons = 0;
		chkshoes = 0;
		listings[5] = { 0 };
	}
	void choice(int m)//Choosing a race to start with
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
			agility++;
		}
	}
	void item(int b, int ty)//Choosing items like a boss
	{
		if (b == 1)
		{
			int amr;
			cout << endl;
			cout << "4. Golden Chestguard of Hallowed Vengeance(HP+3, Shield+2, Agility-2)"<< endl 
				 << "5. Burnished Demon Battleplate(Agility-1, Shield+1, HP+2)" << endl  
				 << "6. Peacekeeper's Vest of the Scourge(Agility+1, Shield+1, HP+1)"<< endl;
			cout << "Please enter your choice of armor: " << endl;
			cin >> amr;
			if (amr<4 || amr>6)
			{
				cout << "Invalid Selection!" << endl;
			}
			else if (chkbodyarmour == 0)
			{
				store(amr);
				cout << " Armor equipped." << endl ;
				chkbodyarmour++;
			}
			else if (chkbodyarmour != 0)
			{
				listings[1] = 0;
				store(amr);
				cout << "Changing Armor..." << endl ;
			}
			
		}
		if (b == 2)
		{
			int trs;
			cout << endl;
			cout << "10. Leggings of Hellish Nights(Agility-2, Shield+2)" << endl
				 << "11. Leather Robes of Silent Souls(MP+2, Shield+1)" << endl
				 << "12. Enchanted Skirt of Dawn(Agility+2, Shield+2, Penetration+2)" << endl;
			cout << "Please enter your choice of trousers: " << endl;
			cin >> trs;
			if (trs<10 || trs>12)
			{
				cout << "Invalid Selection!" << endl;
			}
			else if (chktrousers == 0)
			{
				store(trs);
				cout << " Trousers equipped" << endl ;
				chktrousers++;
			}
			else if (chktrousers != 0)
			{
				listings[3] = 0;
				store(trs);
				cout << "Changing Trousers..." << endl ; //No peeking, lol
			}
			
		}
		if (b == 3)
		{
			int hmt;
			cout << endl;
			cout << "7. Defender of Lost Hope(HP+2, Penetration+1)" << endl
				 << "8. Wits of Stealth(Shield+1, Penetration+2)" << endl
				 << "9. Dragon Bronzed Visage(Agility+2, HP+2)"<< endl;
			cout << "Please enter your choice of helmet: " << endl;
			cin >> hmt;
			if (hmt<7 || hmt>9)
			{
				cout << "Invalid Selection!" << endl;
			}
			else if (chkhelmet == 0)
			{
				store(hmt);
				cout << " Helmet equipped." << endl ;
				chkhelmet++;
			}
			else if (chkhelmet != 0)
			{
				listings[2] = 0;
				store(hmt);
				cout << "Changing helmet..." << endl ;
			}
			
		}
		if (b == 4)
		{
			int shoez;
			cout << endl;
			cout << "13. Berserker's Greaves(Agility+2, Penetration+2)" << endl  
				 << "14. Boots of Swiftness(Agility+5)" << endl
				 << "15. Sorcerer's Shoes(Agility+2, MP+3, Penetration+1)" << endl;
			cout << "Please enter your choice of shoes: " << endl;
			cin >> shoez;
			if (shoez<13 || shoez>15)
			{
				cout << "Invalid Selection!" << endl;
			}
			else if (chkshoes == 0)
			{
				store(shoez);
				cout << " Shoes equipped." << endl ;
				chkshoes++;
			}
			else if (chkshoes != 0)
			{
				listings[4] = 0;
				store(shoez);
				cout << "Changing shoes..." << endl ;
			}
			
		}
		if (b == 5)
		{
			int wpns;
			cout << endl;
			cout << "Swords: " << endl
				<< "1. Excalibur(Damage+3)" << endl
				<< "2. Zar'roc(Damage+4, HP-1)" << endl
				<< "3. Brisingr(Damage+2, Agility+1)" << endl;
			cout << "Bows: " << endl
				<< "16. Thunderguard Redwood Recurve(Damage+2, Penetration+1)" << endl
				<< "17. Frontier Longbow(Damage+3, Agility+1)" << endl
				<< "18. Firestorm, Bow of Iron(Damage+4, Agility-1)" << endl;
			cout << "Please enter your choice of weapon: " << endl;
			cin >> wpns;
	
			if (chkweapons == 0)
			{
				store(wpns);
				cout << " Weapon equipped." << endl ;
				chkweapons++;
			}
			else if (chkweapons != 0)
			{
				listings[0] = 0;
				store(wpns);
				cout << "Changing weapon..." << endl ;
			}
			
		}
	}
	void store(int itm)
	{
		if (itm == 1)
		{
			damge+=3;
			listings[0]=1;
			cout << "Excalibur(Damage+3)";//Damage+3
		}
		if (itm == 2)//Sword that eats you alive
		{
			damge+=4;
			hp--;
			listings[0]=2;
			cout << "Zar'roc(Damage+4, HP-1)";//Damage+4, HP-1
		}
		if (itm == 3)
		{
			damge+=2;
			agility++;
			listings[0]=3;
			cout << "Brisingr(Damage+2, Agility+1)";//Damage+2, Agility+1)";
		}

		if (itm == 4)
		{
			hp+=3;
			shield += 2;
			agility-=2;
			cout << "Golden Chestguard of Hallowed Vengeance(HP+3, Shield+2, Agility-2)"; //Heavt Chest(HP+3, Shield+2, Agility-2)";
			listings[1]=4;
		}
		if (itm == 5)
		{
			agility--;
			shield++;
			hp += 2;
			cout << "Burnished Demon Battleplate(Agility-1, Shield+1, HP+2)"; //Heavy Chest (Agility-1, Shield+1, HP+2)
			listings[1]=5;
		}
		if (itm == 6)
		{
			agility++;
			shield++;
			hp++;
			cout << "Peacekeeper's Vest of the Scourge(Agility+1, Shield+1, HP+1)"; //Light Chest(Agility+1, Shield+1, HP+1)
			listings[1]=6;
		}

		if (itm == 7)
		{
			hp+=2;
			in++;
			cout << "Defender of Lost Hope(HP+2, Penetration+1)"; //Heavy(HP+2, Penetration+1)
			listings[2]=7;
		}
		if (itm == 8)
		{
			shield++;
			in+=2;
			cout << "Wits of Stealth(Shield+1, Penetration+2)"; //Light(Shield+1, Penetration+2)
			listings[2]=8;
		}
		if (itm == 9)
		{
			agility+=2;
			hp+=2;
			cout << "Dragon Bronzed Visage(Agility+2, HP+2)"; //Dope Shit(Agility+2, HP+2)
			listings[2]=9;
		}

		if (itm == 10)
		{
			agility -= 2;
			shield+=2;
			cout << "Leggings of Hellish Nights(Agility-2, Shield+2)"; //Heavy Trousers(Agility-2, Shield+2)
			listings[3]=10;
		}
		if (itm == 11)
		{
			mp+=2;
			shield++;
			cout << "Leather Robes of Silent Souls(MP+2, Shield+1)"; //Light Trousers(MP+2, Shield+1)
			listings[3]=11;
		}
		if (itm == 12)
		{
			agility+=2;
			shield+=2;
			in += 2;
			cout << "Enchanted Skirt of Dawn(Agility+2, Shield+2, Penetration+2)"; //Short Skirtssssssssssssssss(Agility+2, Shield+2, Penetration+2)
			listings[3]=12;
		}

		if(itm == 13)
		{
			agility += 3;
			in+=2;
			cout << "Berserker's Greaves(Agility+2, Penetration+2)";// 攻速鞋呵呵呵(Agility+2, Penetration+2)
			listings[4]=13;
		}
		if (itm == 14)
		{
			agility += 5;
			cout << "Boots of Swiftness(Agility+5)";//五速鞋啦(Agility+5)
			listings[4]=14;
		}
		if (itm == 15)
		{
			agility+=2;
			mp += 3;
			in++;
			cout << "Sorcerer's Shoes(Agility+2, MP+3, Penetration+1)";//魔穿鞋ZZZ(Agility+2, MP+3, Penetration+1)
			listings[4]=15;
		}

		if (itm == 16)
		{
			damge += 2;
			in++;
			cout << "Thunderguard Redwood Recurve(Damage+2, Penetration+1)";//反曲弓耶(Damage+2, Penetration+1)
			listings[0]=16;
		}
		if (itm == 17)
		{
			damge += 3;
			agility++;
			cout << "Frontier Longbow(Damage+3, Agility+1)";//長弓耶 其實我想睡覺了(Damage+3, Agility+1)
			listings[0]=17;
		}
		if (itm == 18)
		{
			damge += 4;
			agility--;
			cout << "Firestorm, Bow of Iron(Damage+4, Agility-1)";//好希望我會射箭呵呵 (Damage+4, Agility-1)
			listings[0]=18;
		}
	}

	void chac()//顯示裝備
	{
		cout << "Hp:" << hp 
			<< "   Mp:" << mp 
			<< "   Agility:" << agility << endl
			<< "Damge:" << damge 
			<< "   Shield:" << shield 
			<< "   Penetration:" << in 
			<<   endl  << endl ;

		cout << "Current equipments:" << endl ;
		if (listings[0] == 1)
			cout << "Excalibur(Damage+3)" << endl ;
		if (listings[0] == 2)
			cout << "Zar'roc(Damage+4, HP-1)" << endl ;
		if (listings[0] == 3)
			cout << "Brisingr(Damage+2, Agility+1)" << endl ;
		if (listings[1] == 4)
			cout << "Golden Chestguard of Hallowed Vengeance(HP+3, Shield+2, Agility-2)" << endl ;
		if (listings[1] == 5)
			cout << "Burnished Demon Battleplate(Agility-1, Shield+1, HP+2)" << endl ;
		if (listings[1] == 6)
			cout << "Peacekeeper's Vest of the Scourge(Agility+1, Shield+1, HP+1)" << endl ;
		if (listings[2] == 7)
			cout << "Defender of Lost Hope(HP+2, Penetration+1)" << endl ;
		if (listings[2] == 8)
			cout << "Wits of Stealth(Shield+1, Penetration+2)" << endl ;
		if (listings[2] == 9)
			cout << "Dragon Bronzed Visage(Agility+2, HP+2)" << endl ;
		if (listings[3] == 10)
			cout << "Leggings of Hellish Nights(Agility-2, Shield+2)" << endl ;
		if (listings[3] == 11)
			cout << "Leather Robes of Silent Souls(MP+2, Shield+1)" << endl ;
		if (listings[3] == 12)
			cout << "Enchanted Skirt of Dawn(Agility+2, Shield+2, Penetration+2)" << endl ;
		if (listings[4] == 13)
			cout << "Berserker's Greaves(Agility+2, Penetration+2)" << endl ;
		if (listings[4] == 14)
			cout << "Boots of Swiftness(Agility+5)" << endl ;
		if (listings[4] == 15)
			cout << "Sorcerer's Shoes(Agility+2, MP+3, Penetration+1)" << endl ;
		if (listings[0] == 16)
			cout << "Thunderguard Redwood Recurve(Damage+2, Penetration+1)" << endl;
		if (listings[0] == 17)
			cout << "Frontier Longbow(Damage+3, Agility+1)" << endl;
		if (listings[0] == 18)
			cout << "Firestorm, Bow of Iron(Damage+4, Agility-1)" << endl;
		cout <<   endl ;
	}
	void dele(int d)//reset all values to original
	{
		hp = 2;
		mp = 2;
		agility = 2;
		damge = 2;
		shield = 2;
		in = 2;
		chkbodyarmour = 0;
		chktrousers = 0;
		chkhelmet = 0;
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
			agility++;
		}
		for (int i = 0; i<4; i++)
		{
			listings[i] = 0;
		}
	}

private:
	int hp; //血量
	int mp; //魔量
	int agility; //敏捷
	int damge; //攻擊力
	int shield; //護盾
	int in; // 穿透
	int chkbodyarmour;//檢查護甲
	int chktrousers;//海水退了就知道誰沒穿褲子
	int chkhelmet;//騎車要帶安全帽
	int chkshoes;//不穿鞋子跑比較快
	int chkweapons;//沒武器就GG啦
	int listings[4];//裝備列表
};
int main()
{
	int race; //種族
	int eqmnts; //裝備
	int c; //選項
	string name;//名字
	cout << "Enter the name of your character: ";
	cin >> name;
	cout << endl ;
	cout << "Choose the race of the character:" << endl  
		<< "1. Ranger(HP+1)" << endl 
		<< "2. Dwarfs(Agility+1)" << endl
		<< "3. Elves(MP+1)"<< endl
		<< "Please enter your selection:" ;
	cin >> race;
	cout << endl;
	stack s(race);
	s.choice(race);
	cout << "*******" << endl ;
	cout << "Menu: " << endl << "0:Exit" << endl
		<< "1: Shop for equipments" << endl
		<< "2: Show current profile" << endl
		<< "3: Reset profile" << endl
		<< "Please enter your selection : ";
	cin >> c;
	while (c)
	{
		if (c == 1)
		{
			cout << "*******" << endl ;
			
			cout << "Shop: " << endl
				<< "0: Exit" << endl
				<< "1: Armor" << endl
				<< "2: Trousers" << endl
				<< "3: Helmet" << endl
				<< "4: Shoes" << endl
				<< "5: Weapon" << endl
				<< "Please select a category: " << endl;

			cin >> eqmnts;
			while (eqmnts)
			{
				s.item(eqmnts, race);
				cout << "*******" << endl ;
				cout << "Shop: " << endl
					<< "0: Exit" << endl
					<< "1: Armor" << endl
					<< "2: Trousers" << endl
					<< "3: Helmet" << endl
					<< "4: Shoes" << endl
					<< "5: Weapon" << endl
					<< "Please select a category: " << endl;
				cin >> eqmnts;
			}
		}
		if (c == 2)
		{
			cout << endl <<"Name:" << name <<   endl ;
			s.chac();
			cout << endl;
		}
		if (c == 3)
		{
			s.dele(race);
		}
		cout << "*******" << endl ;
		cout << "Menu: " << endl << "0:Exit" << endl
			<< "1: Shop for equipments" << endl
			<< "2: Show current profile" << endl
			<< "3: Reset profile" << endl
			<< "Please enter your selection : ";
		cin >> c;
	}
	system("pause");
}