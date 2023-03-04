#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int commsAverage;
string nameFunt;
string comandiFunt;
string stri;
string namevar;
string var;
string name;
string otherComm;
string otherComm2;
string otherComm3;
int in;
string str;
char ch;
double dob;
class mainclass
{
  public:
	string Replace(string &str, const string &sub, const string &mod)
	{
		string tmp(str);
		tmp.replace(tmp.find(sub), mod.length(), mod);
		return tmp;
	}
	void hlp()
	{
		string azioni[9] =
			{"hlp: view commands", "prt [argument]", "fcr: create a txt file",
			 "mth [value1] [value2] [operation]", "lope [value1<value2] [argument]",
			 "lopf [value1<value2] [optional:increment(++)] [argument]", "type [var type] [var name] [value]",
			 "type.list: list all var types"};
		string azioni2[7] =
			{"prttype [var name]", "prtl [argument]", "inputtype.list: list all input types",
			 "vcm: it create a virtual space for the commands", "cif [condition]",
			 "funt [funt name] [command number]", "cal [funt name] [commands arguments]"};
		for (int i = 0; i < 9; i++)
		{
			cout << azioni[i] << endl;
		}
		for (int i = 0; i < 7; i++)
		{
			cout << azioni2[i] << endl;
		}
	}
	void var()
	{
		cin >> ::var;
		cin >> ::name;
		if (::var == "in")
		{
			cin >> ::in;
		}
		else if (::var == "str")
		{
			cin >> ::str;
		}
		else if (::var == "ch")
		{
			cin >> ::ch;
		}
		else if (::var == "dob")
		{
			cin >> ::dob;
		}
		else if (::var == "Inpin")
		{
			cout << ">>";
			cin >> ::in;
		}
		else if (::var == "Inpstr")
		{
			cout << ">>";
			cin >> ::str;
		}
		else if (::var == "Inpch")
		{
			cout << ">>";
			cin >> ::ch;
		}
		else if (::var == "Inpdob")
		{
			cout << ">>";
			cin >> ::dob;
		}
	}
	void prt()
	{
		string prt;
		cin >> prt;
		if (prt.find("_") != string::npos)
		{
			replace(prt.begin(), prt.end(), '_', ' ');
			cout << prt;
		}
		else
		{
			cout << prt;
		}
	}
	void prtl()
	{
		string prtl;
		cin >> prtl;
		if (prtl.find("_") != string::npos)
		{
			replace(prtl.begin(), prtl.end(), '_', ' ');
			cout << prtl << endl;
		}
		else
		{
			cout << prtl << endl;
		}
	}
	void frc()
	{
		ofstream file;
		file.open("text.txt", ios::out);
		file.close();
	}
	void mth()
	{
		int a;
		int b;
		cin >> a;
		cin >> b;
		string d;
		int c;
		cin >> d;
		if (d == "*a")
		{
			c = a + b;
			cout << c << endl;
		}
		if (d == "*s")
		{
			c = a - b;
			cout << c << endl;
		}
		if (d == "*m")
		{
			c = a * b;
			cout << c << endl;
		}
		if (d == "*d")
		{
			c = a / b;
			cout << c << endl;
		}
	}
	void lope()
	{
		int n1;
		int n2;
		cin >> n1;
		cin >> n2;
		string lo;
		cin >> lo;
		while (n1 < n2)
		{
			if (lo.find("_") != string::npos)
			{
				replace(lo.begin(), lo.end(), '_', ' ');
				cout << lo << endl;
			}
			else
			{
				cout << lo << endl;
			}
			n1++;
		}
	}
	void lopf()
	{
		int n1;
		int n2;
		string increment;
		cin >> n1;
		cin >> n2;
		cin >> increment;
		string text;
		cin >> text;
		if (increment == "++")
		{
			for (n1 = 0; n1 < n2; n1++)
			{
				if (text.find("_") != string::npos)
				{
					replace(text.begin(), text.end(), '_', ' ');
					cout << text << endl;
				}
				else
				{
					cout << text << endl;
				}
			}
		}
		else if (increment == "fe")
		{
			for (n1 = 0; n1 < n2;)
			{
				if (text.find("_") != string::npos)
				{
					replace(text.begin(), text.end(), '_', ' ');
					cout << text << endl;
				}
				else
				{
					cout << text << endl;
				}
			}
		}
	}
	void cels()
	{
		string end;
		string ret = "false";
		bool isCels = false;
		string cond;
		string operand;
		string cond2;
		cin >> cond;
		cin >> operand;
		cin >> cond2;
		cin >> end;
		if (operand == "eql")
		{
			if (cond == cond2)
			{
				ret = "true";
				cout << ret << endl;
			}
			else
			{
				cout << ret << endl;
			}
		}
		if (operand == "neql")
		{
			if (cond != cond2)
			{
				ret = "true";
				cout << ret << endl;
			}
			else
			{
				cout << ret << endl;
			}
		}
		if (end == "ed")
		{
			isCels = false;
		}
		else if (end == "cels")
		{
			cels();
			isCels = true;
		}
	}
	void cif()
	{
		string ret = "false";
		bool isCels = false;
		string cond;
		string operand;
		string cond2;
		string end;
		cin >> cond;
		cin >> operand;
		cin >> cond2;
		cin >> end;
		if (operand == "eql")
		{
			if (cond == cond2)
			{
				ret = "true";
				cout << ret << endl;
			}
			else
			{
				cout << ret << endl;
			}
		}
		if (operand == "neql")
		{
			if (cond != cond2)
			{
				ret = "true";
				cout << ret << endl;
			}
			else
			{
				cout << ret << endl;
			}
		}
		if (end == "ed")
		{
			isCels = false;
		}
		else if (end == "cels")
		{
			cels();
			isCels = true;
		}
	}

	void funt()
	{
		int typed = 0;
		int i = 0;
		cin >> ::nameFunt;
		cin >> ::commsAverage;
		while (i < commsAverage)
		{
			cout << " ";
			cin >> ::comandiFunt;
			if (::comandiFunt == "prt")
			{
				typed + 1;
			}
			else if (::comandiFunt == "prtl")
			{
				typed + 1;
			}
			else if (::comandiFunt == "prttype")
			{
				typed + 1;
			}
			else if (::comandiFunt == "fcr")
			{
				typed + 1;
			}
			else if (::comandiFunt == "mth")
			{
				typed + 1;
			}
			else if (::comandiFunt == "lope")
			{
				typed + 1;
			}
			else if (::comandiFunt == "lopf")
			{
				typed + 1;
			}
			else if (::comandiFunt == "type")
			{
				typed + 1;
			}
			else if (::comandiFunt == "cif")
			{
				typed + 1;
			}
			i++;
		}
	}

	void execFunt()
	{
		string nomeFunt = ::nameFunt;
		string exec;
		cin >> exec;
		if (exec == nomeFunt)
		{
			if (::comandiFunt == "prt")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					prt();
				}
			}
			else if (::comandiFunt == "prtl")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					prtl();
				}
			}
			else if (::comandiFunt == "fcr")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					frc();
				}
			}
			else if (::comandiFunt == "mth")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					mth();
				}
			}
			else if (::comandiFunt == "lope")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					lope();
				}
			}
			else if (::comandiFunt == "lopf")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					lopf();
				}
			}
			else if (::comandiFunt == "type")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					var();
				}
			}
			else if (::comandiFunt == "cif")
			{
				for (int i = 0; i < commsAverage; i++)
				{
					cif();
				}
			}
		}
	}

	void exec()
	{
		if (::stri == ::name)
		{
			::stri = " ";
		}
		if (::var == "in")
		{
			cout << ::in << endl;
		}
		else if (::var == "str")
		{
			cout << ::str << endl;
		}
		else if (::var == "ch")
		{
			cout << ::ch << endl;
		}
		else if (::var == "dob")
		{
			cout << ::dob << endl;
		}
		else if (::var == "Inpin")
		{
			cout << ::in << endl;
		}
		else if (::var == "Inpstr")
		{
			cout << ::str << endl;
		}
		else if (::var == "Inpch")
		{
			cout << ::ch << endl;
		}
		else if (::var == "Inpdob")
		{
			cout << ::dob << endl;
		}
	}
	void prttype()
	{
		cin >> namevar;
		if (::namevar == ::name)
		{
			exec();
		}
	}
	void all()
	{
		while (3 > 2)
		{
			string comandi;
			string home = "";
			cout << home;
			cin >> comandi;
			if (comandi == "hlp")
			{
				hlp();
			}
			else if (comandi == "vcm")
			{
				while (3 > 2)
				{
					string comandi;
					home = "vcm: ";
					cout << home;
					cin >> comandi;
					if (comandi == "fcr")
					{
						frc();
					}
					else if (comandi == "hlp")
					{
						hlp();
					}
					else if (comandi == "prt")
					{
						prt();
					}
					else if (comandi == "prtl")
					{
						prtl();
					}
					else if (comandi == "prttype")
					{
						prttype();
					}
					else if (comandi == "mth")
					{
						mth();
					}
					else if (comandi == "lope")
					{
						lope();
					}
					else if (comandi == "lopf")
					{
						lopf();
					}
					else if (comandi == "ext")
					{
						break;
					}
					else if (comandi == "type")
					{
						var();
					}
					else if (comandi == "var")
					{
						cout << "ex: type in 12" << endl;
					}
					else if (comandi == "type.list")
					{
						string typs[4]{
							"in:integer", "str:string", "ch:char", "dob:double"};
						for (int x = 0; x < 4; x++)
						{
							cout << typs[x] << endl;
						}
					}
				}
			}
			else if (comandi == "prt")
			{
				prt();
			}
			else if (comandi == "prtl")
			{
				prtl();
			}
			else if (comandi == "prttype")
			{
				cin >> namevar;
				if (::namevar == ::name)
				{
					exec();
				}
			}
			else if (comandi == "col")
			{
				string argv;
				cin >> argv;
				if (argv == nameFunt)
				{
					execFunt();
				}
			}
			else if (comandi == "fcr")
			{
				frc();
			}
			else if (comandi == "mth")
			{
				mth();
			}
			else if (comandi == "lope")
			{
				lope();
			}
			else if (comandi == "lopf")
			{
				lopf();
			}
			else if (comandi == "ext")
			{
				break;
			}
			else if (comandi == "type")
			{
				var();
			}
			else if (comandi == "cif")
			{
				cif();
			}
			else if (comandi == "funt")
			{
				funt();
			}
			else if (comandi == "cal")
			{
				execFunt();
			}
			else if (comandi == "type.list")
			{
				string typs[4]{
					"in:integer", "str:string", "ch:char", "dob:double"};
				for (int x = 0; x < 4; x++)
				{
					cout << typs[x] << endl;
				}
			}
			else if (comandi == "inputtype.list")
			{
				string tips[4]{
					"Inpin:input integer", "Inpstr:input string", "Inpch:input char",
					"Inpdob:input double"};
				for (int x = 0; x < 4; x++)
				{
					cout << tips[x] << endl;
				}
			}
		}
	}
};

int main()
{
	mainclass ps;
	ps.all();
}
