int stray(std::vector<int> numbers) {
int i;
for( i=0;i<numbers.size();i++)
if(numbers[i]!=numbers[i+1])
    return numbers[i+1];
}
