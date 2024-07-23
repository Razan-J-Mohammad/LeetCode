/**
 * @param {number} n
 * @return {Function} counter
 */
 let countstart=0;
var createCounter = function(n) {
    countstart=n;
    return function() {
      return countstart++;  
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */