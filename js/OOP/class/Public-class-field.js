class customer {
    //field
    firstName;
    lastName;
    blance = 0;

    constructor(firstName, lastName, blance){
        this.firstName = firstName;
        this.lastName = lastName;
        this.blance = blance;
    }

    sayHello(){

    }
}

const eko = new customer ("Othinus", "Iliade", 200000)
console.log(eko)