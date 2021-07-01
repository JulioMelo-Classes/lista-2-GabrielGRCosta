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
 não vou considerar.
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
  InputIt b=first+1;
  for(InputIt i=first; i!=last; i++){
    if(!eq(*b,*i)){
      *b+=*i;
    }
  }  
  return b++; //realmente não entendi, vc retorna b++, mas não faz mudanças em b, apenas no seu conteúdo. 
}

}
#endif
