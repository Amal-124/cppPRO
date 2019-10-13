#include <iostream>
using namespace std;
class Line 
{  
public:
	void setid(int ID);
	void setname(string NAME);
	void setgpa(double GPA);
	int getid();
	double getgpa();
	string getname();
	
	student(int id); //constructer
private:
	int id;
	string name;
	double gpa;

};
stud
int main(){
	Line l;
	l.setlength(6.0);
	cout<<"length of line : "<<l.getlength() << endl;	
	return 0;
}
