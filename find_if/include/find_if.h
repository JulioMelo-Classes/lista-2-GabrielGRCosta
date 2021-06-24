#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
<<<<<<< HEAD
  for(InputIt i=first; i!=last; i++){
    /*if(p(*first)==false){
        return last;
    }*/
    if(p(*i)){ 
      return i;
    }
  }
  return last;  
=======
    while(first!=last){
      if(p(*first)==false){
        return last;
      }
      else{ 
        return first;
      }
}
>>>>>>> 33826b73580ae20786e8828ddac0c4d7d8acc494

}
#endif
