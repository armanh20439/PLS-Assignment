// Fixed Heap Dynamic: Allocating fixed array (simulating heap in JS)
let arr = new Array(5).fill(0); // Fixed size 5, filled with 0

// Example: Fill the array
for (let i = 0; i < 5; i++) {
    arr[i] = i + 1;
}

console.log("Fixed Heap Dynamic Array Elements:");
console.log(arr);
