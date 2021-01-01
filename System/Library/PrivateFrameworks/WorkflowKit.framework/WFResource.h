/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFErrorRecoveryAttempting.h>

@protocol OS_dispatch_queue;
@class NSError, NSDictionary, NSObject, NSString;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting> {

	BOOL _available;
	BOOL _shouldRefreshAvailability;
	NSError* _availabilityError;
	NSDictionary* _definition;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;

}

@property (nonatomic,readonly) BOOL shouldRefreshAvailability;                             //@synthesize shouldRefreshAvailability=_shouldRefreshAvailability - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;              //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * definition;                             //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventDictionary; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available;                          //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) NSError * availabilityError;                                //@synthesize availabilityError=_availabilityError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isSingleton;
+(BOOL)mustBeAvailableForDisplay;
+(BOOL)refreshesAvailabilityOnApplicationResume;
+(BOOL)alwaysMakeAvailable;
-(id)init;
-(void)dealloc;
-(NSDictionary *)definition;
-(BOOL)isAvailable;
-(BOOL)_isAvailable;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailabilityWithNotification;
-(void)refreshAvailabilityWithNotification:(BOOL)arg1 ;
-(void)refreshAvailabilityWithForcedNotification;
-(NSError *)availabilityError;
-(void)refreshAvailability;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(NSDictionary *)eventDictionary;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
-(id)_availabilityError;
-(void)refreshAvailabilityIfNeeded;
-(BOOL)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(BOOL)arg1 ;
-(void)notifyResourcesAboutAvailabilityChange;
-(void)updateAvailability:(BOOL)arg1 withError:(id)arg2 ;
-(void)invalidateAvailability;
-(BOOL)shouldRefreshAvailability;
@end

