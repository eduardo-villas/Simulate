#ifndef SIMULATE_ANNEALING_SET_H_INCLUDED
#define SIMULATE_ANNEALING_SET_H_INCLUDED

class Line;
class Column;

class Set
{
public:
   Set();

private:
   Line **line;
   Column **column;

};

#endif // SIMULATE_ANNEALING_SET_H_INCLUDED
