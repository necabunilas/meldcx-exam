var index = require('./build/Release/index');


function numAttachedDisplays() {
    return index.enumAttachedDisplays();
}

function getLastInputTime(){
    return index.getLastInputTime();
}

function requestDisplaySleep(){
    index.requestDisplaySleep();
}

function requestDisplayWake() {
    index.requestDisplayWake();
}

console.log("Number of monitors: " + numAttachedDisplays());
console.log("Last input time: " + getLastInputTime() + " ms");

requestDisplaySleep();
requestDisplayWake();