// Stack Dynamic: Size determined at runtime
let n = parseInt(prompt("Enter size of array:")); 
let arr = new Array(n);

for (let i = 0; i < n; i++) {
    arr[i] = parseInt(prompt(`Enter element ${i + 1}:`));
}

console.log("Stack Dynamic Array Elements:");
console.log(arr);
