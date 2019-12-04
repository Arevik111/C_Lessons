let selectionSort = (inputArr) => {
	let min_index;
	let n = inputArr.length;
	for(let i  = 0; i < n - 1; i++){
		min_index = i;
		for(let j = i + 1; j < n; j++){
			if(inputArr[j] < inputArr[min_index]){
				min_index = j;
			}
		}
		let temp = inputArr[min_index];
		inputArr[min_index] = inputArr[i];
		inputArr[i] = temp;
	}
	return inputArr;
}
let array = [33, 53, 12, 4445, -8, 0, 2];
console.log(`Unsorted array: ${array}`);
console.log(`Sorted array: ${selectionSort(array)}`);