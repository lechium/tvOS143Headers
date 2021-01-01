/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/PSBrokerTransport.h>

@class NSString, NSMutableSet;

@interface PSBrokerTransportCollection : HMFObject <PSBrokerTransport> {

	NSMutableSet* _transports;
	NSString* identifier;

}

@property (readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)identifier;
-(void)addTransport:(id)arg1 ;
-(void)addSubscriptions:(id)arg1 forTopicWithName:(id)arg2 ;
-(void)removeSubscriptions:(id)arg1 forTopicWithName:(id)arg2 ;
-(void)publishEvent:(id)arg1 forTopicWithName:(id)arg2 toRemoteDevices:(id)arg3 ;
@end

