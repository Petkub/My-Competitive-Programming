# We have two lists:
# 1) Patient[] which has the names of each patient.
# 2) Readings[] which has temperature (index 0) and pulse (index 1) for each patient.
#
# Hospital numbers go from 1 to 1000.
# In Python, lists start at 0, so we subtract 1 from hospital_number to find the right index.

def check_patient_readings(hospital_number):
    """
    This function checks a patient's temperature and pulse.
    It prints the patient's name and shows if their readings are normal or not.
    """
    # Make sure the hospital_number is in the correct range.
    if hospital_number < 1 or hospital_number > 1000 or hospital_number > len(Patient):
        print("Error: hospital number is not valid.")
        return
    
    # Subtract 1 to match the index in Python.
    index = hospital_number - 1
    
    # Get the patient's name.
    patient_name = Patient[index]
    
    # Get the temperature and pulse for this patient.
    temperature = Readings[index][0]
    pulse = Readings[index][1]
    
    # Print the patient's name.
    print("Patient Name:", patient_name)
    
    # Set the correct ranges for temperature and pulse.
    # Temperature should be between 31.6 and 37.2 (inclusive).
    # Pulse should be between 55 and 100 (inclusive).
    temperature_ok = (31.6 <= temperature <= 37.2)
    pulse_ok = (55 <= pulse <= 100)
    
    # If both are okay, say they are normal.
    if temperature_ok == True and pulse_ok == True:
        print("Normal readings.")
        return
    
    # If both are not okay, give a severe warning.
    if temperature_ok == False and pulse_ok == False:
        print("Severe warning.")
        print("Both temperature and pulse are out of range.")
        return
    
    # If only one is out of range, show which one.
    if temperature_ok == False:
        print("Warning: temperature is out of range.")
    elif pulse_ok == False:
        print("Warning: pulse is out of range.")
    
    # End of the function.
    return
