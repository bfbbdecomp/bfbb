import gimport.extract_info
import gimport.import_info

if __name__ == "__main__":
    extracted_info = gimport.extract_info.extract_info()
    print("Importing info into Ghidra")
    gimport.import_info.import_info(currentProgram(), extracted_info)
