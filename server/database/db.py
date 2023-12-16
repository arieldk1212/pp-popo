from app import app
from decouple import config
from flask_pymongo import PyMongo

app.config["MONGO_URI"] = 'mongodb://' \
                          + config('MONGO_INNITDB_ROOT_USERNAME')+ ':' \
                          + config('MONGO_INNITDB_ROOT_USERNAME') + '@' \
                          + 'mongodb_host' \
                          + ':27017/' \
                          + config('MONGO_INITDB_DATABASE')

mongo = PyMongo(app)
db = mongo.db