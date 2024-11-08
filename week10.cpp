/*
lvalue (Left Value)
- lvalue�� �޸��� Ư�� ��ġ�� �����ϴ� ����. 
- ������ ��üó�� ���� ������ ���� ��Ÿ��.
- ���� ������ ���ʿ� �� �� ������, ����(lifetime)�� �����Ͽ� Ư�� �޸� ��ġ�� �����.
- ���� ���, int x = 5;���� x�� lvalue��. 
- �̴� �޸��� �ּҿ� ����� �ĺ��ڷ�, ���� ������ �� �ִ�.
- ��� lvalue�� ������ �� ������, ��� lvalue�� �׻� ���� ������ ���� �ƴ�. (��: const�� ����� ������ lvalue���� ������ ���� ����.)

rvalue (Right Value)
- rvalue�� �ӽ� ������, �޸��� Ư�� ��ġ�� �������� �ʴ� ���� �ǹ���.
- ���� ������ �����ʿ� �� �� ������, �Ϲ������� �Ͻ����� ���̰ų� �򰡵� ���� �����.
- rvalue�� ������ �������̰�, ������ �� ������ ���� ������ ���ʿ� �� �� ����.
- ���� ���, 10, x + 1, 3.14 ���� rvalue�Դϴ�.

int y = 10 + 5; // 10 + 5�� rvalue
int z = y * 2; // y * 2�� rvalue

lvalue ���� (Left Value Reference) - &
- lvalue ������ Ư�� �޸� �ּҿ� ����� ���� ��ü�� ���� ������ �ǹ���. 
- ��, &�� ����� ������ ���� ������ lvalue���� ���ε��� �� �ִ�.

rvalue ���� (Right Value Reference) - &&
- rvalue ����(&&)�� �ӽ� ��ü�� ���� ������, �Ͻ����� ���̳� �ӽ� ��ü�� ���ε��ȴ�. 
- �̴� �̵� �ø�ƽ�� ���� ���� ��� �ڿ� �̵��� �����ϰ� ��.

cascading(���� ȣ��)
- cascading(���� ȣ��)�� ��ü�� ��� �Լ��� �����ؼ� ȣ���ϴ� ����� �ǹ���. 
- ���� .(dot) �����ڳ� ->(arrow) �����ڸ� �̿��� ���� �Լ��� �� �ٿ��� ���ʴ�� ȣ���� �� �ֵ��� ��. 
- �̴� ��� �Լ��� *this�� ��ȯ�Ͽ�, �޼��� ü�̴�(method chaining)�� �����ϰ� �����ν� �̷����.
*/

/*
#include<iostream>
#include"Date.h"
using namespace std;

int main() {
	Date d1{ 12, 27, 2010 };
	Date d2;

	cout << "d1 is " << d1 << "\nd2 is " << d2;
	cout << "\n\nd1 += 7 is " << (d1 += 7);

	d2.setDate(2, 28, 2008);
	cout << "\n\n  d2 is " << d2;
	cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";

	Date d3{ 7, 13, 2010 };

	cout << "\n\nTesting the prefix increment operator:\n" << "  d3 is " << d3 << endl;
	cout << "++d3 is " << ++d3 << endl;
	cout << "  d3 is " << d3;

	cout << "\n\nTesting the postfix increment operator:\n" << "  d3 is " << d3 << endl;
	cout << "d3++ is " << d3++ << endl;
	cout << "  d3 is " << d3 << endl;
}
*/

// Rectangle Ŭ���������� ������ �����ε�
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Rectangle.h"
using namespace std;

int main() {
	Rectangle a{ 8.0, 6.0 };
	Rectangle b{ 3.7, 4.5 };

	cout << fixed;
	cout << setprecision(1);
	cout << boolalpha;

	cout << "a: length = " << a.getLength() << "; width = " << a.getWidth() << "; perimeter = " << a.perimeter() << "; area = " << a.area() << "\n";
	cout << "b: length = " << b.getLength() << "; width = " << b.getWidth() << "; perimeter = " << b.perimeter() << "; area = " << b.area() << "\n";

	cout << "a == b? : " << (a == b) << endl;
	cout << "a > b? : " << (a > b) << endl;
	cout << "b > a? : " << (b > a) << endl;
	cout << "a != b? : " << (a != b) << endl;

	Rectangle c;
	c = a - b;
	cout << "c = a - b" << endl;
	cout << "c: length = " << c.getLength() << "; width = " << c.getWidth() << endl;

	a -= b;
	cout << "a -= b" << endl;
	cout << "a: length = " << a.getLength() << "; width = " << a.getWidth() << "; perimeter = " << a.perimeter() << "; area = " << a.area() << "\n";

	cout << "��ü b�� ���� ����: " << b << endl;

	a += b;
	cout << "a += b" << endl;
	cout << "��ü a�� ���� ����: " << a << endl;

	Rectangle d;
	d = a + b;
	cout << "d = a + b" << endl;
	cout << "��ü d�� ���� ����: " << d << endl;


}