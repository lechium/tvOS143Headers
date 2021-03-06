/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSArray, NSSet;


@protocol PSBrokerCapabilities <NSObject>
@property (readonly) NSUUID * identifier; 
@property (copy,readonly) NSArray * exportedTopics; 
@property (copy,readonly) NSSet * supportedTransportIdentifiers; 
@required
-(NSUUID *)identifier;
-(NSSet *)supportedTransportIdentifiers;
-(NSArray *)exportedTopics;

@end

