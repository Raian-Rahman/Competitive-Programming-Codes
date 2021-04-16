import tensorflow as tf
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import MinMaxScaler

def data_preprocess():
    data = pd.read_csv("C:\\Users\\Pranon Rahman\\Desktop\\prostate-cancer\\Prostate_Cancer.csv", header=[0])

    data = data.drop(['id'], axis=1)

    data['diagnosis_result'] = data['diagnosis_result'].map({'B': 0, 'M': 1})

    data = data.dropna()
    raw_data = data.values

    print(raw_data.shape)

    return raw_data

def data_split(raw_data):
    datax = np.delete(raw_data, 0, axis=1)
    datay = raw_data[:, 0]
    datay = np.reshape(datay, (-1, 1))

    scaler_x = MinMaxScaler()
    scaler_y = MinMaxScaler()

    datax = scaler_x.fit_transform(datax)
    datay = scaler_y.fit_transform(datay)

    train_data, test_data, train_labels, test_labels = train_test_split(datax, datay)

    print(train_data)
    print(train_labels)

    return train_data, test_data, train_labels, test_labels


def build_model(train_dataset):
    model = tf.keras.Sequential([
        tf.keras.layers.Dense(9, activation='relu', input_shape=train_dataset.shape[1:]),
        tf.keras.layers.Dense(1, activation='sigmoid')
    ])

    model.compile(optimizer='adam', loss='binary_crossentropy', metrics=['accuracy'])
    return model


final = data_preprocess()
train_data, test_data, train_labels, test_labels = data_split(final)


model = build_model(train_data)
history = model.fit(train_data, train_labels, epochs=50, batch_size=1)

pd.DataFrame(history.history).plot(figsize=(8,5))
plt.grid(True)
plt.gca().set_ylim(0, 1)
plt.show()

model.evaluate(test_data, test_labels)

prediction = model.predict(test_data[13].reshape((1, 8, )))
print(np.argmax(prediction))
print(test_labels[13])
