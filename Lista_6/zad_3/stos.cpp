#include "stos.h"
#include <iostream>

Stos::Stos(Stos const& pom) : _size(pom._size)
{
	_pSzczyt = new Ogniwo(pom._pSzczyt->_dane, 0);
	Ogniwo* temp = pom._pSzczyt;
	Ogniwo* copy_start = _pSzczyt;

	while (temp->_p_nastepny != 0)
	{
		temp = temp->_p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, _pSzczyt->_p_nastepny);
		_pSzczyt = _pSzczyt->_p_nastepny;
	}
	_pSzczyt->_p_nastepny = 0;
	_pSzczyt = copy_start;

}
std::ostream& operator <<(std::ostream& os, const Stos& s)
{
	Ogniwo* wierzcholek = s._pSzczyt;
	while (wierzcholek != 0)
	{
		os << wierzcholek->_dane << ",\t ";
		wierzcholek = wierzcholek->_p_nastepny;
	}
	return os;
}
Stos& Stos::operator = (Stos const& rhs)
{
	if (this == &rhs)
		return *this;
	else
	{
		delete[] this->_pSzczyt;

		Ogniwo* temp = rhs._pSzczyt;
		Ogniwo* kopia_poczatek = _pSzczyt;

		while (temp->_p_nastepny != 0)
		{
			temp = temp->_p_nastepny;
			_pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, _pSzczyt->_p_nastepny);
			_pSzczyt = _pSzczyt->_p_nastepny;
		}
		_pSzczyt->_p_nastepny = 0;
		_pSzczyt = kopia_poczatek;
	}
}