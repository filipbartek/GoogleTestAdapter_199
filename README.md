This solution demonstrates issue [#199 of GoogleTestAdapter](https://github.com/csoltenborn/GoogleTestAdapter/issues/199).

The solution builds one test program with one test. The test prints the current directory to standard output.
With the option `<WorkingDir>$(SolutionDir)</WorkingDir>` present under `<ProjectSettings>` and not under `<SolutionSettings>`, the directory printed by the test is the executable directory ("GoogleTestAdapter_199\Debug"), which is also the default directory used by Google Test Adapter if no override is provided.
With the option `<WorkingDir>$(SolutionDir)</WorkingDir>` present under `<SolutionSettings>`, the directory printed by the test is the solution directory ("GoogleTestAdapter_199").
