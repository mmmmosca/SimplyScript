#include <iostream>
#include <fstream>
using namespace std;
string stri;
string namevar;
string var;
string name;
int in;
string str;
char ch;
double dob;
class mainclass {
		public:
			void hlp () {
				string azioni[9] = {"hlp: view commands","prt [argument]","fcr: create a txt file","mth [value1] [value2] [operation]","lope [value1<value2] [argument]","lopf [value1<value2] [optional:increment(++)] [argument]","type [var type] [var name] [value]","type.list: list all var types"};
                string azioni2[5] = {"prttype [var name]","prtl [argument]","inputtype.list: list all input types","vcm: it create a virtual space for the commands","cif [condition]"};
					for (int i = 0;i<9;i++){
						cout << azioni[i] << endl;
					}
					for (int i = 0;i<5;i++){
						cout << azioni2[i] << endl;
					}
			}
			void var (){
				cin >> ::var;
				cin >> ::name;
				if (::var == "in"){
					cin >> ::in;
				}
				else if (::var == "str"){
					cin >> ::str;
				}
				else if (::var == "ch"){
					cin >> ::ch;
				}
				else if (::var == "dob"){
					cin >> ::dob; 
				}
                else if(::var == "Inpin"){
                    cout << ">>";
                    cin >> ::in;
                }
                else if(::var == "Inpstr"){
                    cout << ">>";
                    cin >> ::str;
                }
                else if(::var == "Inpch"){
                    cout << ">>";
                    cin >> ::ch;
                }
                else if(::var == "Inpdob"){
                    cout << ">>";
                    cin >> ::dob;
                }
			}
			void prt () {
				cin >> ::stri;
				cout << ::stri;
			}
            void prtl () {
                cin >> ::stri;
                cout << ::stri << endl;   
            }
			void frc () {
				ofstream file;
				file.open("text.txt",ios::out);
				file.close();
			}
			void mth () {
                int a;
                int b;
				cin >> a;
				cin >> b;
				string d;
				int c;
				cin >> d;
				if (d == "*a"){
					c = a+b;
					cout << c << endl;
				}
				if (d == "*s"){
					c = a-b;
					cout << c << endl;
				}
				if (d == "*m"){
					c = a*b;
					cout << c << endl;
				}
				if (d == "*d"){
					c = a/b;
					cout << c << endl;
				}
			}
			void lope () {
				int n1;
				int n2;
				cin>>n1;
				cin>>n2;
				string lo;
				cin >> lo;
				while(n1<n2){
					cout << lo << endl;
					n1++;
				}
			}
			void lopf(){
				int n1;
				int n2;
				string increment;
				cin>>n1;
				cin>>n2;
				cin>>increment;
				string text;
				cin >> text;
				if(increment == "++"){
					for(n1 = 0;n1<n2;n1++){
					    cout << text << endl;
                    }
				}
				else if(increment == "fe"){
					for(n1=0;n1<n2;){
                        cout << text << endl;
					}
				}
			}
            void cif(){
                string ret = "false";
                string cond;
                string operand;
                string cond2;
                cin >> cond;
                cin >> operand;
                cin >> cond2;
                if (operand == "eql"){
                    if(cond == cond2){
                        ret = "true";
                        cout << ret << endl;
                    }else{
                        cout << ret << endl;
                    }
                }
                if (operand == "neql"){
                    if(cond != cond2){
                        ret = "true";
                        cout << ret << endl;
                    }else{
                        cout << ret << endl;
                    }
                }
            }
                
            void exec(){
                if(::stri == ::name){
                    ::stri = " ";
                }
				if (::var == "in"){
					cout << ::in << endl;
				}
				else if (::var == "str"){
					cout << ::str << endl;
				}
				else if (::var == "ch"){
					cout << ::ch << endl;
				}
				else if (::var == "dob"){
					cout << ::dob << endl;
				}
                else if(::var == "Inpin"){
                    cout << ::in << endl;
                }
                else if(::var == "Inpstr"){
                    cout << ::str << endl;
                }
                else if(::var == "Inpch"){
                    cout << ::ch << endl;
                }
                else if(::var == "Inpdob"){
                    cout << ::dob << endl;
                }
            }
            void prttype(){
            	cin >> namevar;
                if(::namevar == ::name){
                    exec();
                }
            }
			void all(){
				while (3>2){
					string comandi;
					string home = "#~> ";
                    cout << home;
				    cin >> comandi;
				    if (comandi == "hlp"){
					    hlp();
				    }
                    else if (comandi == "vcm"){
                        while (3>2){
                            string comandi;
                            home = " ";
                            cout << home;
				            cin >> comandi;
                            if (comandi == "fcr"){
					            frc();
				            }
                            else if (comandi == "hlp"){
					            hlp();
				            }
                            else if (comandi == "prt"){
					            prt();
				            }
                            else if (comandi == "prtl"){
                                prtl();
                            }
                            else if (comandi == "prttype"){
                            	prttype();
                            }
				            else if (comandi == "mth"){
					            mth();
				            }
				            else if (comandi == "lope"){
					            lope();
				            }
				            else if(comandi == "lopf"){
					            lopf();
				            }
				            else if (comandi == "ext"){
					            break;
				            }
				            else if (comandi == "type"){
					            var();
				            }
				            else if (comandi == "var"){
					            cout << "ex: type in 12" << endl;
				            }
				            else if (comandi == "type.list"){
					            string typs [4]{"in:integer","str:string","ch:char","dob:double"};
					            for (int x = 0;x<4;x++){
						            cout << typs[x] << endl;
					            }
				            }
                        } 
                    }
				    else if (comandi == "prt"){
					    prt();
				    }
                    else if (comandi == "prtl"){
                        prtl();
                    }
                    else if (comandi == "prttype"){
                        cin >> namevar;
                        if(::namevar == ::name){
                            exec();
                        }
                    }
				    else if (comandi == "fcr"){
					    frc();
				    }
				    else if (comandi == "mth"){
					    mth();
				    }
				    else if (comandi == "lope"){
					    lope();
				    }
				    else if(comandi == "lopf"){
					    lopf();
				    }
				    else if (comandi == "ext"){
					    break;
				    }
				    else if (comandi == "type"){
					    var();
				    }
                    else if (comandi == "cif"){
                        cif();
                    }
				    else if (comandi == "type.list"){
					    string typs [4]{"in:integer","str:string","ch:char","dob:double"};
					    for (int x = 0;x<4;x++){
						    cout << typs[x] << endl;
					    }
                    }
                    else if (comandi == "inputtype.list"){
					    string tips [4]{"Inpin:input integer","Inpstr:input string","Inpch:input char","Inpdob:input double"};
					    for (int x = 0;x<4;x++){
						    cout << tips[x] << endl;
					    }
				    }
			}
		}
 };
int main () {
	mainclass ps;
	ps.all();
}
