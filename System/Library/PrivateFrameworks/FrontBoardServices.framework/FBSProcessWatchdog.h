/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSProcessExecutionProvisionDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcessInternal;
@class NSString, FBSProcessWatchdogPolicy;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcessInternal> _process;
	FBSProcessWatchdogPolicy* _policy;
	BOOL _active;
	BOOL _invalidated;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                       //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) FBSProcessWatchdogPolicy * policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(id)completion;
-(void)activate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id<FBSProcess>)process;
-(void)_beginMonitoringConstraints;
-(void)_stopMonitoringConstraints;
-(void)deactivate;
-(void)setCompletion:(id)arg1 ;
-(void)provision:(id)arg1 wasViolatedWithError:(id)arg2 ;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(FBSProcessWatchdogPolicy *)policy;
@end

