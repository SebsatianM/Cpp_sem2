std::ostream& operator<< (std::ostream &F,X const& arg)
{

    return F << arg;
}

std::ostream& operator<< (std::ostream &F,X const& arg) //Brakowało odwołania się do zmiennej _X
{

    return F << arg._X;
}