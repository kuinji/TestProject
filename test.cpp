
class A
{
private:
	static int N;
public:
	A()
	{
		A::N++;
	};
	~A()
	{
		A::N--;
	};
	static int getN() { return A::N; }
};

int A::N = 0;

int main()
{
	A a;
}