#include <iostream>
#include <string>
#include <iomanip>
#include "code2.cpp"
using namespace std;
class Student{
private:
    string name;

    int id;
    int point[5];
    string grade[5];
    string course_Name[5];
    float Gpa=0.0f;
    float Total_hours=0;
public:
    float mark;
    void Get_name(string& Name){
        name = Name;
    }
    void Get_id(int& Id){
        id=Id;
    }
    void CalculateGPA(){
        cout<<"student name: "<<name<<endl;
        cout<<"student id: "<<id<<endl;

        int houre;
        for(int i=0;i<5;i++){
            cout<<"Enter course name:";
            cin>>course_Name[i];
            cout<<"Enter mark:";
            cin>>mark;
            cout<<"Enter  credit hour: ";
            cin>>houre;
            if(mark>=0&& mark<=40){
                point[i]=0;
                grade[i]="A";
            }
            else if(mark>40&& mark<=50){
                point[i]=1;
                grade[i]="D";
            }
            else if(mark>50&& mark<+65){
                point[i]=2;
                grade[i]="C";
            }
            else if(mark>65&& mark<=85){
                point[i]=3;
                grade[i]="B";
            }
            else if(mark>85&& mark<=100){
                point[i]=4;
                grade[i]="A";
            }
            Total_hours += houre;
            Gpa += point[i] * houre;
        }
Gpa=Gpa/Total_hours;
        cout<<setw(20)<<"Name"<<setw(20)<<"ID"<<setw(20)<<"course name"<<setw(20)<<"point"<<setw(20)<<"Gpa"<<setw(20)<<Gpa<<endl;
        for(int i=0;i<5;i++){
            cout<<setw(20)<<name<<setw(20)<<id<<setw(20)<<course_Name[i]<<setw(20)<<grade[i]<<setw(20)<<point[i]<<setw(20)<<Gpa<<endl;
        }
    }


};
int main(){
Student student;
string name;
int id;
print();
cout<<"Enter student name: ";
cin>>name;
cout<<"Enter student id: ";
cin>>id;
student.Get_name(name);
student.Get_id(id);
student.CalculateGPA();







    return 0;
}
