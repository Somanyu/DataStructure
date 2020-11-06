<?php
class Stack {
    protected $stack;
    protected $size;

    public function __construct($size = 50) {

        // Initialize stack
        $this->stack = array();
        $this->size = $size;
    }

    // Pushes the element
    public function push($data) {

        if(count($this->stack) < $this->size) {
            array_unshift($this->stack, $data);
        }

        else {
            throw new RuntimeException("Stack Overflow");
        }
    }

    // Pops the element from stack
    public function pop() {
        if (empty($this->stack)) {
            throw new RuntimeException("Stack Underflow");
        }
        else {
            return array_shift($this->stack);
        }
    }
    
}

$stack = new Stack();
$stack->push(40);
$stack->push(345);
$stack->push(32);

echo $stack->pop();

$stack->push(78);
$stack->push(66);

echo $stack->pop();
?>
