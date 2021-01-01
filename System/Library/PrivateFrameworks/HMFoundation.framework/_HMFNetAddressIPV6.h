/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetAddressInternal.h>

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {

	sockaddr_in6* _internal;

}

@property (nonatomic,readonly) sockaddr_in6* internal;              //@synthesize internal=_internal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(sockaddr_in6*)internal;
-(id)addressString;
-(unsigned long long)addressFamily;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

