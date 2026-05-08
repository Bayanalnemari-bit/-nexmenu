# -nexmenu
A restaurant ordering system developed using C++ to organize menu items, manage customer selections, and improve the ordering process.
<!DOCTYPE html>
<html>
<head>
    <title>Fast Food Ordering System</title>

    <style>
        body {
            font-family: Arial;
            padding: 20px;
        }

        .item {
            margin: 10px 0;
        }

        button {
            padding: 5px 10px;
            margin-left: 10px;
        }

        #bill {
            margin-top: 20px;
            border-top: 1px solid #000;
            padding-top: 10px;
        }
    </style>
</head>

<body>

<h1> Fast Food Menu</h1>

<div class="item">Burger - $5 <button onclick="addItem(0)">Add</button></div>
<div class="item">Fries - $2.5 <button onclick="addItem(1)">Add</button></div>
<div class="item">Soda - $1.5 <button onclick="addItem(2)">Add</button></div>
<div class="item">Pizza - $8 <button onclick="addItem(3)">Add</button></div>

<br>

<button onclick="finishOrder()">Finish Order</button>

<div id="bill"></div>

<script>
    const items = ["Burger", "Fries", "Soda", "Pizza"];
    const prices = [5, 2.5, 1.5, 8];
    const quantities = [0, 0, 0, 0];

    function addItem(index) {
        let qty = prompt("Enter quantity for " + items[index]);

        qty = parseInt(qty);

        if (isNaN(qty) || qty <= 0) {
            alert("Invalid quantity");
            return;
        }

        quantities[index] += qty;

        alert(items[index] + " added!");
    }

    function finishOrder() {

        let subtotal = 0;
        let output = "<h2>Order Summary</h2>";

        for (let i = 0; i < items.length; i++) {

            if (quantities[i] > 0) {
                let totalItem = quantities[i] * prices[i];

                output += quantities[i] + " x " + items[i] +
                    " = $" + totalItem + "<br>";

                subtotal += totalItem;
            }
        }

        let tax = subtotal * 0.15;
        let total = subtotal + tax;

        output += "<br>Subtotal: $" + subtotal.toFixed(2);
        output += "<br>Tax (15%): $" + tax.toFixed(2);
        output += "<br><b>Total: $" + total.toFixed(2) + "</b>";

        document.getElementById("bill").innerHTML = output;
    }
</script>

</body>
</html>
