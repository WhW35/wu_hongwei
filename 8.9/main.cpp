int main()
{
    long value1=200000,value2;
    long *longPtr;
    longPtr=&value1;
    cout<<*longPtr<<endl;
    value2=*longPtr;
    cout<<value2<<endl;
    cout<<&value1<<endl;
    cout<<longPtr<<endl;
}
