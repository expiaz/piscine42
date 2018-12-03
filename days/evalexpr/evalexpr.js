function getOperator(operator) {
    switch (operator) {
        case '+': return (a, b) => a + b
        case '-': return (a, b) => a - b
        case '*': return (a, b) => a * b
        case '/': return (a, b) => a / b
    }
}

/**
 * Parse a calculus expression
 * Accepted operators are '+-/*'
 * Accepted numbers are 0-9
 * Parenthesis are accepted
 * e.g. a + (b * c)
 * 
 * @param {String} input 
 * @param {Number} operande 
 * @param {String} operator 
 * base operande & operator for parsing.
 * To make it easier to parse '(' at index 0
 * we'll use a default operande & operator
 * as if parsing had already started
 * 
 * we could have used '+' & '0' (0 + smth) but
 * we'll use '*' (& '1') to avoid infinite call stack when
 * the next operator have a bigger priority
 * 
 * @returns {{result: {Number}, index: {Number}}} the evaluated result of
 * the expression with the stoped index in the input string
 */
function evalexpr(input, operande = 1, operator = '*') {
    var token
    var nextOperande
    var nextOperator
    var i = 0
    var len = input.length

    while (i < len)
    {
        // parse next operande
        // e.g. 'a + b * c' => we'll parse 'a'
        token = input[i++]
        // edge case, a '(' can replace an operande in the expression
        // e.g. (a + (b * c))
        if (token === '(') {
            // when we return from a parenthese
            // the next token is an operator
            // as in '(a + b) * c', after 'b)', there's '*'
            const { result, index } = evalexpr(input.substring(i))
            nextOperande = result
            i += index
        } else {
            let start = i - 1;
            let float = false
            while (input[i] >= '0' && input[i] <= '9')
                i++
            if (input[i] === '.')
            {
                float = true
                i++
                while (input[i] >= '0' && input[i] <= '9')
                    i++
            }
            nextOperande = (float ? parseFloat : parseInt)(input.substring(start, i), 10)
        }

        // parse next operator
        // e.g. 'a + b * c' => we'll parse '+'
        token = input[i++]
        // ensure that the expression isn't finished
        // e.g. 'a + b * c' => we could be after 'c'
        if (typeof token === 'string') {
            // edge case, a ')' can replace an operator
            // e.g. '(a + b) * c' after 'b' there isn't an operator directly
            if (token === ')') {
                // evaluate the last expressioon of the parenthese
                // then break to return from the parenthese
                operande = getOperator(operator)(operande, nextOperande)
                break
            }

            nextOperator = token
            if ((operator === '+' || operator === '-') &&
                (nextOperator === '*' || nextOperator === '/')) {
                // apply operator priority
                const { result, index } = evalexpr(input.substring(i), nextOperande, nextOperator)
                nextOperande = result
                i += index

                // fetch next operator to restore normal state
                // e.g. 'a + b * c - d' => a + parse(b * c) - d
                // => the next token is '-'
                nextOperator = token[i++]
            }
        }

        // evaluate the operande and operator for next interation
        operande = getOperator(operator)(operande, nextOperande)
        operator = nextOperator
    }

    return {
        result: operande,
        index: i
    }
}
