import matplotlib.pyplot as plt

# Frequencies and corresponding hearing thresholds (all 45 dB)
frequencies = [500, 1000, 2000, 4000]
hearing_levels = [30, 30, 35, 25]

# Plotting the audiogram
plt.figure(figsize=(8, 5))
plt.plot(frequencies, hearing_levels, marker='o', linestyle='-', color='blue', label='Hearing Threshold')
plt.gca().invert_yaxis()  # Invert y-axis: higher dB means worse hearing
plt.xticks(frequencies)
plt.yticks(range(0, 121, 10))
plt.grid(True, linestyle='--', alpha=0.6)
plt.title('Audiogram: 45 dB Loss Across Frequencies')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Hearing Level (dB HL)')
plt.axhline(y=25, color='green', linestyle='-', label='Normal Limit (25 dB)')
plt.legend()
plt.tight_layout()
plt.show()
