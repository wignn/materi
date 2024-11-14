class Math {
  static sum(...numbers) {
    if (numbers.length === 0) {
      throw new Error("There must be at least one number to sum");
    }

    let result = 0;
    for (const number of numbers) {
      result += number;
    }
    return result;
  }
}

try {
  console.log(Math.sum(1, 1, 1, 1, 1, 1)); // This will throw an error
  console.log("ini try");
} catch (error) {
  console.error(error.message); // Handle the error and display the message
} finally {
  console.log("This will always run, even if there is an error");
}
