/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskResultObject.h>

@class DMFSecurityInformation, NSDictionary;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject {

	DMFSecurityInformation* _securityInformation;
	NSDictionary* _valuesByPropertyKey;
	NSDictionary* _errorsByPropertyKey;

}

@property (nonatomic,copy,readonly) DMFSecurityInformation * securityInformation;              //@synthesize securityInformation=_securityInformation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * valuesByPropertyKey;                        //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByPropertyKey;                        //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2 ;
-(DMFSecurityInformation *)securityInformation;
-(id)initWithSecurityInformation:(id)arg1 ;
@end
