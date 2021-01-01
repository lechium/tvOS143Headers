/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETDistributionEventTracker : PETEventTracker {

	NSString* _event;

}

@property (nonatomic,readonly) NSString * event;              //@synthesize event=_event - In the implementation block
-(NSString *)event;
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4 ;
-(void)trackEventWithPropertyValues:(id)arg1 value:(double)arg2 ;
@end

