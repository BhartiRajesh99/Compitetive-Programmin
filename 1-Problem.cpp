#include<iostream>
using namespace std;
class Pallindrome
{
    private:
        int n,rev;
    public:
        Pallindrome() { }
        Pallindrome(int x) { n=x; }
        void set(int a)
        {
            n=a;
        }
        void display()
        {
            cout<<n<<endl;
        }
        void reverse();
        bool pallin()
        {
            if(n==rev&&n>0)
                return 1;
            else
                return 0;
        }
};
void Pallindrome::reverse()
{
    int i,j,c,a,v=0;
    a=n;
    for(i=1;a;i++)
    {
        c=a%10;
        v=(v+c)*10;
        a=a/10;
    }
    v=v/10;
    rev=v;
}
int main()
{
    Pallindrome p1;
    p1.set(-121);
    p1.display();
    p1.reverse();
    if(p1.pallin())
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
