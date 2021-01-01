/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKNameComponentFormatConfiguration, PKAddressFormatConfiguration;

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding> {

	PKNameComponentFormatConfiguration* _nameComponentFormatConfiguration;
	PKAddressFormatConfiguration* _addressFormatConfiguration;

}

@property (nonatomic,readonly) PKNameComponentFormatConfiguration * nameComponentFormatConfiguration;              //@synthesize nameComponentFormatConfiguration=_nameComponentFormatConfiguration - In the implementation block
@property (nonatomic,readonly) PKAddressFormatConfiguration * addressFormatConfiguration;                          //@synthesize addressFormatConfiguration=_addressFormatConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKNameComponentFormatConfiguration *)nameComponentFormatConfiguration;
-(PKAddressFormatConfiguration *)addressFormatConfiguration;
@end

