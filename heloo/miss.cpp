<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, user-scalable=no">
    <title>Proposal Form</title>
    <style>
        body {
            margin: 0;
            padding: 0;
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            min-height: 100vh;
            background-color: white;
            font-family: 'Helvetica', sans-serif;
            overflow: hidden;
        }

        h1 {
            color: black;
            margin-bottom: 20px;
            text-align: center;
            padding: 0 10px;
        }

        .button {
            padding: 15px 30px;
            font-size: 24px;
            cursor: pointer;
            border: none;
            border-radius: 10px;
            position: absolute;
            transition: all 0.3s ease;
        }

        #yes {
            background-color: blue;
            color: white;
            left: 20%;
            top: 60%;
        }

        #no {
            background-color: red;
            color: white;
            left: 60%;
            top: 60%;
        }

        #thank-you {
            display: none;
            font-size: 28px;
            color: green;
            text-align: center;
            padding: 20px;
        }

        @media (max-width: 600px) {
            .button {
                padding: 12px 20px;
                font-size: 20px;
            }

            h1 {
                font-size: 20px;
            }

            #thank-you {
                font-size: 24px;
            }
        }
    </style>
</head>
<body>
    <h1>Can you be my girlfriend?</h1>
    <button id="yes" class="button">YES</button>
    <button id="no" class="button">NO</button>
    <div id="thank-you">Congratulation my love</div>

    <script>
        const yesBtn = document.getElementById('yes');
        const noBtn = document.getElementById('no');
        const thankYouMsg = document.getElementById('thank-you');

        // Flashing background effect
        function flashBackground() {
            document.body.style.backgroundColor = 
                document.body.style.backgroundColor === 'white' ? 'yellow' : 'white';
            setTimeout(flashBackground, 500);
        }
        flashBackground();

        // YES button click event
        yesBtn.addEventListener('click', () => {
            yesBtn.style.display = 'none';
            noBtn.style.display = 'none';
            thankYouMsg.style.display = 'block';
            setTimeout(() => alert('Mahal na mahal kita rachelle, ayie sinagot mo ako hehehe, tayo na ah!'), 2000);
        });

        // NO button click event (move randomly)
        noBtn.addEventListener('click', () => {
            const newX = Math.floor(Math.random() * (window.innerWidth - noBtn.offsetWidth));
            const newY = Math.floor(Math.random() * (window.innerHeight - noBtn.offsetHeight));
            noBtn.style.left = `${newX}px`;
            noBtn.style.top = `${newY}px`;
        });
    </script>
</body>
</html>
