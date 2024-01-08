// Write a js program to create a word-meaning dictionary of 5 words
const wordDictionary = {
    "apple": "a round fruit with red or green skin and a whitish interior",
    "computer": "an electronic device for storing and processing data",
    "ocean": "a large body of saltwater that covers most of the Earth's surface",
    "mountain": "a large landform that rises prominently above its surroundings",
    "book": "a set of written or printed pages, usually bound with a protective cover"
  };
  
  // Display the word-meaning dictionary
  console.log("Word-Meaning Dictionary:");
  for (const word in wordDictionary) {
    console.log(`${word}: ${wordDictionary[word]}`);
  }
  