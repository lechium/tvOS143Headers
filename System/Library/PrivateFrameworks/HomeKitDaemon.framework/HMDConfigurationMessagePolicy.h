/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDConfigurationMessagePolicy : HMFMessagePolicy {

	unsigned long long _operationTypes;

}

@property (readonly) unsigned long long operationTypes;              //@synthesize operationTypes=_operationTypes - In the implementation block
+(id)policyWithOperationTypes:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)__initWithOperationTypes:(unsigned long long)arg1 ;
-(unsigned long long)operationTypes;
@end

