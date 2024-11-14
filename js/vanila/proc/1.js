let display = document.getElementById('display');
let displayValue = '0';

function clearDisplay() {
    displayValue = '0';
    display.innerText = displayValue;
}

function appendToDisplay(value) {
    if (displayValue === '0') {
        displayValue = value;
    } else {
        displayValue += value;
    }
    display.innerText = displayValue;
}

function calculateResult() {
    try {
        displayValue = eval(displayValue).toString();
        display.innerText = displayValue;
    } catch (error) {
        displayValue = 'Error';
        display.innerText = displayValue;
    }
}
