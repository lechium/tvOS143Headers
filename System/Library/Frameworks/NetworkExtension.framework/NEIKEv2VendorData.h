/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2VendorData : NSObject <NSCopying> {

	NSData* _vendorData;

}

@property (retain) NSData * vendorData;              //@synthesize vendorData=_vendorData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)vendorData;
-(void)setVendorData:(NSData *)arg1 ;
@end

