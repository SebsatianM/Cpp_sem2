#include "stos.h"
#include <ostream>

Stos::Stos(Stos const& rhs) : _size(rhs._size)
{
	if (rhs.empty())
	{
		_pSzczyt = nullptr; 
	}
	else 
	{
		_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, nullptr);
		Ogniwo* temp = rhs._pSzczyt;
		Ogniwo* copy_start = _pSzczyt;

		while (temp->_p_nastepny != 0)
		{
			temp = temp->_p_nastepny;
			_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, nullptr);
			_pSzczyt = _pSzczyt->_p_nastepny;
		}
		_pSzczyt->_p_nastepny = 0;
		_pSzczyt = copy_start;
	}

}

Stos& Stos::operator = (Stos const& rhs) 
{
	if (this == &rhs)
	{
		return *this;
	}
	delete _pSzczyt;  

	if (rhs.empty())
	{
		_pSzczyt = nullptr; 
									
	}
	delete _pSzczyt;
	Ogniwo* temp = rhs._pSzczyt;
	Ogniwo* copy_start = _pSzczyt;

	while (temp->_p_nastepny != 0)
	{
		temp = temp->_p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane,nullptr);
		_pSzczyt = _pSzczyt->_p_nastepny;
	}
	_pSzczyt->_p_nastepny = 0;
	_pSzczyt = copy_start;

	return *this;
}