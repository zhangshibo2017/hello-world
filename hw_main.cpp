#include <cstdio>

//should I use Coding standard ?
//yes , I should
// abc 
void a (){
	return ;
}

class Foo
{
	protected:
	int a_;
	int b_;

};

class Bar;

class Foo1 : public Foo {
	public:
	friend class Bar;
	protected:
	int c_;
};

class Bar{
public:	
	Bar(){
	
		foo1_.c_ = 1;
		foo1_.a_ = 2;
		foo1_.b_ = 3;

		std::printf("%d,%d,%d\n",foo1_.a_,foo1_.b_,foo1_.c_);
	}
private:
	Foo1 foo1_;
};

int main(int argc, const char**  agrv)
{
	Bar bar;
	std::printf("hello world!\n");
	return 0;
}
