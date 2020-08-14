var myMethods = require("./index")

test('Problem 1 test: Expect function to return a number', () => {
	expect(myMethods.numAttachedDisplays()).toEqual(expect.any(Number));
});

test('Problem 1 test: Expect function to return a number greater than 0', () => {
	expect(myMethods.numAttachedDisplays()).toBeGreaterThan(0);
});

test('Problem 4 test: Expect function to return a number', () => {
	expect(myMethods.numAttachedDisplays()).toEqual(expect.any(Number));
});

test('Problem 4 test: Expect function to return a number greater than 0', () => {
	expect(myMethods.numAttachedDisplays()).toBeGreaterThan(0);
});

