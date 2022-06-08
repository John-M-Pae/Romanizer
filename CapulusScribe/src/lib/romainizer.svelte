<script>
    const numeralSymbols = [
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    ];
    const numeralDigits = [
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    ];

    const numberOfNumerals = numeralDigits.length;

    function toNumeral(value) {
        if (value === 0) {
            return "Z";
        }
        else {
            return cascade(value);
        }
    }

    function cascade (value) {
        let result = "";

        for (let index = 0; index < numberOfNumerals; index++) {
           while (value >= numeralDigits[index]) {
               value -= numeralDigits[index];
               result += numeralSymbols[index]
           }
        }

        return result;
    }

    let userValue = null;
    $: userNumeral = toNumeral(userValue);
</script>

<label for="userValue">Please enter your favorite number:</label>
<input type=number id="userValue" bind:value={userValue} min={0}>

{#if userValue !== null}
    <p>Your new numeral is: {userNumeral}</p>
{/if}

<style>
    p {
        max-width: 14rem;
        margin: 1rem auto;
        line-height: 1.35;
    }

    @media (min-width: 480px) {
        p {
        max-width: none;
        }
    }
</style>