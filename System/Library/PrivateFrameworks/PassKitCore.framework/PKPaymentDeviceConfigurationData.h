/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSNumber* _primaryJSBLSequenceCounter;
	NSString* _secureElementIdentifier;

}

@property (nonatomic,copy) NSNumber * primaryJSBLSequenceCounter;              //@synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                   //@synthesize devSigned=_devSigned - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(BOOL)devSigned;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)setPrimaryJSBLSequenceCounter:(NSNumber *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
@end
