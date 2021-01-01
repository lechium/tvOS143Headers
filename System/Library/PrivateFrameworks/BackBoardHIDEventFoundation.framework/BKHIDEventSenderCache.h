/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKIOHIDServiceDisappearanceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface BKHIDEventSenderCache : NSObject <BKIOHIDServiceDisappearanceObserver> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _senderIDToSenderInfo;

}

@property (nonatomic,retain) NSMutableDictionary * senderIDToSenderInfo;              //@synthesize senderIDToSenderInfo=_senderIDToSenderInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)sync;
-(id)initWithQueue:(id)arg1 ;
-(void)serviceDidDisappear:(id)arg1 ;
-(id)senderInfoForSenderID:(unsigned long long)arg1 ;
-(void)addSenderInfo:(id)arg1 forSenderID:(unsigned long long)arg2 ;
-(void)addSenderInfo:(id)arg1 ;
-(void)removeSenderInfo:(id)arg1 ;
-(NSMutableDictionary *)senderIDToSenderInfo;
-(void)setSenderIDToSenderInfo:(NSMutableDictionary *)arg1 ;
@end

