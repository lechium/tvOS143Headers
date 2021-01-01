/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicy.h>

@interface HMDHomeManagerXPCMessageSendAnyOptionsPolicy : HMDXPCMessageSendPolicy {

	BOOL _active;
	unsigned long long _options;
	unsigned long long _entitlements;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                  //@synthesize active=_active - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)options;
-(BOOL)isActive;
-(unsigned long long)entitlements;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(BOOL)arg3 ;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)canSendWithPolicyParameters:(id)arg1 ;
@end

