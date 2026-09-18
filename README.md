# Laboratory Activity 2: Control a Lamp's Brightness
**Course:** BCA188  
**Student Name:** Michael O. Cadiz

## Program Description
This activity demonstrates the Input -> Decision -> Output workflow using Arduino variables and functions to simulate a lamp brightness controller without hardware components.

## Results Table

| Brightness setting | Switch state | Expected lamp brightness | Observed output |
| :---: | :---: | :---: | :--- |
| 0 | On | 0 | Brightness setting: 0, Lamp brightness: 0 |
| 50 | On | 50 | Brightness setting: 50, Lamp brightness: 50 |
| 100 | On | 100 | Brightness setting: 100, Lamp brightness: 100 |
| 0 | Off | 0 | Brightness setting: 0, Lamp brightness: 0 |
| 50 | Off | 0 | Brightness setting: 50, Lamp brightness: 0 |
| 100 | Off | 0 | Brightness setting: 100, Lamp brightness: 0 |

## Function Explanation: `getLampBrightness`
- **Parameters:**
  - `bool switchOn`: Represents the switch power state (`true` for ON, `false` for OFF).
  - `int brightnessSetting`: Represents the desired brightness level (0–100).
- **Return Value:**
  - Returns an `int`. When `switchOn` is `true`, it returns `brightnessSetting`. When `switchOn` is `false`, it returns `0`.

## Answers to Coding Check

1. **In `int brightnessSetting = 75;`, identify the data type, variable name, and initial value. How would you change the value to 50?**
   - Data type: `int`
   - Variable name: `brightnessSetting`
   - Initial value: `75`
   - To change to 50: Assign `brightnessSetting = 50;` or change the declaration to `int brightnessSetting = 50;`.

2. **Why is `bool` suitable for `switchOn`, while `int` is suitable for `brightnessSetting`?**
   - `bool` only holds two values (`true`/`false`), which matches a switch's ON/OFF states.
   - `int` holds whole numbers across a continuous range, which matches numeric brightness settings (0 to 100).

3. **Predict the output when `brightnessSetting` is 80 and `switchOn` is `false`.**
   - Output:
     ```text
     Brightness setting: 80
     Lamp brightness: 0
     ```

4. **Are `switchOn` and `switchon` the same variable? Explain.**
   - No, C++ is case-sensitive, so `switchOn` and `switchon` are treated as two distinct identifiers.

5. **What values are passed to `getLampBrightness()`, and what does it return?**
   - Passed: A boolean `switchOn` and an integer `brightnessSetting`.
   - Returned: An integer representing lamp brightness (`brightnessSetting` if ON, `0` if OFF).

6. **If `lampBrightness` is declared inside `setup()`, can `loop()` access it directly? Explain.**
   - No. `lampBrightness` has local scope within `setup()`. Local variables are not accessible outside their declaring function.
