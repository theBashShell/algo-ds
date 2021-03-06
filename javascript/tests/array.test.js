const CustomArray = require("../array");

const myArray = new CustomArray();

test("size of new array", () => {
  expect(myArray.size).toBe(0);
});

test("3rd item is 32", () => {
  myArray.push(100);
  myArray.push(20);
  myArray.push(32);
  myArray.push(323);
  myArray.push(13);
  myArray.pop();
  expect(myArray.at(2)).toBe(32);
});

test("capacity to be 5", () => {
  expect(myArray.capacity).toBe(5);
});

test("size to be 4", () => {
  expect(myArray.size).toBe(4);
});

test("find 32", () => {
  expect(myArray.find(32)).toBe(2);
  myArray.pop();
  expect(myArray.find(13)).toBe(-1);
  expect(myArray.at(0)).toBe(100);
});
