var myMethods = require("./index")

test('Problem 1 test: Expect function to return a number', () => {
	expect(myMethods.numAttachedDisplays()).toEqual(expect.any(Number));
});

test('Problem 1 test: Expect function to return a number greater than 0', () => {
	expect(myMethods.numAttachedDisplays()).toBeGreaterThan(0);
});

test('Problem 2 test: Expect function to return true', () => {
	expect(myMethods.requestDisplaySleep()).toBe(true);
});

test('Problem 3 test: Expect function to return true to make sure it passed the function', () => {
	expect(myMethods.requestDisplayWake()).toBe(true);
});

test('Problem 4 test: Expect function to return a number', () => {
	expect(myMethods.numAttachedDisplays()).toEqual(expect.any(Number));
});

test('Problem 4 test: Expect function to return a number greater than 0', () => {
	expect(myMethods.numAttachedDisplays()).toBeGreaterThan(0);
});

