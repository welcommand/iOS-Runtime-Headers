/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPerformanceTestHarness : NSObject {
    id /* block */  _completionHandler;
    NSString * _testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (getter=isRunningTest, nonatomic, readonly) BOOL runningTest;
@property (nonatomic, readonly, copy) NSString *testName;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithTestName:(id)arg1;
- (BOOL)isRunningTest;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)startSubtestWithName:(id)arg1;
- (void)startTesting;
- (void)stopSubtestWithName:(id)arg1;
- (void)stopTesting;
- (id)testName;

@end