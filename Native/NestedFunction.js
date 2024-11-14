function ounter(){
    function inner(){
        console.log("Inner");
    }
    inner()
    inner()
}
ounter() // Inner Inne
// ounter() function is called and it calls inner() function twice. So, it prints "