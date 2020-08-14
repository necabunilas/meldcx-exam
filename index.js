var index = require('./build/Release/index');


function numAttachedDisplays() {
    return index.enumAttachedDisplays();
}

function getLastInputTime(){
    return index.getLastInputTime();
}

function requestDisplaySleep(){
    return index.requestDisplaySleep();
}

function requestDisplayWake() {
    return index.requestDisplayWake();
}


console.log("Number of monitors: " + numAttachedDisplays());
console.log("Last input time: " + getLastInputTime() + " ms");
console.log("Sleep request result: " + requestDisplaySleep());
console.log("Wake request result: " + requestDisplayWake());


module.exports = {
    numAttachedDisplays,
    requestDisplaySleep,
    requestDisplayWake,
    getLastInputTime
}