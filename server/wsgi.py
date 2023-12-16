from app import app
from decouple import config

if __name__ == '__main__':
  app.run(host=config('FLASK_SERVER_ADDR'), debug=config('debug'), port=config('FLASK_SERVER_PORT'))