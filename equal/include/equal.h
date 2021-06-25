#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
using namespace std;

namespace graal {
//
/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
  /*if(distance(first1,last1) != distance(first2,first2+    (last1-first1))){
    return false;
  }*/
  InputIt2 b = first2;
  for(InputIt1 i=first1; i!=last1; i++){
    if(eq(*i,*b)==false){
      return false;
    }
    b++;  
  }
  return true;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,InputIt2 first2, InputIt2 last2,Equal eq )
{
  /*if(std::distance(first1,last1) != std::distance(first2,last2))
  { 
    return false;
  }*/
  InputIt2 b = first2;
  for(InputIt1 i=first1; i!=last1; i++){
    if(eq(*i,*b)==false){
      return false;
    }
    b++;
  }
 return true;
}
}
#endif
