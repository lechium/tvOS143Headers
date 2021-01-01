/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/XCTestObservation.h>

@protocol IMUnitTestRunnerDelegate;
@class NSMutableArray, IMUnitTestBundleLoader, IMUnitTestLogger, IMUnitTestFrameworkLoader, NSArray, NSString;

@interface IMUnitTestRunner : NSObject <XCTestObservation> {

	NSMutableArray* _failedTests;
	id<IMUnitTestRunnerDelegate> _delegate;
	IMUnitTestBundleLoader* _bundleLoader;
	IMUnitTestLogger* _logger;
	IMUnitTestFrameworkLoader* _frameworkLoader;

}

@property (__weak) id<IMUnitTestRunnerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) IMUnitTestBundleLoader * bundleLoader;                    //@synthesize bundleLoader=_bundleLoader - In the implementation block
@property (readonly) IMUnitTestLogger * logger;                                //@synthesize logger=_logger - In the implementation block
@property (readonly) IMUnitTestFrameworkLoader * frameworkLoader;              //@synthesize frameworkLoader=_frameworkLoader - In the implementation block
@property (readonly) NSArray * failedTests;                                    //@synthesize failedTests=_failedTests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<IMUnitTestRunnerDelegate>)delegate;
-(void)setDelegate:(id<IMUnitTestRunnerDelegate>)arg1 ;
-(void)log:(id)arg1 ;
-(id)dateFormatter;
-(IMUnitTestLogger *)logger;
-(id)initWithLogger:(id)arg1 bundleLoader:(id)arg2 ;
-(id)initWithLogger:(id)arg1 bundleLoader:(id)arg2 frameworkLoader:(id)arg3 ;
-(void)testLogWithFormat:(id)arg1 ;
-(IMUnitTestFrameworkLoader *)frameworkLoader;
-(BOOL)_loadFrameworksIfNeeded:(id*)arg1 ;
-(IMUnitTestBundleLoader *)bundleLoader;
-(id)descriptionFromResult:(id)arg1 ;
-(id)runTestsInBundleAtPath:(id)arg1 error:(id*)arg2 ;
-(void)logBanner:(id)arg1 ;
-(NSArray *)failedTests;
-(id)pathToPluginBundle:(id)arg1 ;
-(void)testSuiteWillStart:(id)arg1 ;
-(void)testSuiteDidFinish:(id)arg1 ;
-(void)testCaseWillStart:(id)arg1 ;
-(void)testCaseDidFinish:(id)arg1 ;
-(void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(long long)runTestsInBundleAtPath:(id)arg1 ;
-(id)runTestsInBundleNamed:(id)arg1 error:(id*)arg2 ;
@end

