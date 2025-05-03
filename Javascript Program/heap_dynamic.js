// Heap Dynamic: Array that grows and shrinks at runtime
let arr = [];

let n = parseInt(prompt("Enter number of elements:"));
for (let i = 0; i < n; i++) {
    let val = parseInt(prompt(`Enter element ${i + 1}:`));
    arr.push(val); // Dynamically add elements
}

console.log("Heap Dynamic Array Elements:");
console.log(arr);
