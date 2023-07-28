# Pre-EFI Initialization(PEI) Phase

## 1.Responsibility
* Initializing some permanent memory complement
* Describing the menory in Hand-Off Blocks (HOBS)
* Describing the firmware volume locations in HOBs
* Passing control into the Driver Execution Environment (DXE) phase
  
### 1.1 Thinnest code.

   In this phase, we intended to be the thinnest amount of code to achieve the ends listed above.  
   Any more sophisticated algorithms or processing should be deferred to the DXE phase of execution.

### 1.2 Other responsibilities
* Crisis recovery 
  The PEI phase should reside in some small, fault-tolerant block of the firmware store. As a result,
  it is imperative to keep the footprint of the PEI phase as small as possible.
* resume from the S3 sleep state

## 2.Design

### 2.1 Consists

* Some core code known as the PEI Foundation, it's responsible for the following:
  * Successfully dispatching PEIMs
  * Maintaining the boot mode
  * Initialzing permanent memory
  * Invoking the Driver Execution Environment (DXE) loader
* PEI Dispatcher
* Specialized plug-ins known as Pre-EFI Initialization Modules (PEIMs)
  
## 2.2 Actions

* Locating ,validating and dispatching PEIMs
* Facilitaing communication between PEIMs
* Providing handoff data to subsequent phases
  
## 2.3 Services

* PPI (PEIM-to-PEIM Interface)
* Boot Mode 
* HOB
* Firmware Volume
* PEI Memory
* Status Code 
* Reset 

## 2.4 Reside in Firmware Volumes