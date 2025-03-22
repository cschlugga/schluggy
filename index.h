<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome</title>
    <style>
        body {
            background-image: url('https://www.dictionary.com/e/wp-content/uploads/2019/04/chungus.jpg');
            background-size: cover;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }

        .button {
            display: inline-block;
            margin: 20px;
            padding: 10px 20px;
            background-color: white;
            color: red;
            font-size: 1.5em;
            text-decoration: none;
            cursor: pointer;
            border-radius: 10px;
            transition: background-color 0.3s;
            user-select: none;
            pointer-events: auto;
        }

        .button:hover {
            background-color: white;
            color: red;
        }
    </style>
    <script>
        // Helper function to decode URLs
        function decodeUrl(encodedUrl) {
            try {
                return atob(encodedUrl); // Base64 decode only
            } catch (e) {
                console.error("Error decoding URL:", e);
                return null;
            }
        }

        document.addEventListener('DOMContentLoaded', () => {
            const encodedLinks = [
                "aHR0cHM6Ly93d3cueW91dHViZS5jb20vd2F0Y2g/dj1kUTR3djlXZ1hjUQ==",  // YouTube URL (Rickroll)
                "aHR0cHM6Ly9saW5rZWRpbi5jb20vaW4vYXJtYW5kby1jYWJyZXJhLTA4NzI1OTQ3",  // LinkedIn URL
                "aHR0cHM6Ly93d3cueW91dHViZS5jb20vd2F0Y2g/dj1kUTR3djlXZ1hjUQ=="   // YouTube URL (Rickroll)
            ];

            document.querySelectorAll('.button').forEach((button, index) => {
                button.addEventListener('click', (event) => {
                    event.preventDefault();
                    alert('I told you not to click!');

                    const url = decodeUrl(encodedLinks[index]);

                    if (url) {
                        setTimeout(() => {
                            window.location.href = url;
                        }, 500);
                    } else {
                        alert("Failed to decode the link!");
                    }
                });
            });
        });

        // Disable right-click and text selection
        document.addEventListener('contextmenu', event => event.preventDefault());
        document.addEventListener('selectstart', event => event.preventDefault());
    </script>
</head>
<body>
    <div class="button">DO NOT CLICK</div>
    <div class="button">DO NOT CLICK</div>
    <div class="button">DO NOT CLICK</div>
</body>
</html>
