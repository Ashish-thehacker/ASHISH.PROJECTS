# Install Flask and Requests:
# pip install Flask requests

#Create a file named app.py:
from flask import Flask, jsonify, request
import requests

app = Flask(__name__)

# Dummy user credentials
USERNAME = "Ashish Darekar"
PASSWORD = "Ashish1@"

# REST Countries API URL
REST_COUNTRIES_API = "https://restcountries.com/v3.1/all"

# Dummy auth token (for demonstration purposes only)
AUTH_TOKEN = "9685433481"

# Helper function to validate authentication
def authenticate(username, password):
    return username == USERNAME and password == PASSWORD

# Helper function to get country data
def get_country_data(name):
    response = requests.get(f"{REST_COUNTRIES_API}/{name}")
    if response.status_code == 200:
        return response.json()
    else:
        return None

# Middleware to check authentication
@app.before_request
def check_auth():
    if request.endpoint != 'auth' and request.endpoint != 'static':
        auth_token = request.headers.get('Authorization')
        if not auth_token or auth_token != f"Bearer {AUTH_TOKEN}":
            return jsonify({"error": "Authentication failed"}), 401

# Auth endpoint to generate a valid auth token
@app.route('/auth', methods=['POST'])
def auth():
    data = request.json
    username = data.get('username')
    password = data.get('password')
    if authenticate(username, password):
        return jsonify({"token": AUTH_TOKEN})
    else:
        return jsonify({"error": "Authentication failed"}), 401

# Endpoint to fetch detailed information about a specific country
@app.route('/country/<name>', methods=['GET'])
def get_country_info(name):
    country_data = get_country_data(name)
    if country_data:
        return jsonify(country_data)
    else:
        return jsonify({"error": "Country not found"}), 404

# Endpoint to retrieve a list of countries based on filters and sorting
@app.route('/countries', methods=['GET'])
def get_countries():
    filters = request.args
    response = requests.get(REST_COUNTRIES_API, params=filters)
    
    if response.status_code == 200:
        countries = response.json()
        return jsonify(countries)
    else:
        return jsonify({"error": "Failed to retrieve country data"}), 500

if __name__ == '__main__':
    app.run(debug=True)
#Create a README.md file with instructions and curl requests:
# Country API

# This is a simple Flask API that provides information about countries using the REST Countries API.

## Instructions

# 1. Install required packages:
# 
# ```bash
# pip install Flask requests
# 
#Run the application:
# python app.py

#Authenticate to obtain a token:

curl -X POST -H "Content-Type: application/json" -d '{"username":"Ashish","password":"Ashish1@"}' http://127.0.0.1:5000/auth

#Use the obtained token for subsequent requests:
export TOKEN=your_obtained_token

#Use the obtained token for subsequent requests:
# curl -H "Authorization: Bearer $TOKEN" 
http://127.0.0.1:5000/country/{country_name}

#Fetch detailed information about a specific country:
# curl -H "Authorization: Bearer $TOKEN"
http://127.0.0.1:5000/country/{country_name}

#Retrieve a list of countries based on filters and sorting:
# curl -H "Authorization: Bearer $TOKEN" 
http://127.0.0.1:5000/countries?population=1000000&area=100000&language=english&sort=asc&page=1

# API Endpoints
# 1. Authentication
# Endpoint: /auth
# Method: POST
# Request Body:


{
  "username": "Ashish",
  "password": "Ashish1@"
}
# Response:


{
  "token": "ashish10000"
}
# 2. Get detailed information about a specific country
# Endpoint: /country/{country_name}
# 
# Method: GET
# 
# Headers: Authorization: Bearer {token}
# 
# Response:
# 
# 
   

{
  "name": "India",
  "capital": "Delhi",
  
}


# 3. Retrieve a list of countries based on filters and sorting
# Endpoint: /countries
# 
# Method: GET
# 
# Headers: Authorization: Bearer {token}
# 
# Query Parameters:
# 
# population: Population filter
# area: Area filter
# language: Language filter
# sort: Sorting order (asc or desc)
# page: Page number for pagination
# Response:
# 
# json


[
  {
    "name": "India",
    
  },
  {
    "name": "Japan",
    
  },
  
]



# Make sure to replace placeholders like `{country_name}` and `{your_obtained_token}` with actual values. This is a basic example, and you might want to add more features, error handling, and security measures based on your specific 
