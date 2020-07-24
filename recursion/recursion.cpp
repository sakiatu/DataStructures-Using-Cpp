#include<iostream>
void print(int n);
void printTree(int n);
int funA(int n);
int main()
{
    //print(5);

    //tree recursion
    //printTree(3);

    //indirect recursion--> if funA call funB and at some point funA is called than it is an indirect recursion

    //nested recursion
    std::cout<<funA(95);
}
void print(int n)
{
    if(n>0)
    {
        std::cout<<"calling:"<<n<<" "; //calling time or ascending
        print(n-1);//returning time or descending
        std::cout<<"returning:"<<n<<" ";//returning time or descending

        //if function calls itself and there is nothing coded after that call then it is tail recursion
        //if first statement is a recursive call then it is a head recursion
        //tail recursion can easily be converted to loop but head recursion is difficult

    }
}

void printTree(int n)
{
//if a function calls itself more than one times then it is called "Tree Recursion"

    if(n==0)
        return;
    std::cout<<n<<std::endl;
    printTree(n-1);
    printTree(n-1);
}

int funA(int n)
{
//if the parameter of the funA is funA then it is a nested recursive call

    if(n>100)
        return n-10;
    return funA(funA(n+11));
}

