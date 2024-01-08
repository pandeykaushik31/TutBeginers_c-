// write a js program to find whether a number is divisible by either 2 or 3

const myNumber = prompt("enter the number");

if (myNumber % 2 === 0 ) {
  console.log(`${myNumber} is divisible by  2. `);
} else if(myNumber % 3 === 0){
   console.log(`${myNumber} is divisible by  3. `); 
    
} else {
  console.log(`${myNumber} is not divisible by either 2 or 3.`);
}
