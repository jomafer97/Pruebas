root@jose-VirtualBox:/home/jose/wazuh/src# python3 build.py -r shared_modules/dbsync
 <shared_modules/dbsync>=============== Running RTR checks  ===============<shared_modules/dbsync> 
 <shared_modules/dbsync>=============== Running cppcheck    ===============<shared_modules/dbsync> 
 [Cppcheck: PASSED] 
 <shared_modules/dbsync>=============== Running AStyle      ===============<shared_modules/dbsync> 
 [Cleanfolder : PASSED] 
 [AStyle Check: PASSED] 
 [CleanAll: PASSED] 
 <agent>=============== Running Make Deps   ===============<agent>
 [MakeDeps: PASSED] 
 <agent>=============== Running Make project ==============<agent>
 [MakeTarget: PASSED] 
 <shared_modules/dbsync>=============== Running Tests       ===============<shared_modules/dbsync> 
 [dbsyncPipelineFactory_unit_test: PASSED] 
 [sqlite_unit_test: PASSED] 
 [dbsync_unit_test: PASSED] 
 [dbengine_unit_test: PASSED] 
 <shared_modules/dbsync>[All tests: PASSED]<shared_modules/dbsync> 
 <shared_modules/dbsync>=============== Running Coverage    ===============<shared_modules/dbsync> 
geninfo: WARNING: RC option 'lcov_branch_coverage' is deprecated.  Consider using 'branch_coverage. instead.  (Backward-compatible support will be removed in the future
geninfo: WARNING: /home/jose/wazuh/src/shared_modules/dbsync/src/sqlite/sqlite_dbengine.cpp:286: unexecuted block on non-branch line with non-zero hit count.  Use "geninfo --rc geninfo_unexecuted_blocks=1 to set count to zero.
geninfo: WARNING: /home/jose/wazuh/src/shared_modules/dbsync/src/sqlite/sqlite_dbengine.cpp:286: unexecuted block on non-branch line with non-zero hit count.  Use "geninfo --rc geninfo_unexecuted_blocks=1 to set count to zero.
	(use "geninfo --ignore-errors gcov,gcov ..." to suppress this warning)
geninfo: WARNING: /home/jose/wazuh/src/shared_modules/dbsync/src/sqlite/sqlite_dbengine.cpp:286: unexecuted block on non-branch line with non-zero hit count.  Use "geninfo --rc geninfo_unexecuted_blocks=1 to set count to zero.
	(use "geninfo --ignore-errors gcov,gcov ..." to suppress this warning)
 [lcov info: GENERATED] 
 [genhtml info: GENERATED] 
 Report: /home/jose/wazuh/src/shared_modules/dbsync/coverage_report/index.html 
 [Lines Coverage 94.2%: PASSED] 
Traceback (most recent call last):
  File "/home/jose/wazuh/src/build.py", line 170, in <module>
    processArgs()
  File "/home/jose/wazuh/src/build.py", line 133, in processArgs
    run_check.runReadyToReview(moduleName=args.readytoreview)
  File "/home/jose/wazuh/src/ci/run_check.py", line 329, in runReadyToReview
    runCoverage(moduleName=moduleName)
  File "/home/jose/wazuh/src/ci/run_check.py", line 256, in runCoverage
    checkCoverage(out.stdout)
  File "/home/jose/wazuh/src/ci/run_check.py", line 51, in checkCoverage
    if float(functionsCoverage) >= 90.0:
       ^^^^^^^^^^^^^^^^^^^^^^^^
ValueError: could not convert string to float: ''
