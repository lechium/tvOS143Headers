/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject {

	NSMutableDictionary* _identifierToIMUserNotificationQueueMap;
	NSMutableDictionary* _identifierToListenerQueueMap;
	NSMutableDictionary* _identifierToBlockQueueMap;
	NSMutableDictionary* _identifierToRunLoopSourcesMap;
	NSMutableDictionary* _identifierToCFUserNotificationMap;

}

@property (nonatomic,retain) NSMutableDictionary * identifierToIMUserNotificationQueueMap;              //@synthesize identifierToIMUserNotificationQueueMap=_identifierToIMUserNotificationQueueMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToListenerQueueMap;                        //@synthesize identifierToListenerQueueMap=_identifierToListenerQueueMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToBlockQueueMap;                           //@synthesize identifierToBlockQueueMap=_identifierToBlockQueueMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToRunLoopSourcesMap;                       //@synthesize identifierToRunLoopSourcesMap=_identifierToRunLoopSourcesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToCFUserNotificationMap;                   //@synthesize identifierToCFUserNotificationMap=_identifierToCFUserNotificationMap - In the implementation block
+(id)sharedInstance;
-(void)removeListener:(id)arg1 ;
-(id)_dequeueUserNotificationForIdentifier:(id)arg1 ;
-(id)_dequeueListenerForIdentifier:(id)arg1 ;
-(/*^block*/id)_dequeueBlockForIdentifier:(id)arg1 ;
-(id)_frontUserNotificationForIdentifier:(id)arg1 ;
-(void)_displayNextUserNotificationForIdentifier:(id)arg1 ;
-(void)addUserNotification:(id)arg1 listener:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enqueueUserNotification:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_enqueueListener:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(void)_cancelActiveUserNotificationForIdentifier:(id)arg1 ;
-(id)_frontListenerForIdentifier:(id)arg1 ;
-(/*^block*/id)_frontBlockForIdentifier:(id)arg1 ;
-(void)_handleUserNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(void)addUserNotification:(id)arg1 listener:(id)arg2 ;
-(unsigned long long)countForIdentifier:(id)arg1 ;
-(void)removeNotificationsForServiceIdentifier:(id)arg1 ;
-(void)removeAllListeners;
-(NSMutableDictionary *)identifierToIMUserNotificationQueueMap;
-(void)setIdentifierToIMUserNotificationQueueMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToListenerQueueMap;
-(void)setIdentifierToListenerQueueMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToBlockQueueMap;
-(void)setIdentifierToBlockQueueMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToRunLoopSourcesMap;
-(void)setIdentifierToRunLoopSourcesMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToCFUserNotificationMap;
-(void)setIdentifierToCFUserNotificationMap:(NSMutableDictionary *)arg1 ;
@end

