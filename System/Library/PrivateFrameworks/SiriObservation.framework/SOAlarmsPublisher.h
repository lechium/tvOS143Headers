/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, MTAlarmManager, SOAlarmsSnapshot, NSMutableOrderedSet, NSString;

@interface SOAlarmsPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _subscribers;
	MTAlarmManager* _alarmManager;
	SOAlarmsSnapshot* _alarmsSnapshot;
	NSMutableOrderedSet* _dismissedAlarms;
	NSString* _typeName;

}

@property (nonatomic,readonly) NSString * typeName;              //@synthesize typeName=_typeName - In the implementation block
-(id)init;
-(void)dealloc;
-(void)removeSubscriber:(id)arg1 ;
-(NSString *)typeName;
-(void)addSubscriber:(id)arg1 ;
-(void)stateReset:(id)arg1 ;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmsUpdated:(id)arg1 ;
-(void)alarmsRemoved:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(void)firingAlarmChanged:(id)arg1 ;
-(void)firingAlarmDismissed:(id)arg1 ;
-(void)_startObserving;
-(void)_createNewSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getCurrentSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifySubscribersOfEvent:(long long)arg1 ;
@end
