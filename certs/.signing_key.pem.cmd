cmd_certs/signing_key.pem := openssl req -new -nodes -utf8 -sha512 -days 36500 -batch -x509 -config certs/x509.genkey -outform PEM -out certs/signing_key.pem -keyout certs/signing_key.pem  2>&1
