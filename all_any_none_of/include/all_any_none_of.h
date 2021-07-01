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
 /*
 80% ok, faltou documentar
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
  if(*first==*last){
    return false;
  }
  for(InputIt i=first; i!=last; i++){
    if(p(*i)==false){ //aqui vc pode testar if(!p(*i))
      return false;
    }
  }
  return true;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
  for(InputIt i=first; i!=last; i++){
    if(p(*i)){
      return true;
    }
  }
  return false;  
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
  for(InputIt i=first; i!=last; i++){
    if(p(*i)){
      return false;
    }
  }
  return true;
}

}
#endif
