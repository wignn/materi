function Employee(name){
    this.name = name;
}

function Manager(name){
    this.name = name;
}
Manager.prototype = Object.create(Employee.prototype);

Manager.prototype.sayHello = function (){
    console.log(`Hello, my name is ${this.name}, a manager.`);
}
Employee.prototype.sayHello = function (){
    console.log(`Hello, my name is ${this.name}, an employee.`);
}

const emp = new Employee("Joko");
emp.sayHello();

const mgr = new Manager("Inyee");
mgr.sayHello();

console.log(Manager);
