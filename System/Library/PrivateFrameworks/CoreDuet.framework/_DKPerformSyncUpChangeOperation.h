/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSync2Policy, _DKSyncType, NSArray, _CDMutablePerfMetric;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	NSArray* _insertedEvents;
	NSArray* _deletedEventIDs;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;

}
-(void)main;
-(BOOL)isAsynchronous;
-(void)endOperation;
@end
