/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding> {

	NSString* _systemSerialNumber;
	NSString* _leftSerialNumber;
	NSString* _rightSerialNumber;

}

@property (nonatomic,copy) NSString * systemSerialNumber;              //@synthesize systemSerialNumber=_systemSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * leftSerialNumber;                //@synthesize leftSerialNumber=_leftSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * rightSerialNumber;               //@synthesize rightSerialNumber=_rightSerialNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSystemSerialNumber:(NSString *)arg1 ;
-(void)setLeftSerialNumber:(NSString *)arg1 ;
-(void)setRightSerialNumber:(NSString *)arg1 ;
-(NSString *)systemSerialNumber;
-(NSString *)leftSerialNumber;
-(NSString *)rightSerialNumber;
-(id)initWithSystemSerialNumber:(id)arg1 leftSerialNumber:(id)arg2 rightSerialNumber:(id)arg3 ;
@end

