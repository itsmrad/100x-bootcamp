const input = { food: [10, 20, 30], travel: [5, 15], bills: [40, 60] }

// Replace each array with its sum
input.food = input.food.reduce((sum, value) => sum + value, 0)
input.travel = input.travel.reduce((sum, value) => sum + value, 0)
input.bills = input.bills.reduce((sum, value) => sum + value, 0)

console.log(input)

// Example 1: Sum all numbers in an array
const numbers = [1, 2, 3, 4, 5]
// The reduce method goes through each number and adds it to the sum
const sum = numbers.reduce((accumulator, currentValue) => accumulator + currentValue, 0)
console.log('Sum:', sum) // Output: 15

// Example 2: Multiply all numbers in an array
const nums = [2, 3, 4]
// The reduce method multiplies each number with the accumulator
const product = nums.reduce((acc, val) => acc * val, 1)
console.log('Product:', product) // Output: 24

// Example 3: Find the maximum value in an array
const values = [10, 5, 8, 20, 3]
// The reduce method compares each value and keeps the maximum
const max = values.reduce((acc, val) => (val > acc ? val : acc), values[0])
console.log('Max:', max) // Output: 20

// Example 4: Count occurrences of items in an array
const fruits = ['apple', 'banana', 'apple', 'orange', 'banana', 'apple']
// The reduce method builds an object with counts for each fruit
const count = fruits.reduce((acc, fruit) => {
  acc[fruit] = (acc[fruit] || 0) + 1
  return acc
}, {})
console.log('Fruit count:', count) // Output: { apple: 3, banana: 2, orange: 1 }

// Example 5: Flatten an array of arrays
const arrays = [[1, 2], [3, 4], [5]]
// The reduce method concatenates each sub-array into a single array
const flat = arrays.reduce((acc, arr) => acc.concat(arr), [])
console.log('Flattened:', flat) // Output: [1, 2, 3, 4, 5]