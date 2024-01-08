// Function declaration
function greet(name) {
    return `Hello, ${name}!`;
  }
  
  // Function expression
  let multiply = function (a, b) {
    return a * b;
  };
  
  // Arrow function
  let square = (num) => num * num;
  
  console.log(greet("Alice"));
  console.log(multiply(3, 4));
  console.log(square(5));
  