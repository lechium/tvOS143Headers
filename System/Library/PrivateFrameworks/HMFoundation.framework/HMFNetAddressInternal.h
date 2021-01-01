/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMFNetAddressInternal : HMFObject {

	unsigned long long _addressFamily;
	NSString* _addressString;

}

@property (nonatomic,readonly) unsigned long long addressFamily;              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressString;                 //@synthesize addressString=_addressString - In the implementation block
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
@end

