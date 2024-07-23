/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
   
  let consts= init || 0;
  const increment=function(){
    consts++;
    return consts;
  }
  const decrement=function(){
    consts--;
    return consts;
  }
  const reset=function(){
    consts = init || 0;
    return consts;
  }
 return {increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */