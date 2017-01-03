#include<iostream>
#include "Iterator"
using namespace std;
template <class T>
class Vector
{
protected:
	Iterator _start;
	Iterator _finish;
	Iterator _endOfStorage;
public:
	typedef	T* Iterator;
	typedef const T* Iterator;
public:
	Vector()
		:_start(NULL)
		,_finish(NULL)
		,_endOfStorage(NULL)
	{}
	~Vector()
	{
		if (_start)
		{
			delete[] _start;
		}
	}
	/*Vector(const Vector<T>& v)
		:start(new	T[v.size()])
	{
		if (TypeTraits<T>::_)
		{
		}
	}*/

	void PopBack()
	{
		Erase(--End());
	}

	void PushBack(const T& x)
	{
		Insert(End());
	}
	void Insert(Iterator pos, const T& x);
	Iterator Erase(Iterator pos);

	size_t Size()
	{
		return _finish-_start;
	}
	void CheckStorage();

	Iterator Begin();
	Iterator End();
	ConstIterator Begin() const;
	ConstIterator End() const;

};
template<class T>
void PrintVector(const Vector<T>& v)
{
	vector <T>::ConstIterator it=v.Begin();
	while (it!=v.End())
	{
		cout<<*it<<" "
			++it;
	}
	cout<<endl;
}

int main()
{

	return 0;
}
