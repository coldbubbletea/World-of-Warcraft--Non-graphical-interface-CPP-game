#include<bits/stdc++.h>
using namespace std;
int blue_timer;
int red_timer;
int redStop=1;
int blueStop=1;
int minLife=20000;
int blue_is_print=0;
int red_is_print=0;
class Iceman{
public:
	static inline int strengthIceman=5;
	static inline const string icemanLable="iceman";
	int icemanLife;
	Iceman(int l): icemanLife(l){}
};

class Lion{
public:
	static inline int strengthLion=6;
	static inline const string lionLable="lion";
	int lionLife;
	Lion(int l): lionLife(l){}
};

class Dragon{
public:
	static inline int strengthDragon=3;
	static inline const string dragonLable="dragon";
	int dragonLife;
	Dragon(int l): dragonLife(l){}
};

class Wolf{
public:
	static inline int strengthwolf=7;
	static inline const string wolfLable="wolf";
	int wolfLife;
	Wolf(int l): wolfLife(l){}
};

class Ninja{
public:
	static inline int strengthninja=4;
	static inline const string ninjaLable="ninja";
	int ninjaLife;
	Ninja(int l): ninjaLife(l){}
};

class RedHeadQuarters
{
public:
	
	static inline const string redHeadQuartersLable="red";
	int life=0;
	int existIceman=0;
	int existLion=0;
	int existWolf=0;
	int existNinja=0;
	int existDragon=0;
	Iceman i;
	Lion l;
	Dragon d;
	Wolf w;
	Ninja n;
	int seq;
	void produce()
	{
		//cout<<"red life"<<life<<endl;
		
		if(life<minLife)
		{
			redStop=0;
			if(red_timer<10)
			{
				cout<<"00";
			}
			else if(red_timer<100)
			{
				cout<<"0";
			}
			cout<<red_timer<< " ";
			
			cout<<"red headquarter stops making warriors\n";
		}
		if (seq==0)
		{
			
			if(life>=i.icemanLife)
			{
				red_is_print=1;
				life-=i.icemanLife;
				existIceman++;
				if(red_timer<10)
				{
					cout<<"00";
				}
				else if(red_timer<100)
				{
					cout<<"0";
				}
				cout<<red_timer<<" "<<RedHeadQuarters::redHeadQuartersLable<<" "<<Iceman::icemanLable<<" "<<red_timer+1<<" "<<"born with strength "<<i.icemanLife<<","<<existIceman<<" iceman in red headquarter\n";
			}
			seq++;
		}
		else if (seq==1)
		{
			if(life>=l.lionLife)
			{
				red_is_print=1;
				life-=l.lionLife;
				existLion++;
				if(red_timer<10)
				{
					cout<<"00";
				}
				else if(red_timer<100)
				{
					cout<<"0";
				}
				cout<<red_timer<<" "<<RedHeadQuarters::redHeadQuartersLable<<" "<<l.lionLable<<" "<<red_timer+1<<" "<<"born with strength "<<l.lionLife<<","<<existLion<<" lion in red headquarter\n";
			}
			seq++;
		}
		else if (seq==2)
		{
			if(life>=w.wolfLife)
			{
				red_is_print=1;
				life-=w.wolfLife;
				existWolf++;
				if(red_timer<10)
				{
					cout<<"00";
				}
				else if(red_timer<100)
				{
					cout<<"0";
				}
				cout<<red_timer<<" "<<RedHeadQuarters::redHeadQuartersLable<<" "<<w.wolfLable<<" "<<red_timer+1<<" "<<"born with strength "<<w.wolfLife<<","<<existWolf<<" wolf in red headquarter\n";
			}
			seq++;
		}
		else if (seq==3)
		{
			if(life>=n.ninjaLife)
			{
				red_is_print=1;
				life-=n.ninjaLife;
				existNinja++;
				if(red_timer<10)
				{
					cout<<"00";
				}
				else if(red_timer<100)
				{
					cout<<"0";
				}
				cout<<red_timer<<" "<<RedHeadQuarters::redHeadQuartersLable<<" "<<n.ninjaLable<<" "<<red_timer+1<<" "<<"born with strength "<<n.ninjaLife<<","<<existNinja<<" ninja in red headquarter\n";
			}
			seq++;
		}
		else if (seq==4)
		{
			if(life>=d.dragonLife)
			{
				red_is_print=1;
				life-=d.dragonLife;
				existDragon++;
				if(red_timer<10)
				{
					cout<<"00";
				}
				else if(red_timer<100)
				{
					cout<<"0";
				}
				cout<<red_timer<<" "<<RedHeadQuarters::redHeadQuartersLable<<" "<<d.dragonLable<<" "<<red_timer+1<<" "<<"born with strength "<<d.dragonLife<<","<<existDragon<<" dragon in red headquarter\n";
			}
			seq=0;
		}
		
		
		
	}

	
	RedHeadQuarters(int c1,int c2,int c3,int c4,int c5,int c6): life(c1),i(c2),l(c3),d(c4),w(c5),n(c6){} 
};
class BlueHeadQuarters
{
public:
	static inline const string redHeadQuartersLable="blue";
	int life=0;
	int existIceman=0;
	int existLion=0;
	int existWolf=0;
	int existNinja=0;
	int existDragon=0;
	int seq=0;
	Iceman i;
	Lion l;
	Dragon d;
	Wolf w;
	Ninja n;
	BlueHeadQuarters(int c1,int c2,int c3,int c4,int c5,int c6): life(c1),i(c2),l(c3),d(c4),w(c5),n(c6){} 
	void produce()
	{
		
			if(life<minLife)
			{
				blueStop=0;
				if(blue_timer<10)
				{
					cout<<"00";
				}
				else if(blue_timer<100)
				{
					cout<<"0";
				}
				cout<<blue_timer<< " ";
				
				cout<<"blue headquarter stops making warriors\n";
			}
			if (seq==0)
			{
				if(life>=l.lionLife)
				{
					blue_is_print=1;
					life-=l.lionLife;
					existLion++;
					if(blue_timer<10)
					{
						cout<<"00";
					}
					else if(blue_timer<100)
					{
						cout<<"0";
					}
					cout<<blue_timer<<" "<<BlueHeadQuarters::redHeadQuartersLable<<" "<<Lion::lionLable<<" "<<blue_timer+1<<" "<<"born with strength "<<l.lionLife<<","<<existLion<<" lion in blue headquarter\n";
				}
				seq++;
			}
			else if (seq==1)
			{
				if(life>=d.dragonLife)
				{
					blue_is_print=1;
					life-=d.dragonLife;
					existDragon++;
					if(blue_timer<10)
					{
						cout<<"00";
					}
					else if(blue_timer<100)
					{
						cout<<"0";
					}
					cout<<blue_timer<<" "<<BlueHeadQuarters::redHeadQuartersLable<<" "<<Dragon::dragonLable<<" "<<blue_timer+1<<" "<<"born with strength "<<d.dragonLife<<","<<existDragon<<" dragon in blue headquarter\n";
				}
				seq++;
			}
			else if (seq==2)
			{
				if(life>=n.ninjaLife)
				{
					blue_is_print=1;
					life-=n.ninjaLife;
					existNinja++;
					if(blue_timer<10)
					{
						cout<<"00";
					}
					else if(blue_timer<100)
					{
						cout<<"0";
					}
					cout<<blue_timer<<" "<<BlueHeadQuarters::redHeadQuartersLable<<" "<<Ninja::ninjaLable<<" "<<blue_timer+1<<" "<<"born with strength "<<n.ninjaLife<<","<<existNinja<<" ninja in blue headquarter\n";
				}
				seq++;
			}
			else if (seq==3)
			{
				if(life>=i.icemanLife)
				{
					blue_is_print=1;
					life-=i.icemanLife;
					existIceman++;
					if(blue_timer<10)
					{
						cout<<"00";
					}
					else if(blue_timer<100)
					{
						cout<<"0";
					}
					cout<<blue_timer<<" "<<BlueHeadQuarters::redHeadQuartersLable<<" "<<i.icemanLable<<" "<<blue_timer+1<<" "<<"born with strength "<<i.icemanLife<<","<<existIceman<<" iceman in blue headquarter\n";
				}
				seq++;
			}
			else if (seq==4)
			{
				if(life>=w.wolfLife)
				{
					blue_is_print=1;
					life-=w.wolfLife;
					existWolf++;
					if(blue_timer<10)
					{
						cout<<"00";
					}
					else if(blue_timer<100)
					{
						cout<<"0";
					}
					cout<<blue_timer<<" "<<BlueHeadQuarters::redHeadQuartersLable<<" "<<w.wolfLable<<" "<<blue_timer+1<<" "<<"born with strength "<<w.wolfLife<<","<<existWolf<<" wolf in blue headquarter\n";
				}
				seq=0;
			}
			
		
		
		
	}
};

int main()
{
	
	
	int Case;
	cin>>Case;
	int cnt=0,CASE;
	CASE=Case+1;
	while(Case--)
	{
		cnt++;
		cout<<"Case:"<<cnt<<'\n';
		if(CASE==cnt)

			break;
		int M;
		cin>>M;
		//RedHeadQuarters(int c1,int c2,int c3,int c4,int c5,int c6): life(c1),i(c2),l(c3),d(c4),w(c5),n(c6){}
		int dragon,ninja,iceman,lion,wolf ;
		cin>>dragon>>ninja>>iceman>>lion>>wolf;
		minLife=min(dragon,minLife);
		minLife=min(ninja,minLife);
		minLife=min(iceman,minLife);
		minLife=min(lion,minLife);
		minLife=min(wolf,minLife);
		//cout<<"minlife:"<<minLife<<endl;
		blue_timer=0;
		red_timer=0;
		BlueHeadQuarters b(M,iceman,lion,dragon,wolf,ninja);
		RedHeadQuarters a(M,iceman,lion,dragon,wolf,ninja);
		//cout<<"a seq:"<<a.seq<<endl;
		//cout<<"b seq:"<<b.seq<<endl;
		b.seq=0;
		a.seq=0;
		int blue_try=0;
		int red_try=0;
		while(redStop!=0||blueStop!=0)
		{
			while (redStop!=0&&red_is_print==0)
			{
				a.produce();
				red_try++;
				if (red_is_print)
				{
					red_timer++;
					red_is_print=0;
					red_try=0;
					break;
				}
				if (red_try>10)
				{
					red_try=0;break;
				}
					
			}
			//cout<<"blue:"<<blueStop<<" "<<blue_is_print<<" "<<blue_try<<endl;
			while (blueStop!=0&&blue_is_print==0)
			{
				b.produce();
				blue_try++;
				if (blue_is_print)
				{
					blue_timer++;
					blue_is_print=0;
					blue_try=0;
					break;
				}
				if(blue_try>10)
				{
					blue_try=0;
					break;
				}
					
			}
			
		}
		redStop=1;
		blueStop=1;
		minLife=20000;
		b.seq=0;
		a.seq=0;
	}
	
	
	return 0;
}

