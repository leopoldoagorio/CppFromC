//copy routine with two inputs of diferent type
template<class T1, class T2> //unusual, useful in this example
void copy(const T1 source[], const T2 destination[], int size){
    for(int i=0; i<size; ++i)
        destination[i] = static_cast<T2>(source[i]); //safe cast
}

//type casts now have more options:
//static_cast is the most safe and usual. 
//reinterpret_cast es unsafe, evitarlo
//dynamic_cast used with classes
//const_cast cast away const-ness