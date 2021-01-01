/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject {

	BOOL _reachable;
	NSUUID* _identifier;

}

@property (copy,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;              //@synthesize reachable=_reachable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSUUID *)identifier;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isReachable;
@end

