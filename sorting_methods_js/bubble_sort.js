let bubbleSort = (inputArray)=> {
	let len = inputArray.length;
	let swapped;
	for(let i = 0; i < len; i++){
		swapped = false;
		for(let j = 0; j < len - i - 1; j++){
			if(inputArray[j] > inputArray[j + 1]){
				let tmp = inputArray[j];
				inputArray[j] = inputArray[j + 1];
				inputArray[j + 1] = tmp;
				swapped = true;
			}
		}
		if(swapped == false){
			break;
		}
	}
	return inputArray;
}
let array = [3, 5, 1, 4, 8, 2];
console.log(`Unsorted array: ${array}`);
console.log(`Sorted array: ${bubbleSort(array)}`);