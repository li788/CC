class annimal 
{
	public:
		virtual void speak()
		{
			cout<<"动物在说话"<<endl;
		}
};
class cat :public annimal //继承
{
public:
	void speak()
	{
		cout << "猫在说话"<<endl;
	}

};
class dog :public annimal
{
public:
	void speak()
	{
		cout << "狗在说话" << endl;
	}

};
void dospeak(annimal&annimal)//父类可指向子类
{
	annimal.speak();
}
int main()
{
	class dog dog;
	dospeak(dog);
	system("pause");
	return 0;
}