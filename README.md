root@jose-VirtualBox:/home/jose/wazuh/src# python3 build.py -r syscheckd --target server
 <syscheckd>=============== Running RTR checks  ===============<syscheckd> 
 <syscheckd>=============== Running cppcheck    ===============<syscheckd> 

/home/jose/wazuh/src/syscheckd/src/ebpf/src/modern.bpf.c:343:1: error: There is an unknown macro here somewhere. Configuration is required. If SEC is a macro then please configure it. [unknownMacro]
SEC("kprobe/vfs_open")
^

 [Cppcheck: FAILED] 
Traceback (most recent call last):
  File "/home/jose/wazuh/src/build.py", line 170, in <module>
    processArgs()
  File "/home/jose/wazuh/src/build.py", line 130, in processArgs
    run_check.runReadyToReview(moduleName=args.readytoreview,
  File "/home/jose/wazuh/src/ci/run_check.py", line 309, in runReadyToReview
    runCppCheck(moduleName=moduleName)
  File "/home/jose/wazuh/src/ci/run_check.py", line 290, in runCppCheck
    raise ValueError(errorString)
ValueError: Error Running cppcheck: 0

