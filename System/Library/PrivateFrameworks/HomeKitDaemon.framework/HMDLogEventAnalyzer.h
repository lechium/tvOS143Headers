/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@protocol HMDLogEventAnalyzerContext;
@class NSArray, NSString;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMDLogEventObserver> {

	id<HMDLogEventAnalyzerContext> _context;
	NSArray* _supportedEventTypes;

}

@property (readonly) id<HMDLogEventAnalyzerContext> context;              //@synthesize context=_context - In the implementation block
@property (readonly) NSArray * supportedEventTypes;                       //@synthesize supportedEventTypes=_supportedEventTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDLogEventAnalyzerContext>)context;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(NSArray *)supportedEventTypes;
-(BOOL)isSupportedEvent:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
@end

