#include <iostream>
#include <fstream>
using namespace std;

class mainclass {
		public:
			void hlp () {
				string azioni[11] = {"hlp: view commands","prt [argument]","fcr: create a txt file","mth [value1] [value2] [operation]","lope [value1<value2] [argument]","lopf [value1<value2] [optional:increment(++)] [argument]","type [var type] [value]","type.list: list all var types","inp [input type]","vcm: it create a virtual space for the commands","ext: exit from termc"};
					for (int i = 0;i<9;i++){
						cout << azioni[i] << endl;
					}
			}
			void var (){
				string var;
				cin >> var;
				string name;
				cin >> name;
				if (var == "in"){
					int in;
					cin >> in;
					cout << in << endl;
				}
				else if (var == "str"){
					string str;
					cin >> str;
					cout << str << endl;
				}
				else if (var == "ch"){
					char ch;
					cin >> ch;
					cout << ch << endl;
				}
				else if (var == "dob"){
					double dob;
					cin >> dob;
					cout << dob << endl; 
				}
			}
            void input(){
                   string var;
                   cin >> var;
                 if(var == "Inpin"){
                    int inpin;
                    cout << ">>";
                    cin >> inpin;
                }
                else if(var == "Inpstr"){
                    string inpin;
                    cout << ">>";
                    cin >> inpin;
                }
                else if(var == "Inpch"){
                    char inpin;
                    cout << ">>";
                    cin >> inpin;
                }
                else if(var == "Inpdob"){
                    int inpin;
                    cout << ">>";
                    cin >> inpin;
                }
            }
			void prt () {
				string str;
				cin >> str;
				cout << str << endl;
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
						cout<<text<<endl;
					}
				}
				else if(increment == "fe"){
					for(n1=0;n1<n2;){
						cout<<text<<endl;
					}
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
                            else if (comandi == "inp"){
                                input();
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
                    else if (comandi == "inp"){
                        input();
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
