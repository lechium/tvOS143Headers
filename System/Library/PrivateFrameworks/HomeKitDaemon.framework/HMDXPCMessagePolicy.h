/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCMessagePolicy : HMFMessagePolicy {

	unsigned long long _entitlements;

}

@property (readonly) unsigned long long entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
+(id)defaultPolicy;
+(id)policyWithEntitlements:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)entitlements;
-(id)__initWithEntitlements:(unsigned long long)arg1 ;
@end

