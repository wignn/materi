// Function that throws an error
function name() {
    throw new Error("There must be at least one number to sum");
    let nasbn
    let sum = 1;
}

try {
    // Attempt to call the function that may throw an error
    console.log(sum)
} catch (error) {
    console.error(error.message);
}
