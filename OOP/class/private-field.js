class Counter {
    #Counter = 0
    
    increment(){
        this.#Counter ++;
    }
    decrement(){
        this.#Counter--;
    }

    get (){
        return this.#Counter;
    }
}

const counter = new Counter ();
counter.increment();
counter.increment();
counter.increment();
counter.increment();
counter.increment();
counter.increment();
counter.increment();
counter.increment();

counter.decrement();

console.log(counter.get())