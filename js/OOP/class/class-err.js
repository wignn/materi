class ValidError extends Error {
    constructor(message, field) {
      super(message);
      this.field = field;
    }
  }
  
  class CustomMath {
    static sum(...numbers) {
      if (numbers.length === 0) {
        throw new ValidError("There must be at least one number to sum");
      }
  
      let result = 0;
      for (const number of numbers) {
        result += number;
      }
      return result;
    }
  }
  
  try {
    console.log(CustomMath.sum(2 , 1, 1, 1)); // This will throw an error
  } catch (error) {
    if (error instanceof ValidError) {
      console.log(`${error.field} dengan error ${error.message}`);
    } else {
      console.error(error.message); // Handle other errors
    }
  }
  console.log(CustomMath.sum(1, 1, 1, 1, 1, 1)); // Output: 6
  