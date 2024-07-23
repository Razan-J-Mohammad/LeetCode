function createHelloWorld(){
   return function(){
    return "Hello World";
   };
}

const a = createHelloWorld();
console.log(a());