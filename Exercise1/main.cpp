#include <iostream>

using namespace std;
# include <cstdlib>
# include <cmath>
void line(){
cout<<".........................."<<endl;
}
void pause(){
cout<<"break"<<endl;
}
int main()
{
    char c ='c';
    wchar_t wc='c';
    signed char sc='c';
    unsigned char usc;
    int a=12 ;
    short int sa=13;
    long int la=14;
    int z1,z2,z3,seed;
    cout<<"Enter the seed:"<<endl;
    cin >> seed;
    cout<<"square root of seed:"<<sqrt(seed)<<endl;
   srand(seed);

    z1 = rand()%6;
    z2 = rand()%6;
    z3 = rand()%6;


    cout << "\nThree random numbers: "<< z1 << " " << z2 << " " << z3 << endl;
    int score;
    char grade ;

    cout<<"Enter Score:";
    cin>>score;

    if (score<=100 && score>=90)
        grade ='A';
    else if (score<=89 && score>=80)
        grade ='B';
    else if (score<=79 && score>=70)
        grade ='C';
    else if (score<=69 && score>=60)
        grade ='D';
    else
        grade='F';


    switch(grade){

    case 'A':
        cout<<"excellent, your score is:"<<score<<endl;
        break;
    case 'B':
        cout<<"very good,your score is:"<<score<<endl;;
        break;
    case 'C':
        cout<<" good,your score is: "<<score<<endl;;
        break;
    case 'D':
        cout<<"pass"<<score<<endl;;
        break;
    case 'F':
        cout<<"Fail"<<score<<endl;
        break;

}

int arr[100],x,i;

for ( i=1;i<=10;i++)
{
    cout<<"enter number:";
    cin>>x;
    arr[i]=x;
}


    for (int i=0;i<=10;i++)


          cout<<arr[i]<<endl;




    line();
    cout << "print char:" <<c<< "\t size of char:"<<sizeof(char)<<endl;
    cout << "print char:" <<c<< "\t size of wchar_t:"<<sizeof(wchar_t)<<endl;
    line();
    cout << "print int:" <<a<< "\t size of int:"<<sizeof(int)<<endl;
    cout << "print int:" <<a<< "\t size of short int:"<<sizeof(short int )<<endl;
    cout << "print int:" <<a<< "\t size of unsigned short int:"<<sizeof(unsigned short int )<<endl;
    cout << "print int:" <<a<< "\t size of unsigned short int:"<<sizeof(unsigned short int )<<endl;
    line();
    cout << "print int:" <<a<< "\t size of long int:"<<sizeof(long int )<<endl;
    cout << "print int:" <<a<< "\t size of unsigned long int:"<<sizeof(unsigned long int )<<endl;
    cout << "print int:" <<a<< "\t size of signed long int:"<<sizeof(signed long int )<<endl;
    line();
    pause();
    cout << "print int:" <<a<< "\t size of float:"<<sizeof(float )<<endl;
    cout << "print int:" <<a<< "\t size of short int:"<<sizeof(double )<<endl;
    return 0;
}
