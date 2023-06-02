*/ c++ program which takes input marks of four subject and display the percentages and grades.(marks in all subject must be >=35, otherwise FAIL, if percentage >=70 then grade = DISTINCTION, per >=60 and <70 then grade = FIRST, if per>=50 and <60 then grade = SECOND, otherwise grade = PASS ) */

 #include <iostream>
using namespace std;
class subject{
  
  public:
  int s1,s2,s3,s4;
    void sub()
    {
        cout<<"enter subject  marks of 4 subject"<<endl;
        cin>>s1;
        cout<<"enter subject 2 marks "<<endl;
        cin>>s2;
        cout<<"enter subject 3 marks "<<endl;
        cin>>s3;
        cout<<"enter subject 4 marks "<<endl;
        cin>>s4;
    }
};
class percentage : public subject{
    
    public:
    float per;
    void percentages()
    {
        per = (s1 + s2 + s3 +s4 )/4;
        cout<<"your percentages is "<<per<<" %"<<endl;
    }
};
class check : public percentage{
  public:
  void check_data()
  {
      if(per >= 70)
      {
          cout<<"GRADE : distinction "<<endl;
      }
      else if(per >=60 && per <70)
      {
          cout<<"GRADE : first class"<<endl;
      }
      else if(per >=50 && per <60)
      {
          cout<<"GRADE : second class"<<endl;
      }
      else if(per >=35 && per<50)
      {
          cout<<"GRADE : pass"<<endl;
      }
      else{
          cout<<"GRADE : fail"<<endl;
      }
  }
};
int main() {
    check s;
    s.sub();
    s.percentages();
    s.check_data();
    return 0;
}
